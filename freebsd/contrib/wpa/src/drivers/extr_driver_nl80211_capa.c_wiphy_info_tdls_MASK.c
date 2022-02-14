
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_capa {int flags; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct wpa_driver_capa *VAR_3, struct nlattr *VAR_4,
       struct nlattr *VAR_5)
{
 if (VAR_4 == ((void*)0))
  return;

 FUNC_0(VAR_0, "nl80211: TDLS supported");
 VAR_3->flags |= VAR_2;

 if (VAR_5) {
  FUNC_0(VAR_0, "nl80211: TDLS external setup");
  VAR_3->flags |= VAR_1;
 }
}
