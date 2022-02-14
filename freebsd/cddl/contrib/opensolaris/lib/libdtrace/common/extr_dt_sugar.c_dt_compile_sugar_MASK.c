
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {void* dt_has_sugar; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_16__ {scalar_t__ dtsp_num_ifs; scalar_t__ dtsp_num_conditions; TYPE_3__* dtsp_clause_list; int dtsp_pdescs; TYPE_1__* dtsp_dtp; int member_0; } ;
typedef TYPE_2__ dt_sugar_parse_t ;
struct TYPE_17__ {int * dn_list; int * dn_acts; int * dn_pred; int dn_pdescs; } ;
typedef TYPE_3__ dt_node_t ;


 void* VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,int *,int) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;

dt_node_t *
FUNC_9(dtrace_hdl_t *VAR_4, dt_node_t *VAR_5)
{
 dt_sugar_parse_t VAR_6 = { 0 };
 int VAR_7 = 0;

 VAR_6.dtsp_dtp = VAR_4;
 VAR_6.dtsp_pdescs = VAR_5->dn_pdescs;


 VAR_1 = VAR_0;
 VAR_3[0] = '\0';
 VAR_2 = 0;

 FUNC_7(&VAR_6, VAR_5);

 if (VAR_6.dtsp_num_ifs == 0 && VAR_6.dtsp_num_conditions == 0) {







  FUNC_1(&VAR_6, FUNC_0(VAR_5->dn_pdescs,
      VAR_5->dn_pred, VAR_5->dn_acts));
 } else {
  if (VAR_5->dn_pred != ((void*)0)) {
   VAR_7 = FUNC_5(&VAR_6,
       VAR_5->dn_pred, VAR_7);
  }

  if (VAR_5->dn_acts == ((void*)0)) {






   FUNC_3(&VAR_6, VAR_7, ((void*)0));
  } else {
   FUNC_8(&VAR_6, VAR_5->dn_acts, VAR_7);
  }
 }

 if (VAR_6.dtsp_num_conditions != 0) {
  FUNC_6(&VAR_6,
      FUNC_4(&VAR_6));
 }

 if (VAR_6.dtsp_clause_list != ((void*)0) &&
     VAR_6.dtsp_clause_list->dn_list != ((void*)0) && !VAR_4->dt_has_sugar) {
  VAR_4->dt_has_sugar = VAR_0;
  FUNC_6(&VAR_6, FUNC_2());
 }
 return (VAR_6.dtsp_clause_list);
}
