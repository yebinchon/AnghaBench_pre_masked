
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* fi_uname; char* fi_guid; int fi_flags; int fi_feature; int * fi_depends; int * fi_desc; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_11__ {int spa_feat_for_write_obj; int spa_feat_for_read_obj; int * spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int spa_feature_t ;
typedef int objset_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,int ,TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,scalar_t__*) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*) ;
 char FUNC_5 (int,char**,char*) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,int ,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,scalar_t__,int ,TYPE_2__**) ;

__attribute__((used)) static void
FUNC_13(int VAR_11, char **VAR_12)
{
 char VAR_13;
 char *VAR_14;
 boolean_t VAR_15 = VAR_0;
 spa_t *VAR_16;
 objset_t *VAR_17;
 zfeature_info_t VAR_18;
 spa_feature_t VAR_19[] = { VAR_3 };







 VAR_18.fi_uname = "zhack";
 VAR_18.fi_flags = 0;
 VAR_18.fi_desc = ((void*)0);
 VAR_18.fi_depends = VAR_19;
 VAR_18.fi_feature = VAR_3;

 VAR_9 = 1;
 while ((VAR_13 = FUNC_5(VAR_11, VAR_12, "md")) != -1) {
  switch (VAR_13) {
  case 'm':
   VAR_18.fi_flags |= VAR_4;
   break;
  case 'd':
   VAR_15 = VAR_1;
   break;
  default:
   FUNC_8();
   break;
  }
 }
 VAR_11 -= VAR_9;
 VAR_12 += VAR_9;

 if (VAR_11 < 2) {
  (void) FUNC_4(VAR_10, "error: missing feature or pool name\n");
  FUNC_8();
 }
 VAR_14 = VAR_12[0];
 VAR_18.fi_guid = VAR_12[1];

 if (!FUNC_11(VAR_18.fi_guid))
  FUNC_2(((void*)0), VAR_2, "invalid feature guid: %s", VAR_18.fi_guid);

 FUNC_12(VAR_14, VAR_0, VAR_2, &VAR_16);
 VAR_17 = VAR_16->spa_meta_objset;

 if (FUNC_10(VAR_18.fi_guid)) {
  FUNC_2(VAR_16, VAR_2,
      "'%s' is a real feature, will not change refcount");
 }

 if (0 == FUNC_9(VAR_17, VAR_16->spa_feat_for_read_obj,
     VAR_18.fi_guid)) {
  VAR_18.fi_flags &= ~VAR_5;
 } else if (0 == FUNC_9(VAR_17, VAR_16->spa_feat_for_write_obj,
     VAR_18.fi_guid)) {
  VAR_18.fi_flags |= VAR_5;
 } else {
  FUNC_2(VAR_16, VAR_2, "feature is not enabled: %s", VAR_18.fi_guid);
 }

 if (VAR_15) {
  uint64_t VAR_20;
  if (FUNC_3(VAR_16, &VAR_18,
      &VAR_20) == 0 && VAR_20 != 0) {
   FUNC_2(VAR_16, VAR_2, "feature refcount already 0: %s",
       VAR_18.fi_guid);
  }
 }

 FUNC_0(FUNC_1(FUNC_7(VAR_16), ((void*)0),
     VAR_15 ? VAR_7 : VAR_8, &VAR_18,
     5, VAR_6));

 FUNC_6(VAR_16, VAR_2);
}
