
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfs_info {int pi_mutex; int * pi_unrhdr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct pfs_info *VAR_0)
{

 FUNC_0(VAR_0->pi_unrhdr);
 VAR_0->pi_unrhdr = ((void*)0);
 FUNC_1(&VAR_0->pi_mutex);
}
