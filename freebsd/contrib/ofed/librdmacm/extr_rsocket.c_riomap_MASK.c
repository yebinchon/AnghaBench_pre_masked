
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {int iomap_pending; int map_lock; int iomap_list; int iomap_queue; TYPE_1__* cm_id; } ;
struct rs_iomap_mr {int index; int offset; int entry; int refcnt; int mr; } ;
typedef int off_t ;
struct TYPE_2__ {int pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int) ;
 struct rs_iomap_mr* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rs_iomap_mr*) ;
 int FUNC_7 (int ,void*,size_t,int) ;
 int VAR_6 ;
 struct rsocket* FUNC_8 (int *,int) ;
 struct rs_iomap_mr* FUNC_9 (struct rsocket*) ;

off_t FUNC_10(int VAR_7, void *VAR_8, size_t VAR_9, int VAR_10, int VAR_11, off_t VAR_12)
{
 struct rsocket *VAR_13;
 struct rs_iomap_mr *VAR_14;
 int VAR_15 = VAR_2;

 VAR_13 = FUNC_8(&VAR_6, VAR_7);
 if (!VAR_13->cm_id->pd || (VAR_10 & ~(VAR_5 | VAR_4)))
  return FUNC_0(VAR_0);

 FUNC_4(&VAR_13->map_lock);
 if (VAR_10 & VAR_5) {
  VAR_14 = FUNC_9(VAR_13);
  VAR_15 |= VAR_3;
 } else {
  VAR_14 = FUNC_2(1, sizeof(*VAR_14));
  VAR_14->index = -1;
 }
 if (!VAR_14) {
  VAR_12 = FUNC_0(VAR_1);
  goto out;
 }

 VAR_14->mr = FUNC_7(VAR_13->cm_id->pd, VAR_8, VAR_9, VAR_15);
 if (!VAR_14->mr) {
  if (VAR_14->index < 0)
   FUNC_6(VAR_14);
  VAR_12 = -1;
  goto out;
 }

 if (VAR_12 == -1)
  VAR_12 = (uintptr_t) VAR_8;
 VAR_14->offset = VAR_12;
 FUNC_1(&VAR_14->refcnt, 1);

 if (VAR_14->index >= 0) {
  FUNC_3(&VAR_14->entry, &VAR_13->iomap_queue);
  VAR_13->iomap_pending = 1;
 } else {
  FUNC_3(&VAR_14->entry, &VAR_13->iomap_list);
 }
out:
 FUNC_5(&VAR_13->map_lock);
 return VAR_12;
}
