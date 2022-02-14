
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong_t ;
typedef int dtrace_hdl_t ;
struct TYPE_5__ {int dx_dst_ctfp; TYPE_2__* dx_members; TYPE_2__* dx_nodes; int * dx_hdl; } ;
typedef TYPE_1__ dt_xlator_t ;
struct TYPE_6__ {scalar_t__ dn_kind; int * dn_membname; struct TYPE_6__* dn_membexpr; struct TYPE_6__* dn_list; struct TYPE_6__* dn_link; struct TYPE_6__* dn_xmember; TYPE_1__* dn_xlator; int dn_op; } ;
typedef TYPE_2__ dt_node_t ;
typedef int ctf_id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_5, ctf_id_t VAR_6, ulong_t VAR_7, void *VAR_8)
{
 dt_xlator_t *VAR_9 = VAR_8;
 dtrace_hdl_t *VAR_10 = VAR_9->dx_hdl;
 dt_node_t *VAR_11, *VAR_12;

 if ((VAR_11 = FUNC_2(VAR_10, VAR_2)) == ((void*)0))
  return (FUNC_3(VAR_10, VAR_4));

 VAR_11->dn_link = VAR_9->dx_nodes;
 VAR_9->dx_nodes = VAR_11;

 if ((VAR_12 = FUNC_2(VAR_10, VAR_1)) == ((void*)0))
  return (FUNC_3(VAR_10, VAR_4));

 VAR_12->dn_link = VAR_9->dx_nodes;
 VAR_9->dx_nodes = VAR_12;






 VAR_11->dn_op = VAR_3;
 VAR_11->dn_xlator = VAR_9;
 VAR_11->dn_xmember = VAR_12;
 FUNC_1(VAR_11, VAR_9->dx_dst_ctfp, VAR_6, VAR_0);





 if (VAR_9->dx_members != ((void*)0)) {
  FUNC_0(VAR_11->dn_link->dn_kind == VAR_1);
  VAR_11->dn_link->dn_list = VAR_12;
 } else
  VAR_9->dx_members = VAR_12;

 VAR_12->dn_membname = FUNC_4(VAR_5);
 VAR_12->dn_membexpr = VAR_11;
 FUNC_1(VAR_12, VAR_9->dx_dst_ctfp, VAR_6, VAR_0);

 if (VAR_12->dn_membname == ((void*)0))
  return (FUNC_3(VAR_10, VAR_4));

 return (0);
}
