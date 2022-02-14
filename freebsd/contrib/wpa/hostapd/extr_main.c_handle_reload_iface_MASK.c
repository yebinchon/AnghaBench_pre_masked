
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct hostapd_iface *VAR_1, void *VAR_2)
{
 if (FUNC_0(VAR_1) < 0) {
  FUNC_1(VAR_0, "Failed to read new configuration "
      "file - continuing with old.");
 }
 return 0;
}
