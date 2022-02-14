
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mount {TYPE_2__* mnt_vfc; } ;
struct TYPE_4__ {TYPE_1__* vfc_vfsops_sd; } ;
struct TYPE_3__ {int (* vfs_checkexp ) (struct mount*,struct sockaddr*,int*,struct ucred**,int*,int**) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mount*,struct sockaddr*,int*,struct ucred**,int*,int**) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_1, struct sockaddr *VAR_2, int *VAR_3,
    struct ucred **VAR_4, int *VAR_5, int **VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_0);
 VAR_8 = (*VAR_1->mnt_vfc->vfc_vfsops_sd->vfs_checkexp)(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6);
 FUNC_0(VAR_7);
 return (VAR_8);
}
