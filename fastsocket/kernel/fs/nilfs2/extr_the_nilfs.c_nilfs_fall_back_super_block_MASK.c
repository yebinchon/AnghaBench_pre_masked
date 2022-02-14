
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ** ns_sbp; int ** ns_sbh; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct the_nilfs *VAR_0)
{
 FUNC_0(VAR_0->ns_sbh[0]);
 VAR_0->ns_sbh[0] = VAR_0->ns_sbh[1];
 VAR_0->ns_sbp[0] = VAR_0->ns_sbp[1];
 VAR_0->ns_sbh[1] = ((void*)0);
 VAR_0->ns_sbp[1] = ((void*)0);
}
