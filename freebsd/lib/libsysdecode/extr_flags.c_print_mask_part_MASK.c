
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct name_table {int val; int * str; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,int *) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, struct name_table *VAR_1, uintmax_t *VAR_2,
    bool *VAR_3)
{
 uintmax_t VAR_4;

 VAR_4 = *VAR_2;
 for (; VAR_1->str != ((void*)0); VAR_1++) {
  if ((VAR_1->val & VAR_4) == VAR_1->val) {




   if (VAR_1->val == 0 && *VAR_2 != 0)
    continue;
   FUNC_0(VAR_0, "%s%s", *VAR_3 ? "|" : "", VAR_1->str);
   *VAR_3 = 1;
   VAR_4 &= ~VAR_1->val;
  }
 }

 *VAR_2 = VAR_4;
}
