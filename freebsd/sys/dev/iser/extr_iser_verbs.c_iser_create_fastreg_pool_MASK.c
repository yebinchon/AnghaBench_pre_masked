
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_device {int pd; int ib_device; } ;
struct TYPE_2__ {scalar_t__ pool_size; int pool; } ;
struct ib_conn {TYPE_1__ fastreg; struct iser_device* device; } ;
struct fast_reg_descriptor {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 struct fast_reg_descriptor* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ib_conn*) ;
 int FUNC_4 (int *,int *) ;

int
FUNC_5(struct ib_conn *VAR_1, unsigned VAR_2)
{
 struct iser_device *VAR_3 = VAR_1->device;
 struct fast_reg_descriptor *VAR_4;
 int VAR_5;

 FUNC_0(&VAR_1->fastreg.pool);
 VAR_1->fastreg.pool_size = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_2(VAR_3->ib_device, VAR_3->pd);
  if (!VAR_4) {
   FUNC_1("Failed to create fastreg descriptor");
   goto err;
  }

  FUNC_4(&VAR_4->list, &VAR_1->fastreg.pool);
  VAR_1->fastreg.pool_size++;
 }

 return (0);

err:
 FUNC_3(VAR_1);
 return (VAR_0);
}
