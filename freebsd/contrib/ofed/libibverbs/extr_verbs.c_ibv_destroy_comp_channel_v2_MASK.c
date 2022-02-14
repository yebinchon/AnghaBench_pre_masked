
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_comp_channel {int dummy; } ;
struct ibv_abi_compat_v2 {int in_use; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ibv_comp_channel *VAR_0)
{
 struct ibv_abi_compat_v2 *VAR_1 = (struct ibv_abi_compat_v2 *) VAR_0;
 FUNC_0(&VAR_1->in_use);
 return 0;
}
