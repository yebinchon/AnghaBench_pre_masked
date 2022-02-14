
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zn_avlnode; int * zn_handle; } ;
typedef TYPE_1__ zfs_node_t ;
typedef int zfs_handle_t ;
typedef int uu_avl_index_t ;
struct TYPE_11__ {int cb_types; int cb_flags; scalar_t__ cb_depth; scalar_t__ cb_depth_limit; int cb_avl; TYPE_4__** cb_proplist; int cb_props_table; int cb_sortcol; } ;
typedef TYPE_2__ callback_data_t ;
typedef int boolean_t ;
struct TYPE_12__ {int pl_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_4__**,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,int (*) (int *,void*),void*) ;
 int FUNC_10 (int *,int (*) (int *,void*),void*) ;
 int FUNC_11 (int *,int,int (*) (int *,void*),void*,int ,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int
FUNC_13(zfs_handle_t *VAR_11, void *VAR_12)
{
 callback_data_t *VAR_13 = VAR_12;
 boolean_t VAR_14 = VAR_1;
 boolean_t VAR_15 = FUNC_8(VAR_11, VAR_13);
 boolean_t VAR_16 = (VAR_13->cb_types & VAR_7);

 if ((FUNC_7(VAR_11) & VAR_13->cb_types) ||
     ((FUNC_7(VAR_11) == VAR_9) && VAR_15)) {
  uu_avl_index_t VAR_17;
  zfs_node_t *VAR_18 = FUNC_1(sizeof (zfs_node_t));

  VAR_18->zn_handle = VAR_11;
  FUNC_4(VAR_18, &VAR_18->zn_avlnode, VAR_10);
  if (FUNC_2(VAR_13->cb_avl, VAR_18, VAR_13->cb_sortcol,
      &VAR_17) == ((void*)0)) {
   if (VAR_13->cb_proplist) {
    if ((*VAR_13->cb_proplist) &&
        !(*VAR_13->cb_proplist)->pl_all)
     FUNC_12(VAR_11,
         VAR_13->cb_props_table);

    if (FUNC_6(VAR_11, VAR_13->cb_proplist,
        (VAR_13->cb_flags & VAR_5),
        (VAR_13->cb_flags & VAR_3))
        != 0) {
     FUNC_0(VAR_18);
     return (-1);
    }
   }
   FUNC_3(VAR_13->cb_avl, VAR_18, VAR_17);
   VAR_14 = VAR_0;
  } else {
   FUNC_0(VAR_18);
  }
 }




 if (VAR_13->cb_flags & VAR_4 &&
     ((VAR_13->cb_flags & VAR_2) == 0 ||
     VAR_13->cb_depth < VAR_13->cb_depth_limit)) {
  VAR_13->cb_depth++;
  if (FUNC_7(VAR_11) == VAR_8)
   (void) FUNC_10(VAR_11, FUNC_13, VAR_12);
  if (((FUNC_7(VAR_11) & (VAR_9 |
      VAR_7)) == 0) && VAR_15)
   (void) FUNC_11(VAR_11,
       (VAR_13->cb_flags & VAR_6) != 0, FUNC_13,
       VAR_12, 0, 0);
  if (((FUNC_7(VAR_11) & (VAR_9 |
      VAR_7)) == 0) && VAR_16)
   (void) FUNC_9(VAR_11, FUNC_13, VAR_12);
  VAR_13->cb_depth--;
 }

 if (VAR_14)
  FUNC_5(VAR_11);

 return (0);
}
