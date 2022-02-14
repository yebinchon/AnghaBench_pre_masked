
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ifconfig_lagg_status {TYPE_5__* rf; TYPE_5__* ro; TYPE_5__* ra; } ;
struct TYPE_8__ {int ra_size; int ra_ifname; scalar_t__ rf_flags; int rf_ifname; int ro_ifname; int ra_port; } ;
struct _ifconfig_lagg_status {TYPE_5__ ra; TYPE_5__ rf; TYPE_5__ ro; int rpbuf; struct ifconfig_lagg_status l; } ;
struct TYPE_6__ {int errcode; int errtype; } ;
struct TYPE_7__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct _ifconfig_lagg_status* FUNC_0 (int,int) ;
 int FUNC_1 (struct _ifconfig_lagg_status*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,TYPE_5__*) ;
 int FUNC_3 (int ,char const*,int) ;

int
FUNC_4(ifconfig_handle_t *VAR_6,
    const char *VAR_7, struct ifconfig_lagg_status **VAR_8)
{
 struct _ifconfig_lagg_status *VAR_9;

 VAR_9 = FUNC_0(1, sizeof(struct _ifconfig_lagg_status));
 if (VAR_9 == ((void*)0)) {
  VAR_6->error.errtype = VAR_2;
  VAR_6->error.errcode = VAR_1;
  return (-1);
 }
 VAR_9->l.ra = &VAR_9->ra;
 VAR_9->l.ro = &VAR_9->ro;
 VAR_9->l.rf = &VAR_9->rf;
 *VAR_8 = &VAR_9->l;

 VAR_9->ra.ra_port = VAR_9->rpbuf;
 VAR_9->ra.ra_size = sizeof(VAR_9->rpbuf);

 FUNC_3(VAR_9->ro.ro_ifname, VAR_7, sizeof(VAR_9->ro.ro_ifname));
 FUNC_2(VAR_6, VAR_0, VAR_5, &VAR_9->ro);

 FUNC_3(VAR_9->rf.rf_ifname, VAR_7, sizeof(VAR_9->rf.rf_ifname));
 if (FUNC_2(VAR_6, VAR_0, VAR_4, &VAR_9->rf) != 0) {
  VAR_9->rf.rf_flags = 0;
 }

 FUNC_3(VAR_9->ra.ra_ifname, VAR_7, sizeof(VAR_9->ra.ra_ifname));
 if (FUNC_2(VAR_6, VAR_0, VAR_3, &VAR_9->ra) != 0) {
  FUNC_1(VAR_9);
  return (-1);
 }

 return (0);
}
