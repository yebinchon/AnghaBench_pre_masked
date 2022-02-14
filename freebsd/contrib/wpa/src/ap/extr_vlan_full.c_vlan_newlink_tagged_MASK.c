
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlan_ifname ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (struct hostapd_data*,char*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char const*,int,char*) ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_6(int VAR_5, const char *VAR_6,
    const char *VAR_7, int VAR_8,
    struct hostapd_data *VAR_9)
{
 char VAR_10[VAR_3];
 int VAR_11;
 int VAR_12;

 if (VAR_5 == VAR_2)
  VAR_12 = FUNC_3(VAR_10, sizeof(VAR_10), "%s.%d",
      VAR_6, VAR_8);
 else
  VAR_12 = FUNC_3(VAR_10, sizeof(VAR_10), "vlan%d",
      VAR_8);
 if (VAR_12 >= (int) sizeof(VAR_10))
  FUNC_5(VAR_4,
      "VLAN: Interface name was truncated to %s",
      VAR_10);

 VAR_11 = 0;
 FUNC_2(VAR_6);
 if (!FUNC_4(VAR_6, VAR_8, VAR_10))
  VAR_11 |= VAR_0;

 if (!FUNC_0(VAR_7, VAR_10))
  VAR_11 |= VAR_1;

 FUNC_1(VAR_9, VAR_10, VAR_11);

 FUNC_2(VAR_10);
}
