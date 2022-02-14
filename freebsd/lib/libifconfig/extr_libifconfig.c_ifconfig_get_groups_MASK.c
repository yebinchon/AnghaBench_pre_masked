
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifgroupreq {int ifgr_len; struct ifg_req* ifgr_groups; int ifgr_name; } ;
struct ifg_req {int dummy; } ;
struct TYPE_5__ {scalar_t__ errcode; } ;
struct TYPE_6__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifg_req*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,struct ifgroupreq*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ifgroupreq*,int ,int) ;
 int FUNC_4 (int ,char const*,int ) ;

int
FUNC_5(ifconfig_handle_t *VAR_5, const char *VAR_6,
    struct ifgroupreq *VAR_7)
{
 int VAR_8;

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 FUNC_4(VAR_7->ifgr_name, VAR_6, VAR_3);

 if (FUNC_1(VAR_5, VAR_0, VAR_4, VAR_7) == -1) {
  if ((VAR_5->error.errcode == VAR_1) ||
      (VAR_5->error.errcode == VAR_2)) {
   return (0);
  } else {
   return (-1);
  }
 }

 VAR_8 = VAR_7->ifgr_len;
 VAR_7->ifgr_groups = (struct ifg_req *)FUNC_2(VAR_8);
 if (VAR_7->ifgr_groups == ((void*)0)) {
  return (1);
 }
 FUNC_0(VAR_7->ifgr_groups, VAR_8);
 if (FUNC_1(VAR_5, VAR_0, VAR_4, VAR_7) == -1) {
  return (-1);
 }

 return (0);
}
