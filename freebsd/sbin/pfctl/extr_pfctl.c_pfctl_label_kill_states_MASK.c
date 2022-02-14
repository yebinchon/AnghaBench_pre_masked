
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_state_kill {int psk_killed; int psk_label; int psk_ifname; } ;
typedef int psk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int,int ,struct pfioc_state_kill*) ;
 int FUNC_4 (struct pfioc_state_kill*,int ,int) ;
 char const** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char const*,int) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;

int
FUNC_9(int VAR_5, const char *VAR_6, int VAR_7)
{
 struct pfioc_state_kill VAR_8;

 if (VAR_3 != 2 || (FUNC_6(VAR_2[1]) == 0)) {
  FUNC_8("no label specified");
  FUNC_7();
 }
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 if (VAR_6 != ((void*)0) && FUNC_5(VAR_8.psk_ifname, VAR_6,
     sizeof(VAR_8.psk_ifname)) >= sizeof(VAR_8.psk_ifname))
  FUNC_1(1, "invalid interface: %s", VAR_6);

 if (FUNC_5(VAR_8.psk_label, VAR_2[1], sizeof(VAR_8.psk_label)) >=
     sizeof(VAR_8.psk_label))
  FUNC_1(1, "label too long: %s", VAR_2[1]);

 if (FUNC_3(VAR_5, VAR_0, &VAR_8))
  FUNC_0(1, "DIOCKILLSTATES");

 if ((VAR_7 & VAR_1) == 0)
  FUNC_2(VAR_4, "killed %d states\n", VAR_8.psk_killed);

 return (0);
}
