
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ida_bitmap {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct ida {TYPE_1__ idr; struct ida_bitmap* free_bitmap; } ;


 int FUNC_0 (struct ida_bitmap*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ida *VAR_0, struct ida_bitmap *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_0->free_bitmap) {
  FUNC_1(&VAR_0->idr.lock, VAR_2);
  if (!VAR_0->free_bitmap) {
   VAR_0->free_bitmap = VAR_1;
   VAR_1 = ((void*)0);
  }
  FUNC_2(&VAR_0->idr.lock, VAR_2);
 }

 FUNC_0(VAR_1);
}
