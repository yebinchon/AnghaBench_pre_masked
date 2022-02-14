
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fv_val; int * fv_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_6(char *VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_3 = 0;
 VAR_10 = (int)FUNC_5(VAR_5, &VAR_6, 0);
 if ((VAR_3 != VAR_2) && (*VAR_6 == '\0')) {
  if (VAR_10 & ~(VAR_1|VAR_0))
   return (-1);
  return (VAR_10);
 }


 if ((VAR_6 = FUNC_3(VAR_5)) == ((void*)0))
  FUNC_0(1, "no memory to parse flags");
 VAR_9 = 0;
 for (VAR_7 = VAR_6; (VAR_7 = FUNC_4(VAR_7, ",")) != ((void*)0); VAR_7 = ((void*)0)) {
  for (VAR_8 = 0; VAR_4[VAR_8].fv_flag != ((void*)0); ++VAR_8)
   if (FUNC_2(VAR_7, VAR_4[VAR_8].fv_flag) == 0)
    break;
  if (VAR_4[VAR_8].fv_flag == ((void*)0)) {
   FUNC_1(VAR_6);
   return (-1);
  }
  VAR_9 |= VAR_4[VAR_8].fv_val;
 }


 FUNC_1(VAR_6);
 return (VAR_9);
}
