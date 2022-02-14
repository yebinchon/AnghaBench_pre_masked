
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct mlx4_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlx4_dev*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;
 scalar_t__ FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (int *,scalar_t__) ;

int FUNC_6(struct mlx4_dev *VAR_7, u8 VAR_8, u64 VAR_9)
{
 u64 VAR_10 = 0;
 int VAR_11 = -VAR_0;

 if (FUNC_3(VAR_7)) {
  if (!(VAR_7->flags & VAR_4)) {
   VAR_11 = FUNC_2(VAR_7, VAR_9, &VAR_10,
        ((u32) VAR_8) << 8 | (u32) VAR_5,
        VAR_6, VAR_1,
        VAR_2, VAR_3);
  }
  if (VAR_11 && VAR_11 == -VAR_0 && FUNC_4(VAR_7)) {

   FUNC_5(&VAR_10, VAR_8);
   VAR_11 = FUNC_2(VAR_7, VAR_9, &VAR_10, VAR_5,
        VAR_6, VAR_1,
        VAR_2, VAR_3);
   if (!VAR_11)
    VAR_7->flags |= VAR_4;
  }
  if (VAR_11)
   return VAR_11;

  return FUNC_1(&VAR_10);
 }
 return FUNC_0(VAR_7, VAR_8, VAR_9);
}
