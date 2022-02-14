
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct vfsoptlist* mnt_optnew; } ;
typedef TYPE_1__ vfs_t ;
struct vfsoptlist {int dummy; } ;


 int FUNC_0 (struct vfsoptlist*,char const*,void**,int *) ;

int
FUNC_1(const vfs_t *VAR_0, const char *VAR_1, char **VAR_2)
{
 struct vfsoptlist *VAR_3 = VAR_0->mnt_optnew;
 int VAR_4;

 if (VAR_3 == ((void*)0))
  return (0);
 VAR_4 = FUNC_0(VAR_3, VAR_1, (void **)VAR_2, ((void*)0));
 return (VAR_4 != 0 ? 0 : 1);
}
