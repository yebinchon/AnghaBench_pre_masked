
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_5__* priv_p ;
typedef int node_p ;
struct TYPE_9__ {scalar_t__ mode; void* red_action; void* yellow_action; void* green_action; void* cir; void* ebs; void* cbs; } ;
struct TYPE_11__ {int q_mtx; int q_callout; scalar_t__ q_last; scalar_t__ q_first; int lastRefill; TYPE_2__ conf; void* te; void* tc; int * dest; int * hook; } ;
struct TYPE_8__ {scalar_t__ mode; void* red_action; void* yellow_action; void* green_action; void* cir; void* ebs; void* cbs; } ;
struct TYPE_10__ {int lastRefill; int q_mtx; int q_callout; scalar_t__ q_last; scalar_t__ q_first; TYPE_1__ conf; void* te; void* tc; int * dest; int * hook; } ;
struct TYPE_12__ {TYPE_4__ lower; TYPE_3__ upper; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(node_p VAR_9)
{
 priv_p VAR_10;


 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1, VAR_2 | VAR_3);

 FUNC_0(VAR_9, VAR_10);
 VAR_10->node = VAR_9;





 VAR_10->upper.hook = ((void*)0);
 VAR_10->upper.dest = ((void*)0);
 VAR_10->upper.tc = VAR_10->upper.conf.cbs = VAR_6;
 VAR_10->upper.te = VAR_10->upper.conf.ebs = VAR_8;
 VAR_10->upper.conf.cir = VAR_7;
 VAR_10->upper.conf.green_action = VAR_5;
 VAR_10->upper.conf.yellow_action = VAR_5;
 VAR_10->upper.conf.red_action = VAR_4;
 VAR_10->upper.conf.mode = 0;
 FUNC_1(&VAR_10->upper.lastRefill);
 VAR_10->upper.q_first = 0;
 VAR_10->upper.q_last = 0;
 FUNC_4(&VAR_10->upper.q_callout);
 FUNC_3(&VAR_10->upper.q_mtx, "ng_car_u", ((void*)0), VAR_0);

 VAR_10->lower.hook = ((void*)0);
 VAR_10->lower.dest = ((void*)0);
 VAR_10->lower.tc = VAR_10->lower.conf.cbs = VAR_6;
 VAR_10->lower.te = VAR_10->lower.conf.ebs = VAR_8;
 VAR_10->lower.conf.cir = VAR_7;
 VAR_10->lower.conf.green_action = VAR_5;
 VAR_10->lower.conf.yellow_action = VAR_5;
 VAR_10->lower.conf.red_action = VAR_4;
 VAR_10->lower.conf.mode = 0;
 VAR_10->lower.lastRefill = VAR_10->upper.lastRefill;
 VAR_10->lower.q_first = 0;
 VAR_10->lower.q_last = 0;
 FUNC_4(&VAR_10->lower.q_callout);
 FUNC_3(&VAR_10->lower.q_mtx, "ng_car_l", ((void*)0), VAR_0);

 return (0);
}
