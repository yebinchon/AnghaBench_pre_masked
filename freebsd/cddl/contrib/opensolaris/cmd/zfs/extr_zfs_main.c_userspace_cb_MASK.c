
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ zfs_userquota_prop_t ;
typedef int zfs_sort_column_t ;
typedef int uu_avl_t ;
typedef int uu_avl_pool_t ;
typedef int uu_avl_index_t ;
struct TYPE_11__ {scalar_t__ member_1; int * member_0; } ;
typedef TYPE_1__ us_sort_info_t ;
struct TYPE_12__ {int * usn_nvl; int usn_avlnode; } ;
typedef TYPE_2__ us_node_t ;
struct TYPE_13__ {scalar_t__ cb_prop; size_t* cb_width; scalar_t__ cb_nicenum; scalar_t__ cb_sid2posix; scalar_t__ cb_numname; int * cb_sortcol; int * cb_avl; int * cb_avl_pool; } ;
typedef TYPE_3__ us_cbdata_t ;
typedef int uint64_t ;
typedef int uid_t ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int sizebuf ;
typedef int sid ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (TYPE_2__*) ;
 struct group* FUNC_1 (int) ;
 struct passwd* FUNC_2 (int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int,int,char**,int *) ;
 int FUNC_5 (int,int,char**,int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,char*,int ) ;
 scalar_t__ FUNC_8 (int *,char*,char*) ;
 scalar_t__ FUNC_9 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_10 (int *,char*,int) ;
 scalar_t__ FUNC_11 (int **,int ,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 TYPE_2__* FUNC_14 (int) ;
 int FUNC_15 (char*,int ,int*) ;
 size_t FUNC_16 (char*,int,char*,...) ;
 size_t FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (unsigned int) ;
 TYPE_2__* FUNC_20 (int *,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_21 (int *,TYPE_2__*,int ) ;
 int FUNC_22 (TYPE_2__*,int *,int *) ;
 int FUNC_23 (int,char*,int) ;

__attribute__((used)) static int
FUNC_24(void *VAR_12, const char *VAR_13, uid_t VAR_14, uint64_t VAR_15)
{
 us_cbdata_t *VAR_16 = (us_cbdata_t *)VAR_12;
 zfs_userquota_prop_t VAR_17 = VAR_16->cb_prop;
 char *VAR_18 = ((void*)0);
 char *VAR_19;
 char VAR_20[32];
 us_node_t *VAR_21;
 uu_avl_pool_t *VAR_22 = VAR_16->cb_avl_pool;
 uu_avl_t *VAR_23 = VAR_16->cb_avl;
 uu_avl_index_t VAR_24;
 nvlist_t *VAR_25;
 us_node_t *VAR_26;
 zfs_sort_column_t *VAR_27 = VAR_16->cb_sortcol;
 unsigned VAR_28 = 0;
 const char *VAR_29;
 size_t VAR_30;
 size_t VAR_31;
 size_t VAR_32;
 int VAR_33, VAR_34, VAR_35;
 us_sort_info_t VAR_36 = { VAR_27, VAR_16->cb_numname };
 boolean_t VAR_37 = VAR_0;

 if (FUNC_11(&VAR_25, VAR_4, 0) != 0)
  FUNC_6();
 VAR_21 = FUNC_14(sizeof (us_node_t));
 FUNC_22(VAR_21, &VAR_21->usn_avlnode, VAR_22);
 VAR_21->usn_nvl = VAR_25;

 if (VAR_13 != ((void*)0) && VAR_13[0] != '\0') {

  char VAR_38[VAR_3 + 32];
  uid_t VAR_39;





  VAR_37 = VAR_1;

  (void) FUNC_16(VAR_38, sizeof (VAR_38), "%s-%u", VAR_13, VAR_14);

  if (VAR_17 == VAR_10 || VAR_17 == VAR_9) {
   VAR_28 = VAR_7;



  } else {
   VAR_28 = VAR_8;



  }
 }

 if (VAR_16->cb_sid2posix || VAR_13 == ((void*)0) || VAR_13[0] == '\0') {

  if (VAR_17 == VAR_10 || VAR_17 == VAR_9) {
   VAR_28 = VAR_5;
   if (!VAR_16->cb_numname) {
    struct group *VAR_40;

    if ((VAR_40 = FUNC_1(VAR_14)) != ((void*)0))
     VAR_18 = VAR_40->gr_name;
   }
  } else {
   VAR_28 = VAR_6;
   if (!VAR_16->cb_numname) {
    struct passwd *VAR_41;

    if ((VAR_41 = FUNC_2(VAR_14)) != ((void*)0))
     VAR_18 = VAR_41->pw_name;
   }
  }
 }






 if (VAR_16->cb_sid2posix &&
     FUNC_7(VAR_25, "smbentity", VAR_37) != 0)
  FUNC_6();


 VAR_29 = FUNC_19(VAR_28);
 VAR_31 = FUNC_17(FUNC_3(VAR_29));
 VAR_33 = FUNC_18("type");
 if (VAR_31 > VAR_16->cb_width[VAR_33])
  VAR_16->cb_width[VAR_33] = VAR_31;
 if (FUNC_9(VAR_25, "type", VAR_28) != 0)
  FUNC_6();


 if ((VAR_16->cb_numname && VAR_16->cb_sid2posix) || VAR_18 == ((void*)0)) {
  if (FUNC_10(VAR_25, "name", VAR_14) != 0)
   FUNC_6();
  VAR_30 = FUNC_16(((void*)0), 0, "%u", VAR_14);
 } else {
  if (FUNC_8(VAR_25, "name", VAR_18) != 0)
   FUNC_6();
  VAR_30 = FUNC_17(VAR_18);
 }
 VAR_34 = FUNC_18("name");
 if (VAR_30 > VAR_16->cb_width[VAR_34])
  VAR_16->cb_width[VAR_34] = VAR_30;





 if ((VAR_26 = FUNC_20(VAR_23, VAR_21, &VAR_36, &VAR_24)) == ((void*)0)) {
  FUNC_21(VAR_23, VAR_21, VAR_24);
 } else {
  FUNC_13(VAR_25);
  FUNC_0(VAR_21);
  VAR_21 = VAR_26;
  VAR_25 = VAR_21->usn_nvl;
 }


 if (VAR_16->cb_nicenum)
  FUNC_23(VAR_15, VAR_20, sizeof (VAR_20));
 else
  (void) FUNC_16(VAR_20, sizeof (VAR_20), "%llu", VAR_15);
 VAR_32 = FUNC_17(VAR_20);
 if (VAR_17 == VAR_11 || VAR_17 == VAR_10) {
  VAR_19 = "used";
  if (!FUNC_12(VAR_25, "quota"))
   (void) FUNC_10(VAR_25, "quota", 0);
 } else {
  VAR_19 = "quota";
  if (!FUNC_12(VAR_25, "used"))
   (void) FUNC_10(VAR_25, "used", 0);
 }
 VAR_35 = FUNC_18(VAR_19);
 if (VAR_32 > VAR_16->cb_width[VAR_35])
  VAR_16->cb_width[VAR_35] = VAR_32;

 if (FUNC_10(VAR_25, VAR_19, VAR_15) != 0)
  FUNC_6();

 return (0);
}
