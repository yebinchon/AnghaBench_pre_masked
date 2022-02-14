
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ** ns_sbp; int ** ns_sbh; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct the_nilfs *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  if (VAR_0->ns_sbp[VAR_1]) {
   FUNC_0(VAR_0->ns_sbh[VAR_1]);
   VAR_0->ns_sbh[VAR_1] = ((void*)0);
   VAR_0->ns_sbp[VAR_1] = ((void*)0);
  }
 }
}
