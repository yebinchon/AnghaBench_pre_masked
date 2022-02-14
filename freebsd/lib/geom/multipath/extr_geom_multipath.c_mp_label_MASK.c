
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
struct gctl_req {int dummy; } ;
struct g_multipath_metadata {int md_active_active; int md_uuid; scalar_t__ md_sectorsize; scalar_t__ md_size; int md_name; int md_version; int md_magic; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef char* intmax_t ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*,scalar_t__) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (struct gctl_req*,char*,...) ;
 char* FUNC_9 (struct gctl_req*,char*,...) ;
 int FUNC_10 (struct gctl_req*,char*) ;
 char* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (char*,char*,scalar_t__) ;
 int FUNC_13 (struct g_multipath_metadata*,char*) ;
 scalar_t__ FUNC_14 (int,char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 char* FUNC_15 (int) ;
 int FUNC_16 (int ,char const*,int) ;
 int FUNC_17 (int *,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_18 (int *,char**,scalar_t__*) ;

__attribute__((used)) static void
FUNC_19(struct gctl_req *VAR_5)
{
 struct g_multipath_metadata VAR_6;
 off_t VAR_7 = 0, VAR_8;
 uint8_t *VAR_9, *VAR_10;
 char *VAR_11;
 uuid_t VAR_12;
 ssize_t VAR_13 = 0, VAR_14;
 uint32_t VAR_15;
 const char *VAR_16, *VAR_17, *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_21 = FUNC_10(VAR_5, "nargs");
 if (VAR_21 < 2) {
  FUNC_8(VAR_5, "wrong number of arguments.");
  return;
 }





 for (VAR_20 = 1; VAR_20 < VAR_21; VAR_20++) {
  VAR_16 = FUNC_9(VAR_5, "arg%d", VAR_20);
  VAR_8 = FUNC_4(VAR_16);
  VAR_14 = FUNC_5(VAR_16);
  if (VAR_8 == 0 || VAR_14 == 0) {
   FUNC_8(VAR_5, "cannot get information about %s: %s.",
       VAR_16, FUNC_15(VAR_2));
   return;
  }
  if (VAR_20 == 1) {
   VAR_13 = VAR_14;
   VAR_7 = VAR_8;
  } else {
   if (VAR_13 != VAR_14) {
    FUNC_8(VAR_5, "%s sector size %ju different.",
        VAR_16, (intmax_t)VAR_14);
    return;
   }
   if (VAR_7 != VAR_8) {
    FUNC_8(VAR_5, "%s media size %ju different.",
        VAR_16, (intmax_t)VAR_8);
    return;
   }
  }

 }




 FUNC_16(VAR_6.md_magic, VAR_0, sizeof(VAR_6.md_magic));
 VAR_6.md_version = VAR_1;
 VAR_18 = FUNC_9(VAR_5, "arg0");
 FUNC_16(VAR_6.md_name, VAR_18, sizeof(VAR_6.md_name));
 VAR_6.md_size = VAR_7;
 VAR_6.md_sectorsize = VAR_13;
 FUNC_17(&VAR_12, &VAR_15);
 if (VAR_15 != VAR_4) {
  FUNC_8(VAR_5, "cannot create a UUID.");
  return;
 }
 FUNC_18(&VAR_12, &VAR_11, &VAR_15);
 if (VAR_15 != VAR_4) {
  FUNC_8(VAR_5, "cannot stringify a UUID.");
  return;
 }
 FUNC_16(VAR_6.md_uuid, VAR_11, sizeof (VAR_6.md_uuid));
 VAR_6.md_active_active = FUNC_10(VAR_5, "active_active");
 if (FUNC_10(VAR_5, "active_read"))
  VAR_6.md_active_active = 2;
 FUNC_2(VAR_11);




 VAR_9 = FUNC_0(1, VAR_13);
 if (VAR_9 == ((void*)0)) {
  FUNC_8(VAR_5, "unable to allocate metadata buffer");
  return;
 }
 VAR_10 = FUNC_11(VAR_13);
 if (VAR_10 == ((void*)0)) {
  FUNC_8(VAR_5, "unable to allocate metadata buffer");
  goto done;
 }




 FUNC_13(&VAR_6, VAR_9);




 VAR_16 = FUNC_9(VAR_5, "arg1");
 VAR_19 = FUNC_6(VAR_16, VAR_9, VAR_13);
 if (VAR_19 != 0) {
  FUNC_8(VAR_5, "cannot store metadata on %s: %s.", VAR_16, FUNC_15(VAR_19));
  goto done;
 }




 for (VAR_20 = 2; VAR_20 < VAR_21; VAR_20++) {
  VAR_17 = FUNC_9(VAR_5, "arg%d", VAR_20);
  VAR_22 = FUNC_7(VAR_17, 1);
  if (VAR_22 < 0) {
   FUNC_1(VAR_3, "Unable to open %s: %s.\n",
       VAR_17, FUNC_15(VAR_2));
   continue;
  }
  if (FUNC_14(VAR_22, VAR_10, VAR_13, VAR_7 - VAR_13) !=
      (ssize_t)VAR_13) {
   FUNC_1(VAR_3, "Unable to read metadata from %s: %s.\n",
       VAR_17, FUNC_15(VAR_2));
   FUNC_3(VAR_22);
   continue;
  }
  FUNC_3(VAR_22);
  if (FUNC_12(VAR_9, VAR_10, VAR_13)) {
   FUNC_1(VAR_3, "No metadata found on %s."
       " It is not a path of %s.\n",
       VAR_17, VAR_16);
  }
 }
done:
 FUNC_2(VAR_10);
 FUNC_2(VAR_9);
}
