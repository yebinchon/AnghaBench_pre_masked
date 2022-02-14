
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_group {unsigned int num_members; } ;



unsigned int FUNC_0(struct p2p_group *VAR_0)
{
 if (!VAR_0)
  return 0;

 return VAR_0->num_members;
}
