
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(void)
{
 int VAR_7;

 VAR_5 = FUNC_0("rpc_inode_cache",
    sizeof(struct rpc_inode),
    0, (VAR_1|VAR_3|
      VAR_2),
    VAR_4);
 if (!VAR_5)
  return -VAR_0;
 VAR_7 = FUNC_2(&VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_5);
  return VAR_7;
 }

 return 0;
}
