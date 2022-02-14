
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ z_version; int z_norm; int z_utf8; scalar_t__ z_case; scalar_t__ z_root; scalar_t__ z_unlinkedobj; scalar_t__ z_userquota_obj; scalar_t__ z_groupquota_obj; scalar_t__ z_fuid_obj; scalar_t__ z_shares_dir; int z_use_namecache; int z_attr_table; scalar_t__ z_use_sa; int * z_os; int z_use_fuids; int z_show_ctldir; int z_max_blksz; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ,int,int,scalar_t__*) ;
 int VAR_21 ;
 int FUNC_10 (int *,int ,scalar_t__*) ;
 int VAR_22 ;
 int * VAR_23 ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static int
FUNC_12(zfsvfs_t *VAR_24, objset_t *VAR_25)
{
 int VAR_26;
 uint64_t VAR_27;

 VAR_24->z_max_blksz = VAR_3;
 VAR_24->z_show_ctldir = VAR_17;
 VAR_24->z_os = VAR_25;

 VAR_26 = FUNC_10(VAR_25, VAR_13, &VAR_24->z_version);
 if (VAR_26 != 0)
  return (VAR_26);
 if (VAR_24->z_version >
     FUNC_11(FUNC_8(FUNC_4(VAR_25)))) {
  (void) FUNC_5("Can't mount a version %lld file system "
      "on a version %lld pool\n. Pool must be upgraded to mount "
      "this file system.", (u_longlong_t)VAR_24->z_version,
      (u_longlong_t)FUNC_8(FUNC_4(VAR_25)));
  return (FUNC_1(VAR_1));
 }
 VAR_26 = FUNC_10(VAR_25, VAR_10, &VAR_27);
 if (VAR_26 != 0)
  return (VAR_26);
 VAR_24->z_norm = (int)VAR_27;

 VAR_26 = FUNC_10(VAR_25, VAR_12, &VAR_27);
 if (VAR_26 != 0)
  return (VAR_26);
 VAR_24->z_utf8 = (VAR_27 != 0);

 VAR_26 = FUNC_10(VAR_25, VAR_8, &VAR_27);
 if (VAR_26 != 0)
  return (VAR_26);
 VAR_24->z_case = (uint_t)VAR_27;





 if (VAR_24->z_case == VAR_5 ||
     VAR_24->z_case == VAR_6)
  VAR_24->z_norm |= VAR_4;

 VAR_24->z_use_fuids = FUNC_2(VAR_24->z_version, VAR_24->z_os);
 VAR_24->z_use_sa = FUNC_3(VAR_24->z_version, VAR_24->z_os);

 uint64_t VAR_28 = 0;
 if (VAR_24->z_use_sa) {

  VAR_26 = FUNC_9(VAR_25, VAR_2, VAR_15, 8, 1,
      &VAR_28);
  if (VAR_26 != 0)
   return (VAR_26);
 }

 VAR_26 = FUNC_7(VAR_25, VAR_28, VAR_21, VAR_19,
     &VAR_24->z_attr_table);
 if (VAR_26 != 0)
  return (VAR_26);

 if (VAR_24->z_version >= VAR_20)
  FUNC_6(VAR_25, VAR_22);

 VAR_26 = FUNC_9(VAR_25, VAR_2, VAR_14, 8, 1,
     &VAR_24->z_root);
 if (VAR_26 != 0)
  return (VAR_26);
 FUNC_0(VAR_24->z_root != 0);

 VAR_26 = FUNC_9(VAR_25, VAR_2, VAR_18, 8, 1,
     &VAR_24->z_unlinkedobj);
 if (VAR_26 != 0)
  return (VAR_26);

 VAR_26 = FUNC_9(VAR_25, VAR_2,
     VAR_23[VAR_11],
     8, 1, &VAR_24->z_userquota_obj);
 if (VAR_26 == VAR_0)
  VAR_24->z_userquota_obj = 0;
 else if (VAR_26 != 0)
  return (VAR_26);

 VAR_26 = FUNC_9(VAR_25, VAR_2,
     VAR_23[VAR_9],
     8, 1, &VAR_24->z_groupquota_obj);
 if (VAR_26 == VAR_0)
  VAR_24->z_groupquota_obj = 0;
 else if (VAR_26 != 0)
  return (VAR_26);

 VAR_26 = FUNC_9(VAR_25, VAR_2, VAR_7, 8, 1,
     &VAR_24->z_fuid_obj);
 if (VAR_26 == VAR_0)
  VAR_24->z_fuid_obj = 0;
 else if (VAR_26 != 0)
  return (VAR_26);

 VAR_26 = FUNC_9(VAR_25, VAR_2, VAR_16, 8, 1,
     &VAR_24->z_shares_dir);
 if (VAR_26 == VAR_0)
  VAR_24->z_shares_dir = 0;
 else if (VAR_26 != 0)
  return (VAR_26);
 VAR_24->z_use_namecache = !VAR_24->z_norm ||
     ((VAR_24->z_case == VAR_6) &&
     !(VAR_24->z_norm & ~VAR_4));

 return (0);
}
