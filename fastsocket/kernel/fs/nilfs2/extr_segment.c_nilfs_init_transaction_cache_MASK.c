
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int,int ,int ,int *) ;
 int * VAR_2 ;

int FUNC_1(void)
{
 VAR_2 =
  FUNC_0("nilfs2_transaction_cache",
      sizeof(struct nilfs_transaction_info),
      0, VAR_1, ((void*)0));
 return (VAR_2 == ((void*)0)) ? -VAR_0 : 0;
}
