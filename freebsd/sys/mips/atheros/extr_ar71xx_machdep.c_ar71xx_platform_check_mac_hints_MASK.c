
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,int,int ,int,int) ;
 int FUNC_1 (char*,char const*,int,int) ;
 scalar_t__ FUNC_2 (char*,int,char*,int*) ;
 scalar_t__ FUNC_3 (char*,int,char*,char const**) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_1;
 const char *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  if (FUNC_3("ar71xx_mac_map", VAR_1, "devid",
      &VAR_2) != 0)
   break;
  if (FUNC_2("ar71xx_mac_map", VAR_1, "unitid",
      &VAR_5) != 0)
   break;
  if (FUNC_2("ar71xx_mac_map", VAR_1, "offset",
      &VAR_3) != 0)
   break;
  if (FUNC_2("ar71xx_mac_map", VAR_1, "is_local",
      &VAR_4) != 0)
   break;
  FUNC_1("ar71xx: devid '%s.%d', MAC offset '%d'\n",
      VAR_2, VAR_5, VAR_3);
  (void) FUNC_0(VAR_2, VAR_5,
      VAR_0, VAR_3, VAR_4);
 }

 return (0);
}
