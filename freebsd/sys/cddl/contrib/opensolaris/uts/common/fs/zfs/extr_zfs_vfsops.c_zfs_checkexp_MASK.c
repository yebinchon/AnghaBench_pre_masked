
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* z_parent; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_7__ {TYPE_2__* vfs_data; } ;
typedef TYPE_3__ vfs_t ;
struct ucred {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int z_vfs; } ;


 int FUNC_0 (int ,struct sockaddr*,int*,struct ucred**,int*,int**) ;

__attribute__((used)) static int
FUNC_1(vfs_t *VAR_0, struct sockaddr *VAR_1, int *VAR_2,
    struct ucred **VAR_3, int *VAR_4, int **VAR_5)
{
 zfsvfs_t *VAR_6 = VAR_0->vfs_data;
 return (FUNC_0(VAR_6->z_parent->z_vfs, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5));
}
