
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uu_avl_index_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int fs_perm_t ;
struct TYPE_8__ {int fsps_list; int fsps_list_pool; } ;
typedef TYPE_1__ fs_perm_set_t ;
struct TYPE_9__ {int fspn_list_node; int fspn_fsperm; } ;
typedef TYPE_2__ fs_perm_node_t ;
typedef scalar_t__ data_type_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,char const*) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int *) ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (int ,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static inline int
FUNC_12(fs_perm_set_t *VAR_1, nvlist_t *VAR_2)
{
 nvpair_t *VAR_3 = ((void*)0);
 uu_avl_index_t VAR_4 = 0;

 while ((VAR_3 = FUNC_3(VAR_2, VAR_3)) != ((void*)0)) {
  nvlist_t *VAR_5 = ((void*)0);
  const char *VAR_6 = FUNC_4(VAR_3);
  data_type_t VAR_7 = FUNC_5(VAR_3);
  fs_perm_t *VAR_8 = ((void*)0);
  fs_perm_node_t *VAR_9 = FUNC_8(sizeof (fs_perm_node_t));
  if (VAR_9 == ((void*)0))
   FUNC_2();

  VAR_8 = &VAR_9->fspn_fsperm;

  FUNC_0(VAR_0 == VAR_7);

  FUNC_10(VAR_9, &VAR_9->fspn_list_node,
      VAR_1->fsps_list_pool);

  VAR_4 = FUNC_11(VAR_1->fsps_list);
  FUNC_1(VAR_8, VAR_1, VAR_6);

  if (FUNC_6(VAR_3, &VAR_5) != 0)
   return (-1);

  (void) FUNC_7(VAR_8, VAR_5);

  FUNC_9(VAR_1->fsps_list, VAR_9, VAR_4);
 }

 return (0);
}
