
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mlx4_ib_dev {int * sl2vl; int ib_dev; TYPE_1__* dev; } ;
struct TYPE_4__ {int num_ports; scalar_t__* port_type; } ;
struct TYPE_3__ {TYPE_2__ caps; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int,scalar_t__*) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_dev *VAR_1)
{
 u64 VAR_2;
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 1; VAR_3 <= VAR_1->dev->caps.num_ports; VAR_3++) {
  if (VAR_1->dev->caps.port_type[VAR_3] == VAR_0)
   continue;
  VAR_4 = FUNC_1(&VAR_1->ib_dev, VAR_3, &VAR_2);
  if (VAR_4) {
   FUNC_2("Unable to get default sl to vl mapping for port %d.  Using all zeroes (%d)\n",
          VAR_3, VAR_4);
   VAR_2 = 0;
  }
  FUNC_0(&VAR_1->sl2vl[VAR_3 - 1], VAR_2);
 }
}
