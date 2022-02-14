
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_group_member {int const* addr; } ;
struct p2p_group {int dummy; } ;


 struct p2p_group_member* FUNC_0 (struct p2p_group*,int const*) ;

const u8 * FUNC_1(struct p2p_group *VAR_0,
            const u8 *VAR_1)
{
 struct p2p_group_member *VAR_2;

 if (!VAR_0)
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2->addr;
 return ((void*)0);
}
