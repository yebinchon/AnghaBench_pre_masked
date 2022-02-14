
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int num_tc; } ;
struct mlx5e_channel {int * sq; int rq; } ;


 int FUNC_0 (struct mlx5e_priv*,int *) ;
 int FUNC_1 (struct mlx5e_priv*,int *) ;

__attribute__((used)) static int
FUNC_2(struct mlx5e_priv *VAR_0, struct mlx5e_channel *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->rq);
 if (VAR_2)
  goto done;

 for (VAR_3 = 0; VAR_3 != VAR_0->num_tc; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0, &VAR_1->sq[VAR_3]);
  if (VAR_2)
   goto done;
 }
done:
 return (VAR_2);
}
