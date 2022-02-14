
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct mnttab {char* mnt_mntopts; } ;
typedef int smbshareopts ;
typedef int shareopts ;
typedef int mountpoint ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct mnttab*,int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,char const*,int) ;
 scalar_t__ FUNC_13 (int *,int ,char*,int,int *,int *,int ,int ) ;
 scalar_t__ FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(zfs_handle_t *VAR_16, int VAR_17, int VAR_18, char *VAR_19,
    boolean_t VAR_20, const char *VAR_21)
{
 char VAR_22[VAR_6];
 char VAR_23[VAR_6];
 char VAR_24[VAR_6];
 const char *VAR_25 = VAR_17 == 128 ? "share" : "mount";
 struct mnttab VAR_26;
 uint64_t VAR_27, VAR_28;
 boolean_t VAR_29, VAR_30;

 FUNC_0(FUNC_8(VAR_16) & VAR_14);







 VAR_27 = FUNC_14(VAR_16, VAR_13);

 if (VAR_27 && FUNC_3() == VAR_2) {
  if (!VAR_20)
   return (0);

  (void) FUNC_1(VAR_15, FUNC_2("cannot %s '%s': "
      "dataset is exported to a local zone\n"), VAR_25,
      FUNC_7(VAR_16));
  return (1);

 } else if (!VAR_27 && FUNC_3() != VAR_2) {
  if (!VAR_20)
   return (0);

  (void) FUNC_1(VAR_15, FUNC_2("cannot %s '%s': "
      "permission denied\n"), VAR_25,
      FUNC_7(VAR_16));
  return (1);
 }






 FUNC_6(FUNC_13(VAR_16, VAR_9, VAR_22,
     sizeof (VAR_22), ((void*)0), ((void*)0), 0, VAR_0) == 0);
 FUNC_6(FUNC_13(VAR_16, VAR_11, VAR_23,
     sizeof (VAR_23), ((void*)0), ((void*)0), 0, VAR_0) == 0);
 FUNC_6(FUNC_13(VAR_16, VAR_12, VAR_24,
     sizeof (VAR_24), ((void*)0), ((void*)0), 0, VAR_0) == 0);

 if (VAR_17 == 128 && FUNC_5(VAR_23, "off") == 0 &&
     FUNC_5(VAR_24, "off") == 0) {
  if (!VAR_20)
   return (0);

  (void) FUNC_1(VAR_15, FUNC_2("cannot share '%s': "
      "legacy share\n"), FUNC_7(VAR_16));
  (void) FUNC_1(VAR_15, "%s", FUNC_2("to "
      "share this filesystem set "
      "sharenfs property on\n"));
  return (1);
 }






 if (FUNC_5(VAR_22, "legacy") == 0) {
  if (!VAR_20)
   return (0);

  (void) FUNC_1(VAR_15, FUNC_2("cannot %s '%s': "
      "legacy mountpoint\n"), VAR_25, FUNC_7(VAR_16));
  (void) FUNC_1(VAR_15, FUNC_2("use %s(8) to "
      "%s this filesystem\n"), VAR_25, VAR_25);
  return (1);
 }

 if (FUNC_5(VAR_22, "none") == 0) {
  if (!VAR_20)
   return (0);

  (void) FUNC_1(VAR_15, FUNC_2("cannot %s '%s': no "
      "mountpoint set\n"), VAR_25, FUNC_7(VAR_16));
  return (1);
 }
 VAR_28 = FUNC_14(VAR_16, VAR_7);
 if (VAR_28 == VAR_5) {
  if (!VAR_20)
   return (0);

  (void) FUNC_1(VAR_15, FUNC_2("cannot %s '%s': "
      "'canmount' property is set to 'off'\n"), VAR_25,
      FUNC_7(VAR_16));
  return (1);
 } else if (VAR_28 == VAR_4 && !VAR_20) {
  return (0);
 }





 if (FUNC_14(VAR_16, VAR_8) &&
     FUNC_13(VAR_16, VAR_10,
     ((void*)0), 0, ((void*)0), ((void*)0), 0, VAR_1) == 0) {
  if (!VAR_20)
   return (0);

  (void) FUNC_1(VAR_15, FUNC_2("cannot %s '%s': "
      "Contains partially-completed state from "
      "\"zfs receive -r\", which can be resumed with "
      "\"zfs send -t\"\n"),
      VAR_25, FUNC_7(VAR_16));
  return (1);
 }
 switch (VAR_17) {
 case 128:

  VAR_29 = FUNC_10(VAR_16, ((void*)0));
  VAR_30 = FUNC_11(VAR_16, ((void*)0));

  if ((VAR_29 && VAR_30) ||
      (VAR_29 && FUNC_5(VAR_23, "on") == 0 &&
      FUNC_5(VAR_24, "off") == 0) ||
      (VAR_30 && FUNC_5(VAR_24, "on") == 0 &&
      FUNC_5(VAR_23, "off") == 0)) {
   if (!VAR_20)
    return (0);

   (void) FUNC_1(VAR_15, FUNC_2("cannot share "
       "'%s': filesystem already shared\n"),
       FUNC_7(VAR_16));
   return (1);
  }

  if (!FUNC_9(VAR_16, ((void*)0)) &&
      FUNC_12(VAR_16, ((void*)0), 0) != 0)
   return (1);

  if (VAR_19 == ((void*)0)) {
   if (FUNC_17(VAR_16) != 0)
    return (1);
  } else if (FUNC_5(VAR_19, "nfs") == 0) {
   if (FUNC_15(VAR_16))
    return (1);
  } else if (FUNC_5(VAR_19, "smb") == 0) {
   if (FUNC_16(VAR_16))
    return (1);
  } else {
   (void) FUNC_1(VAR_15, FUNC_2("cannot share "
       "'%s': invalid share type '%s' "
       "specified\n"),
       FUNC_7(VAR_16), VAR_19);
   return (1);
  }

  break;

 case 129:
  if (VAR_21 == ((void*)0))
   VAR_26.mnt_mntopts = "";
  else
   VAR_26.mnt_mntopts = (char *)VAR_21;

  if (!FUNC_4(&VAR_26, VAR_3) &&
      FUNC_9(VAR_16, ((void*)0))) {
   if (!VAR_20)
    return (0);

   (void) FUNC_1(VAR_15, FUNC_2("cannot mount "
       "'%s': filesystem already mounted\n"),
       FUNC_7(VAR_16));
   return (1);
  }

  if (FUNC_12(VAR_16, VAR_21, VAR_18) != 0)
   return (1);
  break;
 }

 return (0);
}
