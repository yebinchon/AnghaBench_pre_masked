
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfs_info {int pi_mutex; int pi_unrhdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (int,int,int *) ;

void
FUNC_2(struct pfs_info *VAR_3)
{

 FUNC_0(&VAR_3->pi_mutex, "pfs_fileno", ((void*)0), VAR_1);
 VAR_3->pi_unrhdr = FUNC_1(3, VAR_0 / VAR_2, &VAR_3->pi_mutex);
}
