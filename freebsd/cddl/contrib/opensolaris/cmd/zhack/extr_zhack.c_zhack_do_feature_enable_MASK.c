
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* fi_uname; char* fi_desc; char* fi_guid; scalar_t__ fi_flags; int fi_feature; int * fi_depends; } ;
typedef TYPE_1__ zfeature_info_t ;
struct TYPE_9__ {int spa_feat_desc_obj; int * spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int spa_feature_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int ,TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char FUNC_5 (int,char**,char*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_7 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,int ,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int VAR_8 ;
 int FUNC_13 (char*,int ,int ,TYPE_2__**) ;

__attribute__((used)) static void
FUNC_14(int VAR_9, char **VAR_10)
{
 char VAR_11;
 char *VAR_12, *VAR_13;
 spa_t *VAR_14;
 objset_t *VAR_15;
 zfeature_info_t VAR_16;
 spa_feature_t VAR_17[] = { VAR_2 };





 VAR_12 = ((void*)0);
 VAR_16.fi_uname = "zhack";
 VAR_16.fi_flags = 0;
 VAR_16.fi_depends = VAR_17;
 VAR_16.fi_feature = VAR_2;

 VAR_6 = 1;
 while ((VAR_11 = FUNC_5(VAR_9, VAR_10, "rmd:")) != -1) {
  switch (VAR_11) {
  case 'r':
   VAR_16.fi_flags |= VAR_3;
   break;
  case 'd':
   VAR_12 = FUNC_8(VAR_5);
   break;
  default:
   FUNC_9();
   break;
  }
 }

 if (VAR_12 == ((void*)0))
  VAR_12 = FUNC_8("zhack injected");
 VAR_16.fi_desc = VAR_12;

 VAR_9 -= VAR_6;
 VAR_10 += VAR_6;

 if (VAR_9 < 2) {
  (void) FUNC_3(VAR_7, "error: missing feature or pool name\n");
  FUNC_9();
 }
 VAR_13 = VAR_10[0];
 VAR_16.fi_guid = VAR_10[1];

 if (!FUNC_12(VAR_16.fi_guid))
  FUNC_2(((void*)0), VAR_1, "invalid feature guid: %s", VAR_16.fi_guid);

 FUNC_13(VAR_13, VAR_0, VAR_1, &VAR_14);
 VAR_15 = VAR_14->spa_meta_objset;

 if (FUNC_11(VAR_16.fi_guid))
  FUNC_2(VAR_14, VAR_1, "'%s' is a real feature, will not enable");
 if (0 == FUNC_10(VAR_15, VAR_14->spa_feat_desc_obj, VAR_16.fi_guid))
  FUNC_2(VAR_14, VAR_1, "feature already enabled: %s",
      VAR_16.fi_guid);

 FUNC_0(FUNC_1(FUNC_7(VAR_14), ((void*)0),
     VAR_8, &VAR_16, 5, VAR_4));

 FUNC_6(VAR_14, VAR_1);

 FUNC_4(VAR_12);
}
