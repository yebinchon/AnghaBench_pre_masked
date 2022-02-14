
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {unsigned int ngroups; } ;
typedef scalar_t__ gid_t ;


 scalar_t__ FUNC_0 (struct group_info const*,unsigned int) ;

int FUNC_1(const struct group_info *VAR_0, gid_t VAR_1)
{
 unsigned int VAR_2, VAR_3;

 if (!VAR_0)
  return 0;

 VAR_2 = 0;
 VAR_3 = VAR_0->ngroups;
 while (VAR_2 < VAR_3) {
  unsigned int VAR_4 = (VAR_2+VAR_3)/2;
  if (VAR_1 > FUNC_0(VAR_0, VAR_4))
   VAR_2 = VAR_4 + 1;
  else if (VAR_1 < FUNC_0(VAR_0, VAR_4))
   VAR_3 = VAR_4;
  else
   return 1;
 }
 return 0;
}
