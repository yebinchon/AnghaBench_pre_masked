
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_hdl_t ;
struct TYPE_9__ {TYPE_6__* dn_ident; int dn_aggtup; int * dn_aggfun; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_11__ {int di_attr; } ;
struct TYPE_10__ {int * pcb_hdl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static dt_node_t *
FUNC_6(dt_node_t *VAR_3, uint_t VAR_4)
{
 dtrace_hdl_t *VAR_5 = VAR_2->pcb_hdl;

 if (VAR_3->dn_aggfun != ((void*)0)) {
  VAR_3->dn_aggfun = FUNC_4(VAR_3->dn_aggfun, VAR_1);
  FUNC_3(VAR_3, FUNC_2(VAR_3,
      VAR_3->dn_ident, &VAR_3->dn_aggtup));
 } else {
  FUNC_5(VAR_3, FUNC_0(VAR_5), FUNC_1(VAR_5),
      VAR_0);
  FUNC_3(VAR_3, VAR_3->dn_ident->di_attr);
 }

 return (VAR_3);
}
