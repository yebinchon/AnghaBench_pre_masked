
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
struct TYPE_6__ {int vsa_mask; int vsa_aclcnt; int vsa_aclentsz; int * vsa_aclentp; scalar_t__ vsa_aclflags; } ;
typedef TYPE_1__ vsecattr_t ;
typedef int vsa ;
typedef int vnode_t ;
struct TYPE_7__ {int lr_aclcnt; int lr_foid; } ;
typedef TYPE_2__ lr_acl_v0_t ;
typedef scalar_t__ boolean_t ;
typedef int ace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_4 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,TYPE_1__*,int ,int ,int *) ;
 int FUNC_8 (int *,int ,int **) ;

__attribute__((used)) static int
FUNC_9(void *VAR_5, void *VAR_6, boolean_t VAR_7)
{
 zfsvfs_t *VAR_8 = VAR_5;
 lr_acl_v0_t *VAR_9 = VAR_6;
 ace_t *VAR_10 = (ace_t *)(VAR_9 + 1);
 vsecattr_t VAR_11;
 vnode_t *VAR_12;
 znode_t *VAR_13;
 int VAR_14;

 if (VAR_7) {
  FUNC_3(VAR_9, sizeof (*VAR_9));
  FUNC_6(VAR_10, VAR_9->lr_aclcnt);
 }

 if ((VAR_14 = FUNC_8(VAR_8, VAR_9->lr_foid, &VAR_13)) != 0)
  return (VAR_14);

 FUNC_4(&VAR_11, sizeof (VAR_11));
 VAR_11.vsa_mask = VAR_2 | VAR_3;
 VAR_11.vsa_aclcnt = VAR_9->lr_aclcnt;
 VAR_11.vsa_aclentsz = sizeof (ace_t) * VAR_11.vsa_aclcnt;
 VAR_11.vsa_aclflags = 0;
 VAR_11.vsa_aclentp = VAR_10;

 VAR_12 = FUNC_2(VAR_13);
 FUNC_5(VAR_12, VAR_0 | VAR_1);
 VAR_14 = FUNC_7(VAR_12, &VAR_11, 0, VAR_4, ((void*)0));
 FUNC_1(VAR_12, 0);

 FUNC_0(VAR_12);

 return (VAR_14);
}
