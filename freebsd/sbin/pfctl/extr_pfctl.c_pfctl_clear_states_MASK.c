
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_state_kill {int psk_killed; int psk_ifname; } ;
typedef int psk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int,int ,struct pfioc_state_kill*) ;
 int FUNC_4 (struct pfioc_state_kill*,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,char const*,int) ;

int
FUNC_6(int VAR_3, const char *VAR_4, int VAR_5)
{
 struct pfioc_state_kill VAR_6;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 if (VAR_4 != ((void*)0) && FUNC_5(VAR_6.psk_ifname, VAR_4,
     sizeof(VAR_6.psk_ifname)) >= sizeof(VAR_6.psk_ifname))
  FUNC_1(1, "invalid interface: %s", VAR_4);

 if (FUNC_3(VAR_3, VAR_0, &VAR_6))
  FUNC_0(1, "DIOCCLRSTATES");
 if ((VAR_5 & VAR_1) == 0)
  FUNC_2(VAR_2, "%d states cleared\n", VAR_6.psk_killed);
 return (0);
}
