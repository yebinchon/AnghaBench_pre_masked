
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int z_mode; int z_uid; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_11__ {scalar_t__ z_replay; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ uid_t ;
typedef int cred_t ;
struct TYPE_12__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_7__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ,int ,int *) ;

int
FUNC_5(znode_t *VAR_5, znode_t *VAR_6, cred_t *VAR_7)
{
 uid_t VAR_8;
 uid_t VAR_9;
 uid_t VAR_10;
 zfsvfs_t *VAR_11 = VAR_5->z_zfsvfs;

 if (VAR_5->z_zfsvfs->z_replay)
  return (0);

 if ((VAR_5->z_mode & VAR_2) == 0)
  return (0);

 VAR_9 = FUNC_3(VAR_11, VAR_5->z_uid, VAR_7, VAR_4);
 VAR_10 = FUNC_3(VAR_11, VAR_6->z_uid, VAR_7, VAR_4);

 if ((VAR_8 = FUNC_1(VAR_7)) == VAR_9 || VAR_8 == VAR_10 ||
     (FUNC_0(VAR_6)->v_type == VAR_3 &&
     FUNC_4(VAR_6, VAR_0, 0, VAR_1, VAR_7) == 0))
  return (0);
 else
  return (FUNC_2(FUNC_0(VAR_6), VAR_7));
}
