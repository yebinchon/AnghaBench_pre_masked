
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int es_nports; } ;
struct TYPE_5__ {scalar_t__ vlan_mode; } ;
struct cfg {TYPE_2__ info; TYPE_1__ conf; int fd; } ;
struct TYPE_7__ {int es_vlangroup; int es_vid; int es_member_ports; int es_untagged_ports; } ;
typedef TYPE_3__ etherswitch_vlangroup_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct cfg *VAR_5, int VAR_6)
{
 etherswitch_vlangroup_t VAR_7;
 int VAR_8, VAR_9;

 VAR_7.es_vlangroup = VAR_6;
 if (FUNC_2(VAR_5->fd, VAR_4, &VAR_7) != 0)
  FUNC_1(VAR_3, "ioctl(IOETHERSWITCHGETVLANGROUP)");
 if ((VAR_7.es_vid & VAR_1) == 0)
  return;
 VAR_7.es_vid &= VAR_0;
 FUNC_3("vlangroup%d:\n", VAR_6);
 if (VAR_5->conf.vlan_mode == VAR_2)
  FUNC_3("\tport: %d\n", VAR_7.es_vid);
 else
  FUNC_3("\tvlan: %d\n", VAR_7.es_vid);
 FUNC_3("\tmembers ");
 VAR_9 = 0;
 if (VAR_7.es_member_ports != 0)
  for (VAR_8=0; VAR_8<VAR_5->info.es_nports; VAR_8++) {
   if ((VAR_7.es_member_ports & FUNC_0(VAR_8)) != 0) {
    if (VAR_9)
     FUNC_3(",");
    FUNC_3("%d", VAR_8);
    if ((VAR_7.es_untagged_ports & FUNC_0(VAR_8)) == 0)
     FUNC_3("t");
    VAR_9 = 1;
   }
  }
 else
  FUNC_3("none");
 FUNC_3("\n");
}
