
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uchar_t ;
typedef int dtrace_hdl_t ;
struct TYPE_4__ {int dn_line; int dn_reg; int dn_u; int * dn_link; int * dn_list; int dn_attr; scalar_t__ dn_op; scalar_t__ dn_flags; scalar_t__ dn_kind; int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;

dt_node_t *
FUNC_2(dtrace_hdl_t *VAR_2, int VAR_3)
{
 dt_node_t *VAR_4 = FUNC_1(VAR_2, sizeof (dt_node_t));

 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_4->dn_ctfp = ((void*)0);
 VAR_4->dn_type = VAR_0;
 VAR_4->dn_kind = (uchar_t)VAR_3;
 VAR_4->dn_flags = 0;
 VAR_4->dn_op = 0;
 VAR_4->dn_line = -1;
 VAR_4->dn_reg = -1;
 VAR_4->dn_attr = VAR_1;
 VAR_4->dn_list = ((void*)0);
 VAR_4->dn_link = ((void*)0);
 FUNC_0(&VAR_4->dn_u, sizeof (VAR_4->dn_u));

 return (VAR_4);
}
