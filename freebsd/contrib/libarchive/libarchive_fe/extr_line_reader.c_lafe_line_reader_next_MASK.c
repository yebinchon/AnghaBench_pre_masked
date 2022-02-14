
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lafe_line_reader {char* line_end; char* buff_end; char* line_start; char* buff; int buff_length; int * f; int pathname; scalar_t__ nullSeparator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (char*,int,size_t,int *) ;
 int FUNC_4 (int,int ,char*,int ) ;
 int FUNC_5 (struct lafe_line_reader*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,size_t) ;
 int * VAR_2 ;

const char *
FUNC_8(struct lafe_line_reader *VAR_3)
{
 size_t VAR_4, VAR_5, VAR_6;
 char *VAR_7, *VAR_8;

 for (;;) {

  while (VAR_3->line_end < VAR_3->buff_end) {
   VAR_7 = VAR_3->line_start;
   VAR_3->line_start = ++VAR_3->line_end;
   FUNC_5(VAR_3);

   if (VAR_3->nullSeparator || VAR_7[0] != '\0')
    return (VAR_7);
  }


  if (VAR_3->f == ((void*)0)) {
   if (VAR_3->line_start == VAR_3->buff_end)
    return (((void*)0));
   VAR_7 = VAR_3->line_start;
   VAR_3->line_start = VAR_3->buff_end;
   return (VAR_7);
  }


  if (VAR_3->line_start > VAR_3->buff) {

   FUNC_6(VAR_3->buff, VAR_3->line_start,
       VAR_3->buff_end - VAR_3->line_start);
   VAR_3->buff_end -= VAR_3->line_start - VAR_3->buff;
   VAR_3->line_end -= VAR_3->line_start - VAR_3->buff;
   VAR_3->line_start = VAR_3->buff;
  } else {

   VAR_6 = VAR_3->buff_length * 2;
   if (VAR_6 <= VAR_3->buff_length)
    FUNC_4(1, VAR_0,
        "Line too long in %s", VAR_3->pathname);
   VAR_3->buff_length = VAR_6;




   VAR_8 = FUNC_7(VAR_3->buff, VAR_6 + 1);
   if (VAR_8 == ((void*)0))
    FUNC_4(1, VAR_0,
        "Line too long in %s", VAR_3->pathname);
   VAR_3->buff_end = VAR_8 + (VAR_3->buff_end - VAR_3->buff);
   VAR_3->line_end = VAR_8 + (VAR_3->line_end - VAR_3->buff);
   VAR_3->line_start = VAR_3->buff = VAR_8;
  }


  VAR_4 = VAR_3->buff + VAR_3->buff_length - VAR_3->buff_end;
  VAR_5 = FUNC_3(VAR_3->buff_end, 1, VAR_4, VAR_3->f);
  VAR_3->buff_end += VAR_5;
  *VAR_3->buff_end = '\0';
  FUNC_5(VAR_3);

  if (FUNC_2(VAR_3->f))
   FUNC_4(1, VAR_1, "Can't read %s", VAR_3->pathname);
  if (FUNC_1(VAR_3->f)) {
   if (VAR_3->f != VAR_2)
    FUNC_0(VAR_3->f);
   VAR_3->f = ((void*)0);
  }
 }
}
