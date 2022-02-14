
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_9__ {int dt_globals; int dt_aggs; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_10__ {scalar_t__ dn_op; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_11__ {TYPE_1__* pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static dt_node_t *
FUNC_2(dt_node_t *VAR_5, uint_t VAR_6)
{
 dtrace_hdl_t *VAR_7 = VAR_4->pcb_hdl;

 if (VAR_5->dn_op == VAR_3)
  FUNC_1(VAR_5, VAR_7->dt_aggs, VAR_1, VAR_0);
 else
  FUNC_1(VAR_5, VAR_7->dt_globals, VAR_2, VAR_0);

 return (FUNC_0(VAR_5, VAR_6));
}
