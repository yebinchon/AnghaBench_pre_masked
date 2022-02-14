
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct idr_layer {int count; scalar_t__* ary; } ;
struct ida_bitmap {int nr_busy; int bitmap; } ;
struct TYPE_3__ {scalar_t__ id_free_cnt; int lock; } ;
struct ida {TYPE_1__ idr; struct ida_bitmap* free_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 struct idr_layer* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,struct idr_layer**) ;
 int VAR_6 ;
 int FUNC_5 (struct idr_layer**,int) ;
 int FUNC_6 (int ,struct idr_layer*) ;
 int FUNC_7 (struct ida_bitmap*,int ,int) ;
 int FUNC_8 (scalar_t__,void*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

int FUNC_11(struct ida *VAR_7, int VAR_8, int *VAR_9)
{
 struct idr_layer *VAR_10[VAR_5];
 struct ida_bitmap *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = VAR_8 / VAR_2;
 int VAR_14 = VAR_8 % VAR_2;
 int VAR_15, VAR_16;

 restart:

 VAR_15 = FUNC_4(&VAR_7->idr, VAR_13, VAR_10);
 if (VAR_15 < 0)
  return FUNC_1(VAR_15);

 if (VAR_15 * VAR_2 >= VAR_4)
  return -VAR_1;

 if (VAR_15 != VAR_13)
  VAR_14 = 0;
 VAR_13 = VAR_15;


 VAR_11 = (void *)VAR_10[0]->ary[VAR_13 & VAR_3];
 if (!VAR_11) {
  FUNC_9(&VAR_7->idr.lock, VAR_12);
  VAR_11 = VAR_7->free_bitmap;
  VAR_7->free_bitmap = ((void*)0);
  FUNC_10(&VAR_7->idr.lock, VAR_12);

  if (!VAR_11)
   return -VAR_0;

  FUNC_7(VAR_11, 0, sizeof(struct ida_bitmap));
  FUNC_8(VAR_10[0]->ary[VAR_13 & VAR_3],
    (void *)VAR_11);
  VAR_10[0]->count++;
 }


 VAR_15 = FUNC_2(VAR_11->bitmap, VAR_2, VAR_14);
 if (VAR_15 == VAR_2) {

  VAR_13++;
  VAR_14 = 0;
  goto restart;
 }

 VAR_16 = VAR_13 * VAR_2 + VAR_15;
 if (VAR_16 >= VAR_4)
  return -VAR_1;

 FUNC_0(VAR_15, VAR_11->bitmap);
 if (++VAR_11->nr_busy == VAR_2)
  FUNC_5(VAR_10, VAR_13);

 *VAR_9 = VAR_16;






 if (VAR_7->idr.id_free_cnt || VAR_7->free_bitmap) {
  struct idr_layer *VAR_17 = FUNC_3(&VAR_7->idr);
  if (VAR_17)
   FUNC_6(VAR_6, VAR_17);
 }

 return 0;
}
