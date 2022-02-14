
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tp_cpl_stats {int rsp; int req; } ;
struct adapter {TYPE_1__* chip_params; } ;
struct TYPE_2__ {int nchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int,int ,int) ;

void FUNC_1(struct adapter *VAR_2, struct tp_cpl_stats *VAR_3,
    bool VAR_4)
{
 int VAR_5 = VAR_2->chip_params->nchan;

 FUNC_0(VAR_2, VAR_3->req, VAR_5, VAR_0, VAR_4);

 FUNC_0(VAR_2, VAR_3->rsp, VAR_5, VAR_1, VAR_4);
}
