
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned char const* vic_mapping_object; unsigned char const* vic_births_object; unsigned char const* vic_prev_indirect_vdev; } ;
struct TYPE_8__ {int v_id; int v_ashift; int v_psize; int v_nparity; char* v_name; int v_islog; int v_nchildren; int v_children; int v_state; struct TYPE_8__* v_top; TYPE_2__ vdev_indirect_config; } ;
typedef TYPE_1__ vdev_t ;
typedef TYPE_2__ vdev_indirect_config_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_1 (char**,char*,char const*,int,...) ;
 int FUNC_2 (unsigned char const*,int ,int ,int*,...) ;
 unsigned char* FUNC_3 (unsigned char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 int VAR_37 ;
 TYPE_1__* FUNC_8 (int,int ) ;
 int VAR_38 ;
 TYPE_1__* FUNC_9 (int) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

__attribute__((used)) static int
FUNC_10(const unsigned char *VAR_43, vdev_t *VAR_44,
    vdev_t **VAR_45, int VAR_46)
{
 int VAR_47;
 uint64_t VAR_48, VAR_49, VAR_50, VAR_51, VAR_52;
 const char *VAR_53;
 const char *VAR_54;
 vdev_t *VAR_55, *VAR_56;
 const unsigned char *VAR_57;
 int VAR_58, VAR_59, VAR_60;
 uint64_t VAR_61, VAR_62, VAR_63, VAR_64, VAR_65;
 uint64_t VAR_66;

 if (FUNC_2(VAR_43, VAR_25, VAR_2,
     ((void*)0), &VAR_48)
     || FUNC_2(VAR_43, VAR_26, VAR_2, ((void*)0), &VAR_49)
     || FUNC_2(VAR_43, VAR_36, VAR_1,
     ((void*)0), &VAR_53)) {
  FUNC_4("ZFS: can't find vdev details\n");
  return (VAR_4);
 }

 if (FUNC_5(VAR_53, VAR_17)
     && FUNC_5(VAR_53, VAR_14)



     && FUNC_5(VAR_53, VAR_18)
     && FUNC_5(VAR_53, VAR_16)
     && FUNC_5(VAR_53, VAR_19)) {
  FUNC_4("ZFS: can only boot from disk, mirror, raidz1, raidz2 and raidz3 vdevs\n");
  return (VAR_3);
 }

 VAR_61 = VAR_64 = VAR_62 = VAR_63 = VAR_65 = 0;
 VAR_66 = 0;

 FUNC_2(VAR_43, VAR_32, VAR_2, ((void*)0),
     &VAR_61);
 FUNC_2(VAR_43, VAR_35, VAR_2, ((void*)0),
     &VAR_64);
 FUNC_2(VAR_43, VAR_24, VAR_2, ((void*)0),
     &VAR_62);
 FUNC_2(VAR_43, VAR_23, VAR_2, ((void*)0),
     &VAR_63);
 FUNC_2(VAR_43, VAR_30, VAR_2, ((void*)0),
     &VAR_65);
 FUNC_2(VAR_43, VAR_29, VAR_2, ((void*)0),
     &VAR_66);

 VAR_55 = FUNC_9(VAR_48);
 if (!VAR_55) {
  VAR_60 = 1;

  if (!FUNC_5(VAR_53, VAR_17))
   VAR_55 = FUNC_8(VAR_48, VAR_40);
  else if (!FUNC_5(VAR_53, VAR_18))
   VAR_55 = FUNC_8(VAR_48, VAR_41);
  else if (!FUNC_5(VAR_53, VAR_19))
   VAR_55 = FUNC_8(VAR_48, VAR_42);
  else if (!FUNC_5(VAR_53, VAR_16)) {
   vdev_indirect_config_t *VAR_67;

   VAR_55 = FUNC_8(VAR_48, VAR_39);
   VAR_55->v_state = VAR_11;
   VAR_67 = &VAR_55->vdev_indirect_config;

   FUNC_2(VAR_43,
       VAR_28, VAR_2,
       ((void*)0), &VAR_67->vic_mapping_object);
   FUNC_2(VAR_43,
       VAR_27, VAR_2,
       ((void*)0), &VAR_67->vic_births_object);
   FUNC_2(VAR_43,
       VAR_34, VAR_2,
       ((void*)0), &VAR_67->vic_prev_indirect_vdev);
  } else
   VAR_55 = FUNC_8(VAR_48, VAR_38);

  VAR_55->v_id = VAR_49;
  VAR_55->v_top = VAR_44 != ((void*)0) ? VAR_44 : VAR_55;
  if (FUNC_2(VAR_43, VAR_20,
   VAR_2, ((void*)0), &VAR_50) == 0) {
   VAR_55->v_ashift = VAR_50;
  } else {
   VAR_55->v_ashift = 0;
  }
  if (FUNC_2(VAR_43, VAR_21,
      VAR_2, ((void*)0), &VAR_51) == 0) {
   VAR_55->v_psize = VAR_51 +
       VAR_7 + VAR_6;
  }
  if (FUNC_2(VAR_43, VAR_31,
   VAR_2, ((void*)0), &VAR_52) == 0) {
   VAR_55->v_nparity = VAR_52;
  } else {
   VAR_55->v_nparity = 0;
  }
  if (FUNC_2(VAR_43, VAR_33,
    VAR_1, ((void*)0), &VAR_54) == 0) {
   if (FUNC_7(VAR_54, "/dev/", 5) == 0)
    VAR_54 += 5;
   VAR_55->v_name = FUNC_6(VAR_54);
  } else {
   char *VAR_68;

   if (!FUNC_5(VAR_53, "raidz")) {
    if (VAR_55->v_nparity < 1 ||
        VAR_55->v_nparity > 3) {
     FUNC_4("ZFS: can only boot from disk, "
         "mirror, raidz1, raidz2 and raidz3 "
         "vdevs\n");
     return (VAR_3);
    }
    FUNC_1(&VAR_68, "%s%d-%d", VAR_53,
        VAR_55->v_nparity, VAR_49);
   } else {
    FUNC_1(&VAR_68, "%s-%d", VAR_53, VAR_49);
   }
   if (VAR_68 == ((void*)0))
    return (VAR_5);
   VAR_55->v_name = VAR_68;
  }
  VAR_55->v_islog = VAR_66 == 1;
 } else {
  VAR_60 = 0;
 }

 if (VAR_60 || VAR_46) {





  if (VAR_61)
   VAR_55->v_state = VAR_12;
  else if (VAR_64)
   VAR_55->v_state = VAR_13;
  else if (VAR_62)
   VAR_55->v_state = VAR_10;
  else if (VAR_63)
   VAR_55->v_state = VAR_9;
  else if (VAR_65)
   VAR_55->v_state = VAR_8;
 }

 VAR_47 = FUNC_2(VAR_43, VAR_22, VAR_0,
     &VAR_58, &VAR_57);



 if (VAR_47 == 0) {
  VAR_55->v_nchildren = VAR_58;
  for (VAR_59 = 0; VAR_59 < VAR_58; VAR_59++) {
   VAR_47 = FUNC_10(VAR_57, VAR_55, &VAR_56, VAR_46);
   if (VAR_47)
    return (VAR_47);
   if (VAR_60)
    FUNC_0(&VAR_55->v_children, VAR_56,
         VAR_37);
   VAR_57 = FUNC_3(VAR_57);
  }
 } else {
  VAR_55->v_nchildren = 0;
 }

 if (VAR_45)
  *VAR_45 = VAR_55;
 return (0);
}
