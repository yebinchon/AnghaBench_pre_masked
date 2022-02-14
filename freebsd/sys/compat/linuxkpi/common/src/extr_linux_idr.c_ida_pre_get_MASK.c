
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_bitmap {int dummy; } ;
struct ida {int * free_bitmap; int idr; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int * FUNC_1 (int,int ,int ) ;

int
FUNC_2(struct ida *VAR_1, gfp_t VAR_2)
{
 if (FUNC_0(&VAR_1->idr, VAR_2) == 0)
  return (0);

 if (VAR_1->free_bitmap == ((void*)0)) {
  VAR_1->free_bitmap =
      FUNC_1(sizeof(struct ida_bitmap), VAR_0, VAR_2);
 }
 return (VAR_1->free_bitmap != ((void*)0));
}
