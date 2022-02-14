
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_14__ {TYPE_1__* z_vfs; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int vnode_t ;
struct TYPE_15__ {int va_mask; int va_mode; int va_gid; int va_uid; int va_type; } ;
typedef TYPE_4__ vattr_t ;
typedef int cred_t ;
struct TYPE_12__ {int vfs_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_3 (TYPE_2__*,char*,TYPE_2__**,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,int **,int *) ;

int
FUNC_6(znode_t *VAR_14, vnode_t **VAR_15, cred_t *VAR_16, int VAR_17)
{
 zfsvfs_t *VAR_18 = VAR_14->z_zfsvfs;
 znode_t *VAR_19;
 vattr_t VAR_20;
 int VAR_21;
top:
 VAR_21 = FUNC_3(VAR_14, "", &VAR_19, VAR_13);
 if (VAR_21)
  return (VAR_21);

 if (VAR_19 != ((void*)0)) {
  *VAR_15 = FUNC_2(VAR_19);
  return (0);
 }


 if (!(VAR_17 & VAR_4)) {



  return (FUNC_0(VAR_5));

 }

 if (VAR_18->z_vfs->vfs_flag & VAR_12) {
  return (FUNC_0(VAR_8));
 }
 VAR_20.va_mask = VAR_2 | VAR_1 | VAR_3 | VAR_0;
 VAR_20.va_type = VAR_11;
 VAR_20.va_mode = VAR_9 | VAR_10 | 0777;
 FUNC_4(VAR_14, VAR_16, &VAR_20.va_uid, &VAR_20.va_gid);

 VAR_21 = FUNC_5(VAR_14, &VAR_20, VAR_15, VAR_16);

 if (VAR_21 == VAR_7) {

  goto top;
 }
 if (VAR_21 == 0)
  FUNC_1(*VAR_15, 0);

 return (VAR_21);
}
