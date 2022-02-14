
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_sq {int sqn; TYPE_1__* priv; } ;
struct TYPE_2__ {int mdev; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,void*,int) ;
 void* FUNC_5 (int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_6(struct mlx5e_sq *VAR_6, int VAR_7, int VAR_8)
{
 void *VAR_9;
 void *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_2);
 VAR_9 = FUNC_5(VAR_11);
 if (VAR_9 == ((void*)0))
  return (-VAR_0);

 VAR_10 = FUNC_0(VAR_2, VAR_9, VAR_1);

 FUNC_1(VAR_2, VAR_9, VAR_4, VAR_6->sqn);
 FUNC_1(VAR_2, VAR_9, VAR_3, VAR_7);
 FUNC_1(VAR_10, VAR_10, VAR_5, VAR_8);

 VAR_12 = FUNC_4(VAR_6->priv->mdev, VAR_9, VAR_11);

 FUNC_3(VAR_9);

 return (VAR_12);
}
