
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct unionfs_mount {TYPE_1__* um_uppervp; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {int v_mount; } ;


 struct unionfs_mount* FUNC_0 (struct mount*) ;
 int FUNC_1 (int ,int,int ,void*) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_0, int VAR_1, uid_t VAR_2, void *VAR_3)
{
 struct unionfs_mount *VAR_4;

 VAR_4 = FUNC_0(VAR_0);




 return (FUNC_1(VAR_4->um_uppervp->v_mount, VAR_1, VAR_2, VAR_3));
}
