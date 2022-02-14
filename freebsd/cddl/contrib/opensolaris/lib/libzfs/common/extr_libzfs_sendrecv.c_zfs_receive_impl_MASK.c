
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int member_0; } ;
typedef TYPE_2__ zio_cksum_t ;
typedef int uint64_t ;
struct drr_begin {scalar_t__ drr_magic; scalar_t__ drr_versioninfo; scalar_t__ drr_creation_time; scalar_t__ drr_type; scalar_t__ drr_flags; scalar_t__ drr_toguid; scalar_t__ drr_fromguid; char* drr_toname; } ;
struct TYPE_19__ {int byteswap; scalar_t__ isprefix; } ;
typedef TYPE_3__ recvflags_t ;
typedef int nvlist_t ;
typedef int nonpackage_sendfs ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int drr ;
struct TYPE_17__ {struct drr_begin drr_begin; } ;
struct TYPE_20__ {scalar_t__ drr_type; scalar_t__ drr_payloadlen; TYPE_1__ drr_u; } ;
typedef TYPE_4__ dmu_replay_record_t ;
typedef int avl_tree_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 char* FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_4__*,int,TYPE_2__*) ;
 int FUNC_10 (int *,int,TYPE_4__*,int,int ,TYPE_2__*) ;
 int FUNC_11 (char*,int,char*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int *,char const*,int ) ;
 int FUNC_15 (int *,int ,char*) ;
 int FUNC_16 (int *,char*,...) ;
 int FUNC_17 (int *,int,char const*,char const*,TYPE_3__*,TYPE_4__*,TYPE_4__*,char const*,int *,int *,char**,int,int *,char const*) ;
 int FUNC_18 (int *,int,char const*,TYPE_3__*,TYPE_4__*,TYPE_2__*,char**,int,int *) ;

__attribute__((used)) static int
FUNC_19(libzfs_handle_t *VAR_13, const char *VAR_14,
    const char *VAR_15, recvflags_t *VAR_16, int VAR_17, const char *VAR_18,
    nvlist_t *VAR_19, avl_tree_t *VAR_20, char **VAR_21, int VAR_22,
    uint64_t *VAR_23, const char *VAR_24)
{
 int VAR_25;
 dmu_replay_record_t VAR_26, VAR_27;
 struct drr_begin *VAR_28 = &VAR_26.drr_u.drr_begin;
 char VAR_29[1024];
 zio_cksum_t VAR_30 = { 0 };
 uint64_t VAR_31;
 int VAR_32;

 (void) FUNC_11(VAR_29, sizeof (VAR_29), FUNC_8(VAR_10,
     "cannot receive"));

 if (VAR_16->isprefix &&
     !FUNC_14(VAR_13, VAR_14, VAR_12)) {
  FUNC_16(VAR_13, FUNC_8(VAR_10, "specified fs "
      "(%s) does not exist"), VAR_14);
  return (FUNC_15(VAR_13, VAR_9, VAR_29));
 }
 if (VAR_15 &&
     !FUNC_14(VAR_13, VAR_15, VAR_12)) {
  FUNC_16(VAR_13, FUNC_8(VAR_10, "specified origin fs "
      "(%s) does not exist"), VAR_15);
  return (FUNC_15(VAR_13, VAR_9, VAR_29));
 }


 if (0 != (VAR_25 = FUNC_10(VAR_13, VAR_17, &VAR_26, sizeof (VAR_26), VAR_0,
     &VAR_30)))
  return (VAR_25);

 if (VAR_26.drr_type == VAR_6 || VAR_26.drr_type == FUNC_0(VAR_6)) {

  return (VAR_7);
 }


 VAR_27 = VAR_26;

 VAR_16->byteswap = VAR_0;
 if (VAR_28->drr_magic == FUNC_1(VAR_2)) {




  FUNC_7(&VAR_30, sizeof (zio_cksum_t));
  (void) FUNC_9(&VAR_26,
      sizeof (VAR_26), &VAR_30);
  VAR_16->byteswap = VAR_1;

  VAR_26.drr_type = FUNC_0(VAR_26.drr_type);
  VAR_26.drr_payloadlen = FUNC_0(VAR_26.drr_payloadlen);
  VAR_28->drr_magic = FUNC_1(VAR_28->drr_magic);
  VAR_28->drr_versioninfo = FUNC_1(VAR_28->drr_versioninfo);
  VAR_28->drr_creation_time = FUNC_1(VAR_28->drr_creation_time);
  VAR_28->drr_type = FUNC_0(VAR_28->drr_type);
  VAR_28->drr_flags = FUNC_0(VAR_28->drr_flags);
  VAR_28->drr_toguid = FUNC_1(VAR_28->drr_toguid);
  VAR_28->drr_fromguid = FUNC_1(VAR_28->drr_fromguid);
 }

 if (VAR_28->drr_magic != VAR_2 || VAR_26.drr_type != VAR_5) {
  FUNC_16(VAR_13, FUNC_8(VAR_10, "invalid "
      "stream (bad magic number)"));
  return (FUNC_15(VAR_13, VAR_8, VAR_29));
 }

 VAR_31 = FUNC_2(VAR_28->drr_versioninfo);
 VAR_32 = FUNC_3(VAR_28->drr_versioninfo);

 if (!FUNC_4(VAR_31) ||
     (VAR_32 != VAR_4 && VAR_32 != VAR_3)) {
  FUNC_16(VAR_13, FUNC_8(VAR_10,
      "stream has unsupported feature, feature flags = %lx"),
      VAR_31);
  return (FUNC_15(VAR_13, VAR_8, VAR_29));
 }

 if (FUNC_12(VAR_28->drr_toname, '@') == ((void*)0)) {
  FUNC_16(VAR_13, FUNC_8(VAR_10, "invalid "
      "stream (bad snapshot name)"));
  return (FUNC_15(VAR_13, VAR_8, VAR_29));
 }

 if (FUNC_3(VAR_28->drr_versioninfo) == VAR_4) {
  char VAR_33[VAR_11];
  if (VAR_18 == ((void*)0)) {




   char *VAR_34;
   (void) FUNC_13(VAR_33,
       VAR_26.drr_u.drr_begin.drr_toname,
       sizeof (VAR_33));
   if ((VAR_34 = FUNC_12(VAR_33, '@')) != ((void*)0))
    *VAR_34 = '\0';
   VAR_18 = VAR_33;
   FUNC_5(VAR_24 == ((void*)0));
  }
  return (FUNC_17(VAR_13, VAR_17, VAR_14, VAR_15, VAR_16,
      &VAR_26, &VAR_27, VAR_18, VAR_19, VAR_20, VAR_21,
      VAR_22, VAR_23, VAR_24));
 } else {
  FUNC_6(FUNC_3(VAR_28->drr_versioninfo) ==
      VAR_3);
  return (FUNC_18(VAR_13, VAR_17, VAR_14, VAR_16, &VAR_26,
      &VAR_30, VAR_21, VAR_22, VAR_23));
 }
}
