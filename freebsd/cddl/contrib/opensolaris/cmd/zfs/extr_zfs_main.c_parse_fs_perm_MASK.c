
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zfs_deleg_who_type_t ;
struct TYPE_14__ {int who_ug_name; } ;
typedef TYPE_1__ who_perm_t ;
struct TYPE_15__ {TYPE_1__ who_perm; int who_avl_node; } ;
typedef TYPE_2__ who_perm_node_t ;
typedef int uu_avl_t ;
typedef int uu_avl_pool_t ;
typedef int uu_avl_index_t ;
typedef int uid_t ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_16__ {int * fsp_uge_avl; int * fsp_sc_avl; TYPE_4__* fsp_set; } ;
typedef TYPE_3__ fs_perm_t ;
struct TYPE_17__ {int * fsps_who_perm_avl_pool; int * fsps_named_set_avl_pool; } ;
typedef TYPE_4__ fs_perm_set_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 struct group* FUNC_2 (int ) ;
 struct passwd* FUNC_3 (int ) ;
 int * FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 int FUNC_7 (TYPE_1__*,int *,char) ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (int ,char const*,int) ;
 TYPE_2__* FUNC_10 (int *,TYPE_2__*,int *,int *) ;
 int FUNC_11 (int *,TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int *,int *) ;
 int FUNC_13 (TYPE_1__*,TYPE_3__*,int,char const*) ;

__attribute__((used)) static inline int
FUNC_14(fs_perm_t *VAR_1, nvlist_t *VAR_2)
{
 nvpair_t *VAR_3 = ((void*)0);
 fs_perm_set_t *VAR_4 = VAR_1->fsp_set;

 while ((VAR_3 = FUNC_4(VAR_2, VAR_3)) != ((void*)0)) {
  nvlist_t *VAR_5 = ((void*)0);
  const char *VAR_6 = FUNC_5(VAR_3);
  uu_avl_t *VAR_7 = ((void*)0);
  uu_avl_pool_t *VAR_8 = ((void*)0);
  zfs_deleg_who_type_t VAR_9 = VAR_6[0];
  char VAR_10 = VAR_6[1];
  const char *VAR_11 = VAR_6 + 3;
  boolean_t VAR_12 = VAR_0;
  who_perm_t *VAR_13 = ((void*)0);

  FUNC_0('$' == VAR_6[2]);

  if (FUNC_6(VAR_3, &VAR_5) != 0)
   return (-1);

  switch (VAR_9) {
  case 137:
  case 136:
  case 131:
  case 130:
   VAR_8 = VAR_4->fsps_named_set_avl_pool;
   VAR_7 = VAR_1->fsp_sc_avl;
   break;
  case 129:
  case 128:
  case 133:
  case 132:
  case 135:
  case 134:
   VAR_8 = VAR_4->fsps_who_perm_avl_pool;
   VAR_7 = VAR_1->fsp_uge_avl;
   break;

  default:
   FUNC_0(!"unhandled zfs_deleg_who_type_t");
  }

  if (VAR_12) {
   who_perm_node_t *VAR_14 = ((void*)0);
   who_perm_node_t *VAR_15 = FUNC_8(
       sizeof (who_perm_node_t));
   VAR_13 = &VAR_15->who_perm;
   uu_avl_index_t VAR_16 = 0;

   FUNC_12(VAR_15, &VAR_15->who_avl_node, VAR_8);
   FUNC_13(VAR_13, VAR_1, VAR_9, VAR_11);

   if ((VAR_14 = FUNC_10(VAR_7, VAR_15, ((void*)0), &VAR_16))
       == ((void*)0)) {
    if (VAR_7 == VAR_1->fsp_uge_avl) {
     uid_t VAR_17 = 0;
     struct passwd *VAR_18 = ((void*)0);
     struct group *VAR_19 = ((void*)0);
     const char *VAR_20 = ((void*)0);

     switch (VAR_9) {
     case 128:
     case 129:
      VAR_17 = FUNC_1(VAR_11);
      VAR_18 = FUNC_3(VAR_17);
      if (VAR_18)
       VAR_20 = VAR_18->pw_name;
      break;
     case 132:
     case 133:
      VAR_17 = FUNC_1(VAR_11);
      VAR_19 = FUNC_2(VAR_17);
      if (VAR_19)
       VAR_20 = VAR_19->gr_name;
      break;

     default:
      break;
     }

     if (VAR_20 != ((void*)0))
      (void) FUNC_9(
          VAR_15->who_perm.who_ug_name,
          VAR_20, 256);
    }

    FUNC_11(VAR_7, VAR_15, VAR_16);
   } else {
    VAR_15 = VAR_14;
    VAR_13 = &VAR_15->who_perm;
   }
  }

  (void) FUNC_7(VAR_13, VAR_5, VAR_10);
 }

 return (0);
}
