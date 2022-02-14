
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_buddy {int max_order; int* bits; int* num_free; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct mlx4_buddy *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_3->max_order = VAR_4;
 FUNC_5(&VAR_3->lock);

 VAR_3->bits = FUNC_1(VAR_3->max_order + 1, sizeof (long *),
         VAR_1);
 VAR_3->num_free = FUNC_1((VAR_3->max_order + 1), sizeof *VAR_3->num_free,
      VAR_1);
 if (!VAR_3->bits || !VAR_3->num_free)
  goto err_out;

 for (VAR_5 = 0; VAR_5 <= VAR_3->max_order; ++VAR_5) {
  VAR_6 = FUNC_0(1 << (VAR_3->max_order - VAR_5));
  VAR_3->bits[VAR_5] = FUNC_1(VAR_6, sizeof (long), VAR_1 | VAR_2);
  if (!VAR_3->bits[VAR_5]) {
   VAR_3->bits[VAR_5] = FUNC_6(VAR_6 * sizeof(long));
   if (!VAR_3->bits[VAR_5])
    goto err_out_free;
  }
 }

 FUNC_4(0, VAR_3->bits[VAR_3->max_order]);
 VAR_3->num_free[VAR_3->max_order] = 1;

 return 0;

err_out_free:
 for (VAR_5 = 0; VAR_5 <= VAR_3->max_order; ++VAR_5)
  FUNC_3(VAR_3->bits[VAR_5]);

err_out:
 FUNC_2(VAR_3->bits);
 FUNC_2(VAR_3->num_free);

 return -VAR_0;
}
