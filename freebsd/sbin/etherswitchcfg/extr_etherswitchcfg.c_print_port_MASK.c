
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vlan_mode; } ;
struct cfg {scalar_t__ mediatypes; TYPE_1__ conf; int fd; } ;
typedef int p ;
struct TYPE_7__ {int* ifm_ulist; int ifm_count; int ifm_current; scalar_t__ ifm_active; int ifm_status; } ;
struct TYPE_8__ {int es_port; int es_pvid; int es_nleds; size_t* es_led; TYPE_2__ es_ifmr; int es_flags; } ;
typedef TYPE_3__ etherswitch_port_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_3__*) ;
 char** VAR_6 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char) ;

__attribute__((used)) static void
FUNC_7(struct cfg *VAR_7, int VAR_8)
{
 etherswitch_port_t VAR_9;
 int VAR_10[VAR_3];
 int VAR_11;

 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.es_port = VAR_8;
 VAR_9.es_ifmr.ifm_ulist = VAR_10;
 VAR_9.es_ifmr.ifm_count = VAR_3;
 if (FUNC_2(VAR_7->fd, VAR_5, &VAR_9) != 0)
  FUNC_1(VAR_2, "ioctl(IOETHERSWITCHGETPORT)");
 FUNC_5("port%d:\n", VAR_8);
 if (VAR_7->conf.vlan_mode == VAR_1)
  FUNC_5("\tpvid: %d\n", VAR_9.es_pvid);
 FUNC_4("\tflags", VAR_9.es_flags, VAR_0);
 FUNC_5("\n");
 if (VAR_9.es_nleds) {
  FUNC_5("\tled: ");
  for (VAR_11 = 0; VAR_11 < VAR_9.es_nleds; VAR_11++) {
   FUNC_5("%d:%s%s", VAR_11+1, VAR_6[VAR_9.es_led[VAR_11]], (VAR_11==VAR_9.es_nleds-1)?"":" ");
  }
  FUNC_5("\n");
 }
 FUNC_5("\tmedia: ");
 FUNC_3(VAR_9.es_ifmr.ifm_current, 1);
 if (VAR_9.es_ifmr.ifm_active != VAR_9.es_ifmr.ifm_current) {
  FUNC_6(' ');
  FUNC_6('(');
  FUNC_3(VAR_9.es_ifmr.ifm_active, 0);
  FUNC_6(')');
 }
 FUNC_6('\n');
 FUNC_5("\tstatus: %s\n", (VAR_9.es_ifmr.ifm_status & VAR_4) != 0 ? "active" : "no carrier");
 if (VAR_7->mediatypes) {
  FUNC_5("\tsupported media:\n");
  if (VAR_9.es_ifmr.ifm_count > VAR_3)
   VAR_9.es_ifmr.ifm_count = VAR_3;
  for (VAR_11=0; VAR_11<VAR_9.es_ifmr.ifm_count; VAR_11++) {
   FUNC_5("\t\tmedia ");
   FUNC_3(VAR_10[VAR_11], 0);
   FUNC_6('\n');
  }
 }
}
