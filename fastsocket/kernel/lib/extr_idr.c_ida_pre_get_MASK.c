
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_bitmap {int dummy; } ;
struct ida {int free_bitmap; int idr; } ;
typedef int gfp_t ;


 int FUNC_0 (struct ida*,struct ida_bitmap*) ;
 int FUNC_1 (int *,int ) ;
 struct ida_bitmap* FUNC_2 (int,int ) ;

int FUNC_3(struct ida *VAR_0, gfp_t VAR_1)
{

 if (!FUNC_1(&VAR_0->idr, VAR_1))
  return 0;


 if (!VAR_0->free_bitmap) {
  struct ida_bitmap *VAR_2;

  VAR_2 = FUNC_2(sizeof(struct ida_bitmap), VAR_1);
  if (!VAR_2)
   return 0;

  FUNC_0(VAR_0, VAR_2);
 }

 return 1;
}
