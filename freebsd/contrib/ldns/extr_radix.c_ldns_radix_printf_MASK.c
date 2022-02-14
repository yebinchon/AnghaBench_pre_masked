
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int root; } ;
typedef TYPE_1__ ldns_radix_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int ,int *,int ,int ) ;

void
FUNC_2(FILE* VAR_0, const ldns_radix_t* VAR_1)
{
 if (!VAR_0 || !VAR_1) {
  return;
 }
 if (!VAR_1->root) {
  FUNC_0(VAR_0, "; empty radix tree\n");
  return;
 }
 FUNC_1(VAR_0, VAR_1->root, 0, ((void*)0), 0, 0);
 return;
}
