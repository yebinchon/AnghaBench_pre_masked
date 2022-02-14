
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_radio_work {int type; } ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct wpa_radio_work *VAR_0)
{
 return FUNC_0(VAR_0->type, "scan") == 0 ||
  FUNC_0(VAR_0->type, "p2p-scan") == 0;
}
