
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dao_ctrl_blk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dao_ctrl_blk* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(void **VAR_2)
{
 struct dao_ctrl_blk *VAR_3;

 *VAR_2 = ((void*)0);
 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 *VAR_2 = VAR_3;

 return 0;
}
