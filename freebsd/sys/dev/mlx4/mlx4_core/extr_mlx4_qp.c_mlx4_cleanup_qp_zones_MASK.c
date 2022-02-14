
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_qp_table {int * zones; int * bitmap_gen; int * zones_uids; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_bitmap {int dummy; } ;
struct TYPE_2__ {struct mlx4_qp_table qp_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_bitmap*) ;
 TYPE_1__* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int *) ;
 struct mlx4_bitmap* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct mlx4_dev *VAR_0)
{
 struct mlx4_qp_table *VAR_1 = &FUNC_2(VAR_0)->qp_table;

 if (VAR_1->zones) {
  int VAR_2;

  for (VAR_2 = 0;
       VAR_2 < sizeof(VAR_1->zones_uids)/sizeof(VAR_1->zones_uids[0]);
       VAR_2++) {
   struct mlx4_bitmap *VAR_3 =
    FUNC_4(VAR_1->zones,
           VAR_1->zones_uids[VAR_2]);

   FUNC_5(VAR_1->zones, VAR_1->zones_uids[VAR_2]);
   if (((void*)0) == VAR_3)
    continue;

   FUNC_1(VAR_3);
  }
  FUNC_3(VAR_1->zones);
  FUNC_0(VAR_1->bitmap_gen);
  VAR_1->bitmap_gen = ((void*)0);
  VAR_1->zones = ((void*)0);
 }
}
