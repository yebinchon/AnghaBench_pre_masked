
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; int tx_dropped; int rx_errors; int rx_dropped; } ;
struct vport {int stats_lock; TYPE_1__ err_stats; } ;
typedef enum vport_err_type { ____Placeholder_vport_err_type } vport_err_type ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vport *VAR_0, enum vport_err_type VAR_1)
{
 FUNC_0(&VAR_0->stats_lock);

 switch (VAR_1) {
 case 131:
  VAR_0->err_stats.rx_dropped++;
  break;

 case 130:
  VAR_0->err_stats.rx_errors++;
  break;

 case 129:
  VAR_0->err_stats.tx_dropped++;
  break;

 case 128:
  VAR_0->err_stats.tx_errors++;
  break;
 }

 FUNC_1(&VAR_0->stats_lock);
}
