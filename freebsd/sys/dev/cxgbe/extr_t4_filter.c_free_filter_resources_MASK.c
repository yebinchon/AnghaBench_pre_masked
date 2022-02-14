
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_entry {int * smt; int * l2te; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct filter_entry *VAR_0)
{

 if (VAR_0->l2te) {
  FUNC_0(VAR_0->l2te);
  VAR_0->l2te = ((void*)0);
 }
 if (VAR_0->smt) {
  FUNC_1(VAR_0->smt);
  VAR_0->smt = ((void*)0);
 }
}
