
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_priv {int dev; int ctx_lock; int ctx_list; } ;
struct mlx4_interface {int (* activate ) (int *,scalar_t__) ;scalar_t__ (* add ) (int *) ;} ;
struct mlx4_device_context {scalar_t__ context; int list; struct mlx4_interface* intf; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mlx4_device_context*) ;
 struct mlx4_device_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(struct mlx4_interface *VAR_2, struct mlx4_priv *VAR_3)
{
 struct mlx4_device_context *VAR_4;

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_0);
 if (!VAR_4)
  return;

 VAR_4->intf = VAR_2;
 VAR_4->context = VAR_2->add(&VAR_3->dev);

 if (VAR_4->context) {
  FUNC_5(&VAR_3->ctx_lock);
  FUNC_4(&VAR_4->list, &VAR_3->ctx_list);
  FUNC_6(&VAR_3->ctx_lock);
  if (VAR_2->activate) {
   FUNC_1(VAR_1);
   VAR_2->activate(&VAR_3->dev, VAR_4->context);
   FUNC_0();
  }
 } else
  FUNC_2(VAR_4);
}
