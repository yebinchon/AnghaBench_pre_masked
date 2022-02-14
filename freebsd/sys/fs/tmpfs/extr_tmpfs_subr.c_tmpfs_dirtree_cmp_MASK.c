
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_dirent {scalar_t__ td_hash; } ;



__attribute__((used)) static __inline int
FUNC_0(struct tmpfs_dirent *VAR_0, struct tmpfs_dirent *VAR_1)
{
 if (VAR_0->td_hash > VAR_1->td_hash)
  return (1);
 else if (VAR_0->td_hash < VAR_1->td_hash)
  return (-1);
 return (0);
}
