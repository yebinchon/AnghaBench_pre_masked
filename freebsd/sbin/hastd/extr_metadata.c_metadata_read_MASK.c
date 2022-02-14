
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;
struct hast_resource {int hr_localfd; char* hr_name; int hr_extentsize; int hr_keepdirty; scalar_t__ hr_role; int hr_localpath; scalar_t__ hr_previous_role; void* hr_primary_remotecnt; void* hr_primary_localcnt; void* hr_secondary_remotecnt; void* hr_secondary_localcnt; void* hr_resuid; void* hr_localoff; void* hr_datasize; } ;
struct ebuf {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ebuf*,int *,int) ;
 struct ebuf* FUNC_3 (int) ;
 unsigned char* FUNC_4 (struct ebuf*,int *) ;
 int FUNC_5 (struct ebuf*) ;
 int VAR_7 ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (struct nv*) ;
 int FUNC_8 (struct nv*) ;
 char* FUNC_9 (struct nv*,char*) ;
 scalar_t__ FUNC_10 (struct nv*,char*) ;
 void* FUNC_11 (struct nv*,char*) ;
 struct nv* FUNC_12 (struct ebuf*) ;
 int FUNC_13 (int,char*,int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (char*,int ,char*) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (int,unsigned char*,int,int ) ;
 int FUNC_18 (struct hast_resource*,int) ;
 scalar_t__ FUNC_19 (char const*,char*) ;

int
FUNC_20(struct hast_resource *VAR_8, bool VAR_9)
{
 unsigned char *VAR_10;
 struct ebuf *VAR_11;
 struct nv *VAR_12;
 ssize_t VAR_13;
 const char *VAR_14;
 int VAR_15;
 bool VAR_16;

 VAR_16 = 0;
 VAR_15 = 0;




 if (VAR_8->hr_localfd == -1) {
  if (FUNC_18(VAR_8, VAR_9) == -1) {
   VAR_15 = VAR_7;
   goto fail;
  }
  VAR_16 = 1;
  FUNC_13(1, "Obtained info about %s.", VAR_8->hr_localpath);
  if (VAR_9) {
   if (FUNC_6(VAR_8->hr_localfd, VAR_3 | VAR_4) == -1) {
    VAR_15 = VAR_7;
    if (VAR_7 == VAR_0) {
     FUNC_16("Unable to lock %s (operation not supported), but continuing.",
         VAR_8->hr_localpath);
    } else {
     FUNC_14(VAR_5,
         "Unable to lock %s",
         VAR_8->hr_localpath);
     goto fail;
    }
   }
   FUNC_13(1, "Locked %s.", VAR_8->hr_localpath);
  }
 }

 VAR_11 = FUNC_3(VAR_6);
 if (VAR_11 == ((void*)0)) {
  VAR_15 = VAR_7;
  FUNC_14(VAR_5,
      "Unable to allocate memory to read metadata");
  goto fail;
 }
 if (FUNC_2(VAR_11, ((void*)0), VAR_6) == -1) {
  VAR_15 = VAR_7;
  FUNC_14(VAR_5,
      "Unable to allocate memory to read metadata");
  FUNC_5(VAR_11);
  goto fail;
 }
 VAR_10 = FUNC_4(VAR_11, ((void*)0));
 FUNC_0(VAR_10 != ((void*)0));
 VAR_13 = FUNC_17(VAR_8->hr_localfd, VAR_10, VAR_6, 0);
 if (VAR_13 == -1 || VAR_13 != VAR_6) {
  VAR_15 = VAR_7;
  FUNC_14(VAR_5, "Unable to read metadata");
  FUNC_5(VAR_11);
  goto fail;
 }
 VAR_12 = FUNC_12(VAR_11);
 if (VAR_12 == ((void*)0)) {
  VAR_15 = VAR_7;
  FUNC_14(VAR_5, "Metadata read from %s is invalid",
      VAR_8->hr_localpath);
  FUNC_5(VAR_11);
  goto fail;
 }

 VAR_14 = FUNC_9(VAR_12, "resource");
 if (VAR_14 != ((void*)0) && FUNC_19(VAR_14, VAR_8->hr_name) != 0) {
  FUNC_15("Provider %s is not part of resource %s.",
      VAR_8->hr_localpath, VAR_8->hr_name);
  FUNC_8(VAR_12);
  goto fail;
 }

 VAR_8->hr_datasize = FUNC_11(VAR_12, "datasize");
 VAR_8->hr_extentsize = (int)FUNC_10(VAR_12, "extentsize");
 VAR_8->hr_keepdirty = (int)FUNC_10(VAR_12, "keepdirty");
 VAR_8->hr_localoff = FUNC_11(VAR_12, "offset");
 VAR_8->hr_resuid = FUNC_11(VAR_12, "resuid");
 if (VAR_8->hr_role != VAR_1) {

  VAR_8->hr_secondary_localcnt = FUNC_11(VAR_12, "localcnt");
  VAR_8->hr_secondary_remotecnt = FUNC_11(VAR_12, "remotecnt");
 }
 if (VAR_8->hr_role != VAR_2) {

  VAR_8->hr_primary_localcnt = FUNC_11(VAR_12, "localcnt");
  VAR_8->hr_primary_remotecnt = FUNC_11(VAR_12, "remotecnt");
 }
 VAR_14 = FUNC_9(VAR_12, "prevrole");
 if (VAR_14 != ((void*)0)) {
  if (FUNC_19(VAR_14, "primary") == 0)
   VAR_8->hr_previous_role = VAR_1;
  else if (FUNC_19(VAR_14, "secondary") == 0)
   VAR_8->hr_previous_role = VAR_2;
 }

 if (FUNC_7(VAR_12) != 0) {
  VAR_7 = VAR_15 = FUNC_7(VAR_12);
  FUNC_14(VAR_5, "Unable to read metadata from %s",
      VAR_8->hr_localpath);
  FUNC_8(VAR_12);
  goto fail;
 }
 FUNC_8(VAR_12);
 return (0);
fail:
 if (VAR_16) {
  FUNC_1(VAR_8->hr_localfd);
  VAR_8->hr_localfd = -1;
 }
 VAR_7 = VAR_15;
 return (-1);
}
