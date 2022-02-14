
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ zprop_source_t ;
typedef int zfs_handle_t ;
typedef int where ;
typedef int uu_list_index_t ;
typedef int property ;
struct TYPE_8__ {int cn_mounted; int cn_listnode; scalar_t__ cn_zoned; void* cn_needpost; int cn_shared; int * cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_9__ {scalar_t__ cl_realprop; scalar_t__ cl_prop; scalar_t__ cl_shareprop; int cl_gflags; scalar_t__ cl_alldependents; int cl_list; scalar_t__ cl_sorted; int cl_pool; void* cl_haszonedchild; scalar_t__ cl_allchildren; } ;
typedef TYPE_2__ prop_changelist_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int (*) (int *,void*),void*) ;
 scalar_t__ FUNC_14 (int *,scalar_t__,char*,int,scalar_t__*,char*,int,int ) ;
 scalar_t__ FUNC_15 (int *,int ) ;

__attribute__((used)) static int
FUNC_16(zfs_handle_t *VAR_10, void *VAR_11)
{
 prop_changelist_t *VAR_12 = VAR_11;
 char VAR_13[VAR_4];
 char VAR_14[64];
 prop_changenode_t *VAR_15;
 zprop_source_t VAR_16;
 zprop_source_t VAR_17;
 if (!(FUNC_0(VAR_10) && VAR_12->cl_realprop == VAR_5) &&
     FUNC_14(VAR_10, VAR_12->cl_prop, VAR_13,
     sizeof (VAR_13), &VAR_16, VAR_14, sizeof (VAR_14),
     VAR_0) != 0) {
  FUNC_9(VAR_10);
  return (0);
 }






 if (VAR_12->cl_shareprop != VAR_7 &&
     FUNC_14(VAR_10, VAR_12->cl_shareprop, VAR_13,
     sizeof (VAR_13), &VAR_17, VAR_14, sizeof (VAR_14),
     VAR_0) != 0) {
  FUNC_9(VAR_10);
  return (0);
 }

 if (VAR_12->cl_alldependents || VAR_12->cl_allchildren ||
     VAR_16 == VAR_8 ||
     VAR_16 == VAR_9 ||
     (VAR_12->cl_shareprop != VAR_7 &&
     (VAR_17 == VAR_8 ||
     VAR_17 == VAR_9))) {
  if ((VAR_15 = FUNC_8(FUNC_10(VAR_10),
      sizeof (prop_changenode_t))) == ((void*)0)) {
   FUNC_9(VAR_10);
   return (-1);
  }

  VAR_15->cn_handle = VAR_10;
  VAR_15->cn_mounted = (VAR_12->cl_gflags & VAR_2) ||
      FUNC_11(VAR_10, ((void*)0));
  VAR_15->cn_shared = FUNC_12(VAR_10);
  VAR_15->cn_zoned = FUNC_15(VAR_10, VAR_6);
  VAR_15->cn_needpost = VAR_1;


  if (FUNC_1() == VAR_3 && VAR_15->cn_zoned)
   VAR_12->cl_haszonedchild = VAR_1;

  FUNC_6(VAR_15, &VAR_15->cn_listnode, VAR_12->cl_pool);

  if (VAR_12->cl_sorted) {
   uu_list_index_t VAR_18;

   (void) FUNC_2(VAR_12->cl_list, VAR_15, ((void*)0),
       &VAR_18);
   FUNC_4(VAR_12->cl_list, VAR_15, VAR_18);
  } else {
   FUNC_7(FUNC_5(VAR_12->cl_list,
       FUNC_3(VAR_12->cl_list), VAR_15) == 0);
  }

  if (!VAR_12->cl_alldependents)
   return (FUNC_13(VAR_10, FUNC_16, VAR_11));
 } else {
  FUNC_9(VAR_10);
 }

 return (0);
}
