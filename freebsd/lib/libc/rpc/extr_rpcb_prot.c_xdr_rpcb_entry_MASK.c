
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r_nc_proto; int r_nc_protofmly; int r_nc_semantics; int r_nc_netid; int r_maddr; } ;
typedef TYPE_1__ rpcb_entry ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;

bool_t
FUNC_2(XDR *VAR_3, rpcb_entry *VAR_4)
{
 if (!FUNC_0(VAR_3, &VAR_4->r_maddr, VAR_1)) {
  return (VAR_0);
 }
 if (!FUNC_0(VAR_3, &VAR_4->r_nc_netid, VAR_1)) {
  return (VAR_0);
 }
 if (!FUNC_1(VAR_3, &VAR_4->r_nc_semantics)) {
  return (VAR_0);
 }
 if (!FUNC_0(VAR_3, &VAR_4->r_nc_protofmly, VAR_1)) {
  return (VAR_0);
 }
 if (!FUNC_0(VAR_3, &VAR_4->r_nc_proto, VAR_1)) {
  return (VAR_0);
 }
 return (VAR_2);
}
