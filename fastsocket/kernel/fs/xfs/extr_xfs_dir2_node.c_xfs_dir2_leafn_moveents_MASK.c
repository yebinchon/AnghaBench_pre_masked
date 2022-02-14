
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int xfs_trans_t ;
struct TYPE_17__ {int count; int stale; } ;
struct TYPE_18__ {TYPE_1__ hdr; TYPE_12__* ents; } ;
typedef TYPE_2__ xfs_dir2_leaf_t ;
typedef int xfs_dir2_leaf_entry_t ;
struct TYPE_19__ {TYPE_2__* data; } ;
typedef TYPE_3__ xfs_dabuf_t ;
struct TYPE_20__ {int dp; int * trans; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct TYPE_16__ {int address; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_12__*,TYPE_12__*,int) ;
 int FUNC_4 (TYPE_12__*,TYPE_12__*,int) ;
 int FUNC_5 (TYPE_4__*,int,int,int) ;
 int FUNC_6 (int *,TYPE_3__*,int,int) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_9(
 xfs_da_args_t *VAR_1,
 xfs_dabuf_t *VAR_2,
 int VAR_3,
 xfs_dabuf_t *VAR_4,
 int VAR_5,
 int VAR_6)
{
 xfs_dir2_leaf_t *VAR_7;
 xfs_dir2_leaf_t *VAR_8;
 int VAR_9;
 xfs_trans_t *VAR_10;

 FUNC_5(VAR_1, VAR_3, VAR_5, VAR_6);




 if (VAR_6 == 0) {
  return;
 }
 VAR_10 = VAR_1->trans;
 VAR_8 = VAR_2->data;
 VAR_7 = VAR_4->data;





 if (VAR_5 < FUNC_1(VAR_7->hdr.count)) {
  FUNC_4(&VAR_7->ents[VAR_5 + VAR_6], &VAR_7->ents[VAR_5],
   (FUNC_1(VAR_7->hdr.count) - VAR_5) *
   sizeof(xfs_dir2_leaf_entry_t));
  FUNC_6(VAR_10, VAR_4, VAR_5 + VAR_6,
   VAR_6 + FUNC_1(VAR_7->hdr.count) - 1);
 }




 if (VAR_8->hdr.stale) {
  int VAR_11;

  for (VAR_11 = VAR_3, VAR_9 = 0; VAR_11 < VAR_3 + VAR_6; VAR_11++) {
   if (FUNC_2(VAR_8->ents[VAR_11].address) == VAR_0)
    VAR_9++;
  }
 } else
  VAR_9 = 0;



 FUNC_3(&VAR_7->ents[VAR_5], &VAR_8->ents[VAR_3],
  VAR_6 * sizeof(xfs_dir2_leaf_entry_t));
 FUNC_6(VAR_10, VAR_4, VAR_5, VAR_5 + VAR_6 - 1);




 if (VAR_3 + VAR_6 < FUNC_1(VAR_8->hdr.count)) {
  FUNC_4(&VAR_8->ents[VAR_3], &VAR_8->ents[VAR_3 + VAR_6],
   VAR_6 * sizeof(xfs_dir2_leaf_entry_t));
  FUNC_6(VAR_10, VAR_2, VAR_3, VAR_3 + VAR_6 - 1);
 }



 FUNC_0(&VAR_8->hdr.count, -(VAR_6));
 FUNC_0(&VAR_8->hdr.stale, -(VAR_9));
 FUNC_0(&VAR_7->hdr.count, VAR_6);
 FUNC_0(&VAR_7->hdr.stale, VAR_9);
 FUNC_7(VAR_10, VAR_2);
 FUNC_7(VAR_10, VAR_4);
 FUNC_8(VAR_1->dp, VAR_2);
 FUNC_8(VAR_1->dp, VAR_4);
}
