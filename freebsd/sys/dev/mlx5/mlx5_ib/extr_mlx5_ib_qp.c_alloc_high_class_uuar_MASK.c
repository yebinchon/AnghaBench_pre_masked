
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {int * count; int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_uuar_info*) ;
 int FUNC_1 (struct mlx5_uuar_info*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx5_uuar_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = FUNC_0(VAR_1); VAR_2 < FUNC_1(VAR_1); VAR_2 = FUNC_2(VAR_2)) {
  if (!FUNC_4(VAR_2, VAR_1->bitmap)) {
   FUNC_3(VAR_2, VAR_1->bitmap);
   VAR_1->count[VAR_2]++;
   return VAR_2;
  }
 }

 return -VAR_0;
}
