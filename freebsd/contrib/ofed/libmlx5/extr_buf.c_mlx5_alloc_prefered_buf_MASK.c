
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_context {int dummy; } ;
struct mlx5_buf {int dummy; } ;
typedef enum mlx5_alloc_type { ____Placeholder_mlx5_alloc_type } mlx5_alloc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx5_context*,struct mlx5_buf*,size_t,int) ;
 int FUNC_1 (struct mlx5_buf*,size_t,int) ;
 int FUNC_2 (struct mlx5_context*,struct mlx5_buf*,size_t,int,char const*) ;
 int FUNC_3 (int ,int ,char*,...) ;
 int VAR_6 ;

int FUNC_4(struct mlx5_context *VAR_7,
       struct mlx5_buf *VAR_8,
       size_t VAR_9, int VAR_10,
       enum mlx5_alloc_type VAR_11,
       const char *VAR_12)
{
 int VAR_13;







 if (VAR_11 == VAR_2 ||
     VAR_11 == VAR_4 ||
     VAR_11 == VAR_0) {
  VAR_13 = FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10);
  if (!VAR_13)
   return 0;

  if (VAR_11 == VAR_2)
   return -1;

  FUNC_3(VAR_6, VAR_5,
    "Huge mode allocation failed, fallback to %s mode\n",
    VAR_0 ? "contig" : "default");
 }

 if (VAR_11 == VAR_1 ||
     VAR_11 == VAR_3 ||
     VAR_11 == VAR_0) {
  VAR_13 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);
  if (!VAR_13)
   return 0;

  if (VAR_11 == VAR_1)
   return -1;
  FUNC_3(VAR_6, VAR_5,
    "Contig allocation failed, fallback to default mode\n");
 }

 return FUNC_1(VAR_8, VAR_9, VAR_10);

}
