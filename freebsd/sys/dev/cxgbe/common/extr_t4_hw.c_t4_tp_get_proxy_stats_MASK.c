
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tp_proxy_stats {int proxy; } ;
struct adapter {TYPE_1__* chip_params; } ;
struct TYPE_2__ {int nchan; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int,int ,int) ;

void FUNC_1(struct adapter *VAR_1, struct tp_proxy_stats *VAR_2,
    bool VAR_3)
{
 int VAR_4 = VAR_1->chip_params->nchan;

 FUNC_0(VAR_1, VAR_2->proxy, VAR_4, VAR_0, VAR_3);
}
