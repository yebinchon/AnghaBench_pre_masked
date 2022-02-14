
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpa_driver_capa {int probe_resp_offloads; int flags; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct wpa_driver_capa *VAR_2,
       struct nlattr *VAR_3)
{
 u32 VAR_4;

 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_0, "nl80211: Supports Probe Response offload in AP "
     "mode");
 VAR_2->flags |= VAR_1;
 VAR_2->probe_resp_offloads = FUNC_1(VAR_4);
}
