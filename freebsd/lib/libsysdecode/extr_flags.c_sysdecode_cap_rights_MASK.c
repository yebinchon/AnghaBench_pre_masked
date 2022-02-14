
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct name_table {int * str; int val; } ;
struct TYPE_5__ {int * cr_rights; } ;
typedef TYPE_1__ cap_rights_t ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 struct name_table* VAR_0 ;
 int FUNC_3 (int *,char*,...) ;

void
FUNC_4(FILE *VAR_1, cap_rights_t *VAR_2)
{
 struct name_table *VAR_3;
 int VAR_4;
 bool VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (FUNC_1(VAR_2->cr_rights[VAR_4]) != 1 << VAR_4) {
   FUNC_3(VAR_1, "invalid cap_rights_t");
   return;
  }
 }
 VAR_5 = 0;
 for (VAR_3 = VAR_0; VAR_3->str != ((void*)0); VAR_3++) {
  if (FUNC_2(VAR_2, VAR_3->val)) {
   FUNC_3(VAR_1, "%s%s", VAR_5 ? "," : "", VAR_3->str);
   VAR_5 = 1;
  }
 }
}
