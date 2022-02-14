
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_peer {scalar_t__ wps; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct upnp_wps_peer*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct upnp_wps_peer *VAR_0)
{
 FUNC_0(&VAR_0->list);
 if (VAR_0->wps)
  FUNC_2(VAR_0->wps);
 FUNC_1(VAR_0);
}
