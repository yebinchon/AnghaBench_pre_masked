
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_sym {scalar_t__ name; int number; char const* humanname; } ;


 int FUNC_0 (char*,char*,int) ;
 char* VAR_0 ;

const char *
FUNC_1(const struct res_sym *VAR_1, int VAR_2, int *VAR_3) {
 char *VAR_4 = VAR_0;

 for ((void)((void*)0); VAR_1->name != 0; VAR_1++) {
  if (VAR_2 == VAR_1->number) {
   if (VAR_3)
    *VAR_3 = 1;
   return (VAR_1->humanname);
  }
 }
 FUNC_0(VAR_4, "%d", VAR_2);
 if (VAR_3)
  *VAR_3 = 0;
 return (VAR_4);
}
