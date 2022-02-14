
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_reqport {int rp_portname; int rp_ifname; } ;
typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct lagg_reqport*) ;
 int FUNC_1 (int ,char const*,int) ;

int
FUNC_2(ifconfig_handle_t *VAR_2,
    const char *VAR_3, struct lagg_reqport *VAR_4)
{
 FUNC_1(VAR_4->rp_ifname, VAR_3, sizeof(VAR_4->rp_portname));
 FUNC_1(VAR_4->rp_portname, VAR_3, sizeof(VAR_4->rp_portname));

 return (FUNC_0(VAR_2, VAR_0, VAR_1, VAR_4));
}
