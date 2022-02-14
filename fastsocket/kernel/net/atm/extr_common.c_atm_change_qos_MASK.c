
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ traffic_class; } ;
struct TYPE_8__ {scalar_t__ traffic_class; } ;
struct TYPE_10__ {scalar_t__ aal; TYPE_2__ txtp; TYPE_1__ rxtp; } ;
struct atm_vcc {TYPE_5__* dev; TYPE_3__ qos; } ;
struct TYPE_14__ {scalar_t__ traffic_class; } ;
struct atm_qos {scalar_t__ aal; TYPE_7__ rxtp; TYPE_7__ txtp; } ;
struct TYPE_13__ {scalar_t__ sk_family; } ;
struct TYPE_12__ {TYPE_4__* ops; } ;
struct TYPE_11__ {int (* change_qos ) (struct atm_vcc*,struct atm_qos*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*,scalar_t__) ;
 TYPE_6__* FUNC_1 (struct atm_vcc*) ;
 int FUNC_2 (struct atm_vcc*,struct atm_qos*,int ) ;
 int FUNC_3 (struct atm_vcc*,struct atm_qos*) ;

__attribute__((used)) static int FUNC_4(struct atm_vcc *VAR_4,struct atm_qos *VAR_5)
{
 int VAR_6;





 if (VAR_5->aal != VAR_4->qos.aal ||
     VAR_5->rxtp.traffic_class != VAR_4->qos.rxtp.traffic_class ||
     VAR_5->txtp.traffic_class != VAR_4->qos.txtp.traffic_class)
  return -VAR_2;
 VAR_6 = FUNC_0(&VAR_5->txtp,VAR_5->aal);
 if (!VAR_6) VAR_6 = FUNC_0(&VAR_5->rxtp,VAR_5->aal);
 if (VAR_6) return VAR_6;
 if (!VAR_4->dev->ops->change_qos) return -VAR_3;
 if (FUNC_1(VAR_4)->sk_family == VAR_0)
  return VAR_4->dev->ops->change_qos(VAR_4,VAR_5,VAR_1);
 return FUNC_3(VAR_4,VAR_5);
}
