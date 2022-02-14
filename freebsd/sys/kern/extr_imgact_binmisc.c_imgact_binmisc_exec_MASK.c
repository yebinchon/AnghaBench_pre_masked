
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct image_params {char* image_header; int interpreted; char* interpreter_name; TYPE_3__* args; } ;
struct TYPE_4__ {size_t ibe_interp_length; char* ibe_interpreter; scalar_t__ ibe_interp_argcnt; } ;
typedef TYPE_1__ imgact_binmisc_entry_t ;
struct TYPE_5__ {char* fname; char* begin_argv; int argc; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 char* VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,size_t) ;
 TYPE_1__* FUNC_1 (char const*) ;
 int VAR_4 ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,char*,char) ;
 char* FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*) ;
 struct sbuf* FUNC_7 () ;
 int FUNC_8 (struct sbuf*,char*,int ) ;
 char* FUNC_9 (char*,char) ;
 size_t FUNC_10 (char const*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct image_params *VAR_5)
{
 const char *VAR_6 = VAR_5->image_header;
 const char *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 size_t VAR_9, VAR_10;
 imgact_binmisc_entry_t *VAR_11;
 struct sbuf *VAR_12;
 char *VAR_13, *VAR_14;


 FUNC_11(&VAR_4);
 if ((VAR_11 = FUNC_1(VAR_6)) == ((void*)0)) {
  FUNC_12(&VAR_4);
  return (-1);
 }


 if (VAR_5->interpreted & VAR_2) {
  FUNC_12(&VAR_4);
  return (VAR_1);
 }

 VAR_5->interpreted |= VAR_2;

 if (VAR_5->args->fname != ((void*)0)) {
  VAR_7 = VAR_5->args->fname;
  VAR_12 = ((void*)0);
 } else {

  VAR_12 = FUNC_7();
  FUNC_8(VAR_12, "/dev/fd/%d", VAR_5->args->fd);
  FUNC_6(VAR_12);
  VAR_7 = FUNC_4(VAR_12);
 }
 VAR_9 = VAR_11->ibe_interp_length;


 VAR_13 = VAR_11->ibe_interpreter;
 while (1) {
  VAR_13 = FUNC_9(VAR_13, '#');
  if (!VAR_13)
   break;

  VAR_13++;
  switch(*VAR_13) {
  case 128:

   VAR_9--;
   break;

  case 129:

   VAR_9 += FUNC_10(VAR_7) - 2;
   break;

  default:

   FUNC_12(&VAR_4);
   FUNC_3("%s: Unknown macro #%c sequence in "
       "interpreter string\n", VAR_3, *(VAR_13 + 1));
   VAR_8 = VAR_0;
   goto done;
  }
  VAR_13++;
 }


 VAR_8 = FUNC_0(VAR_5->args, 0, VAR_9);
 if (VAR_8 != 0) {
  FUNC_12(&VAR_4);
  goto done;
 }


 VAR_5->args->argc += VAR_11->ibe_interp_argcnt;





 VAR_13 = VAR_11->ibe_interpreter;
 VAR_14 = VAR_5->args->begin_argv;
 while(*VAR_13 != '\0') {
  switch (*VAR_13) {
  case '#':

   VAR_13++;
   switch(*VAR_13) {
   case 128:

    *VAR_14++ = '#';
    break;

   case 129:

    if ((VAR_10 = FUNC_10(VAR_7)) != 0) {
     FUNC_2(VAR_14, VAR_7, VAR_10);
     VAR_14 += VAR_10;
    }
    break;

   default:

    break;
   }
   break;

  case ' ':

   *VAR_14++ = '\0';
   break;

  default:
   *VAR_14++ = *VAR_13;
   break;
  }
  VAR_13++;
 }
 *VAR_14 = '\0';
 FUNC_12(&VAR_4);

 if (!VAR_8)
  VAR_5->interpreter_name = VAR_5->args->begin_argv;


done:
 if (VAR_12)
  FUNC_5(VAR_12);
 return (VAR_8);
}
