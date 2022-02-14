
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_spinlock {int in_use; int lock; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct mlx5_spinlock *VAR_3)
{
 if (!VAR_1)
  return FUNC_3(&VAR_3->lock);

 if (FUNC_4(VAR_3->in_use)) {
  FUNC_2(VAR_2, "*** ERROR: multithreading vilation ***\n"
   "You are running a multithreaded application but\n"
   "you set MLX5_SINGLE_THREADED=1. Please unset it.\n");
  FUNC_0();
 } else {
  VAR_3->in_use = 1;




  FUNC_1(VAR_0);
 }

 return 0;
}
