
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int * gme_ds; int guid; } ;
typedef TYPE_1__ guid_map_entry_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int avl_tree_t ;
struct TYPE_9__ {int ds_guid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ,TYPE_1__*,int **) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (char const*,int ,int **) ;
 int FUNC_6 (int *,int ) ;
 TYPE_1__* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_2, avl_tree_t *VAR_3, uint64_t VAR_4)
{
 dsl_pool_t *VAR_5;
 dsl_dataset_t *VAR_6;
 guid_map_entry_t *VAR_7;
 int VAR_8;

 FUNC_0(VAR_3 != ((void*)0));

 VAR_8 = FUNC_5(VAR_2, VAR_0, &VAR_5);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_7 = FUNC_7(sizeof (*VAR_7), VAR_1);
 VAR_8 = FUNC_2(VAR_5, VAR_4, VAR_7, &VAR_6);
 if (VAR_8 == 0) {
  VAR_7->guid = FUNC_4(VAR_6)->ds_guid;
  VAR_7->gme_ds = VAR_6;
  FUNC_1(VAR_3, VAR_7);
  FUNC_3(VAR_6, VAR_7);
 } else
  FUNC_8(VAR_7, sizeof (*VAR_7));

 FUNC_6(VAR_5, VAR_0);
 return (VAR_8);
}
