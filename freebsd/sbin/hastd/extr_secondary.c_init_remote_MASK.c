
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct nv {int dummy; } ;
struct hast_resource {scalar_t__ hr_resuid; int hr_remotein; int hr_remoteaddr; void* hr_secondary_remotecnt; void* hr_secondary_localcnt; void* hr_primary_remotecnt; void* hr_primary_localcnt; int hr_local_sectorsize; scalar_t__ hr_extentsize; scalar_t__ hr_local_mediasize; int hr_localfd; scalar_t__ hr_datasize; int hr_remoteout; } ;
typedef scalar_t__ ssize_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct hast_resource*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (struct hast_resource*,int ,struct nv*,unsigned char*,size_t) ;
 unsigned char* FUNC_6 (size_t) ;
 int FUNC_7 (unsigned char*,int,size_t) ;
 int FUNC_8 (struct hast_resource*) ;
 int FUNC_9 (struct nv*,int ,char*) ;
 int FUNC_10 (struct nv*,int ,char*) ;
 int FUNC_11 (struct nv*,int,char*) ;
 int FUNC_12 (struct nv*,char*,char*) ;
 int FUNC_13 (struct nv*,int ,char*) ;
 int FUNC_14 (struct nv*,void*,char*) ;
 int FUNC_15 (struct nv*,int ,char*) ;
 struct nv* FUNC_16 () ;
 scalar_t__ FUNC_17 (struct nv*,char*) ;
 int FUNC_18 (struct nv*) ;
 void* FUNC_19 (struct nv*,char*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (int ,char*,size_t) ;
 int FUNC_24 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_25 (int ,unsigned char*,size_t,scalar_t__) ;
 int FUNC_26 (int ,int *,int ) ;
 int FUNC_27 (int ,int *,int ) ;
 int FUNC_28 (char*,int,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_29(struct hast_resource *VAR_9, struct nv *VAR_10)
{
 uint64_t VAR_11;
 struct nv *VAR_12;
 unsigned char *VAR_13;
 size_t VAR_14;







 VAR_12 = FUNC_16();
 FUNC_10(VAR_12, (int64_t)VAR_9->hr_datasize, "datasize");
 FUNC_9(VAR_12, (int32_t)VAR_9->hr_extentsize, "extentsize");
 VAR_11 = FUNC_19(VAR_10, "resuid");
 VAR_9->hr_primary_localcnt = FUNC_19(VAR_10, "localcnt");
 VAR_9->hr_primary_remotecnt = FUNC_19(VAR_10, "remotecnt");
 FUNC_14(VAR_12, VAR_9->hr_secondary_localcnt, "localcnt");
 FUNC_14(VAR_12, VAR_9->hr_secondary_remotecnt, "remotecnt");
 VAR_14 = FUNC_1(VAR_9->hr_local_mediasize -
     VAR_8, VAR_9->hr_extentsize, VAR_9->hr_local_sectorsize);
 VAR_13 = FUNC_6(VAR_14);
 if (VAR_13 == ((void*)0)) {
  FUNC_23(VAR_3,
      "Unable to allocate memory (%zu bytes) for activemap.",
      VAR_14);
 }
 if (VAR_9->hr_resuid == 0) {






  FUNC_0(VAR_9->hr_secondary_localcnt == 0);
  VAR_9->hr_resuid = VAR_11;
  if (FUNC_8(VAR_9) == -1)
   FUNC_3(VAR_2);
  if (FUNC_17(VAR_10, "virgin")) {
   FUNC_4(VAR_13);
   VAR_13 = ((void*)0);
   VAR_14 = 0;
  } else {
   FUNC_7(VAR_13, 0xff, VAR_14);
  }
  FUNC_11(VAR_12, 1, "virgin");
  FUNC_15(VAR_12, VAR_4, "syncsrc");
 } else if (VAR_9->hr_resuid != VAR_11) {
  char VAR_15[256];

  FUNC_4(VAR_13);
  (void)FUNC_28(VAR_15, sizeof(VAR_15),
      "Resource unique ID mismatch (primary=%ju, secondary=%ju).",
      (uintmax_t)VAR_11, (uintmax_t)VAR_9->hr_resuid);
  FUNC_21("%s", VAR_15);
  FUNC_12(VAR_12, VAR_15, "errmsg");
  if (FUNC_5(VAR_9, VAR_9->hr_remotein, VAR_12,
      ((void*)0), 0) == -1) {
   FUNC_22(VAR_3,
       "Unable to send response to %s",
       VAR_9->hr_remoteaddr);
  }
  FUNC_18(VAR_12);
  FUNC_3(VAR_1);
 } else if (

     (VAR_9->hr_secondary_localcnt > VAR_9->hr_primary_remotecnt &&
      VAR_9->hr_secondary_remotecnt == VAR_9->hr_primary_localcnt) ||

     (VAR_9->hr_secondary_localcnt == VAR_9->hr_primary_remotecnt &&
      VAR_9->hr_secondary_remotecnt == VAR_9->hr_primary_localcnt) ||

     (VAR_9->hr_secondary_localcnt == VAR_9->hr_primary_remotecnt &&
      VAR_9->hr_secondary_remotecnt < VAR_9->hr_primary_localcnt)) {






  if (FUNC_25(VAR_9->hr_localfd, VAR_13, VAR_14, VAR_8) !=
      (ssize_t)VAR_14) {
   FUNC_22(VAR_6, "Unable to read activemap");
  }
  if (VAR_9->hr_secondary_localcnt > VAR_9->hr_primary_remotecnt &&
       VAR_9->hr_secondary_remotecnt == VAR_9->hr_primary_localcnt) {

   FUNC_15(VAR_12, VAR_5, "syncsrc");
  } else {




   FUNC_15(VAR_12, VAR_4, "syncsrc");
  }
 } else if (VAR_9->hr_secondary_localcnt > VAR_9->hr_primary_remotecnt &&
      VAR_9->hr_primary_localcnt > VAR_9->hr_secondary_remotecnt) {



  FUNC_4(VAR_13);
  FUNC_21("Split-brain detected, exiting.");
  FUNC_12(VAR_12, "Split-brain condition!", "errmsg");
  if (FUNC_5(VAR_9, VAR_9->hr_remotein, VAR_12,
      ((void*)0), 0) == -1) {
   FUNC_22(VAR_3,
       "Unable to send response to %s",
       VAR_9->hr_remoteaddr);
  }
  FUNC_18(VAR_12);

  FUNC_2(VAR_9, VAR_0);
  FUNC_3(VAR_1);
 } else {





  FUNC_0(VAR_9->hr_secondary_localcnt < VAR_9->hr_primary_remotecnt ||
      VAR_9->hr_primary_localcnt < VAR_9->hr_secondary_remotecnt);
  VAR_14 = FUNC_1(VAR_9->hr_local_mediasize -
      VAR_8, VAR_9->hr_extentsize,
      VAR_9->hr_local_sectorsize);
  FUNC_7(VAR_13, 0xff, VAR_14);
  if (VAR_9->hr_secondary_localcnt > VAR_9->hr_primary_remotecnt) {

   FUNC_15(VAR_12, VAR_5, "syncsrc");
  } else {

   FUNC_15(VAR_12, VAR_4, "syncsrc");
  }
  FUNC_24("This should never happen, asking for full synchronization (primary(local=%ju, remote=%ju), secondary(local=%ju, remote=%ju)).",
      (uintmax_t)VAR_9->hr_primary_localcnt,
      (uintmax_t)VAR_9->hr_primary_remotecnt,
      (uintmax_t)VAR_9->hr_secondary_localcnt,
      (uintmax_t)VAR_9->hr_secondary_remotecnt);
 }
 FUNC_13(VAR_12, (uint32_t)VAR_14, "mapsize");
 if (FUNC_5(VAR_9, VAR_9->hr_remotein, VAR_12, VAR_13, VAR_14) == -1) {
  FUNC_22(VAR_3, "Unable to send activemap to %s",
      VAR_9->hr_remoteaddr);
 }
 if (VAR_13 != ((void*)0))
  FUNC_4(VAR_13);
 FUNC_18(VAR_12);





}
