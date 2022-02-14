
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ xbe_msize; char* xbe_name; char* xbe_interpreter; } ;
typedef TYPE_1__ ximgact_binmisc_entry_t ;
typedef int imgact_binmisc_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *,int *,int ) ;
 int * FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(ximgact_binmisc_entry_t *VAR_9)
{
 imgact_binmisc_entry_t *VAR_10;
 char *VAR_11;
 int VAR_12;

 if (VAR_9->xbe_msize > VAR_3)
  return (VAR_1);

 for(VAR_12 = 0, VAR_11 = VAR_9->xbe_name; *VAR_11 != 0; VAR_12++, VAR_11++)
  if (VAR_12 >= VAR_4 || !FUNC_3((int)*VAR_11))
   return (VAR_1);

 for(VAR_12 = 0, VAR_11 = VAR_9->xbe_interpreter; *VAR_11 != 0; VAR_12++, VAR_11++)
  if (VAR_12 >= VAR_2 || !FUNC_3((int)*VAR_11))
   return (VAR_1);


 VAR_11 = VAR_9->xbe_interpreter;
 while (1) {
  VAR_11 = FUNC_4(VAR_11, '#');
  if (!VAR_11)
   break;

  VAR_11++;
  switch(*VAR_11) {
  case 128:

   VAR_11++;
   break;

  case 129:

   VAR_11++;
   break;

  case 0:
  default:

   return (VAR_1);
  }
 }

 FUNC_5(&VAR_6);
 if (FUNC_1(VAR_9->xbe_name) != ((void*)0)) {
  FUNC_6(&VAR_6);
  return (VAR_0);
 }


 VAR_10 = FUNC_2(VAR_9);

 FUNC_0(&VAR_7, VAR_10, VAR_8);
 VAR_5++;
 FUNC_6(&VAR_6);

 return (0);
}
