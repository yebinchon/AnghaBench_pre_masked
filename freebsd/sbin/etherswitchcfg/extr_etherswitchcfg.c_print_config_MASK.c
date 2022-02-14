
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int vlan_mode; int switch_macaddr; } ;
struct cfg {char* controlfile; TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;





 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3(struct cfg *VAR_2)
{
 const char *VAR_3;


 VAR_3 = FUNC_2(VAR_2->controlfile, '/');
 if (VAR_3 != ((void*)0))
  VAR_3 = VAR_3 + 1;
 else
  VAR_3 = VAR_2->controlfile;


 if (VAR_2->conf.cmd & VAR_1) {
  FUNC_1("%s: VLAN mode: ", VAR_3);
  switch (VAR_2->conf.vlan_mode) {
  case 129:
   FUNC_1("ISL\n");
   break;
  case 128:
   FUNC_1("PORT\n");
   break;
  case 132:
   FUNC_1("DOT1Q\n");
   break;
  case 131:
   FUNC_1("DOT1Q4K\n");
   break;
  case 130:
   FUNC_1("QinQ\n");
   break;
  default:
   FUNC_1("none\n");
  }
 }


 if (VAR_2->conf.cmd & VAR_0) {
  FUNC_1("%s: Switch MAC address: %s\n",
      VAR_3,
      FUNC_0(&VAR_2->conf.switch_macaddr));
 }
}
