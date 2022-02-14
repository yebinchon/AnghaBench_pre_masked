
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct octeon_device {int dummy; } ;
struct TYPE_9__ {int param2; int more; int param1; int cmd; } ;
struct TYPE_10__ {TYPE_4__ s; scalar_t__ cmd64; } ;
struct lio_ctrl_pkt {TYPE_5__ ncmd; scalar_t__ wait_time; int * udd; int cb_fn; struct lio* lio; int iq_no; } ;
struct TYPE_8__ {TYPE_2__* txpciq; } ;
struct lio {struct octeon_device* oct_dev; TYPE_3__ linfo; } ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {int q_no; } ;
struct TYPE_7__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lio_ctrl_pkt*,int) ;
 int FUNC_1 (struct ifnet*,int ,int *) ;
 struct lio* FUNC_2 (struct ifnet*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct octeon_device*,char*,int) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct octeon_device*,struct lio_ctrl_pkt*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_4)
{
 struct lio *VAR_5 = FUNC_2(VAR_4);
 struct octeon_device *VAR_6 = VAR_5->oct_dev;
 struct lio_ctrl_pkt VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0(&VAR_7, sizeof(struct lio_ctrl_pkt));


 VAR_7.ncmd.cmd64 = 0;
 VAR_7.ncmd.s.cmd = VAR_1;
 VAR_7.ncmd.s.param1 = FUNC_4(VAR_4);
 VAR_7.iq_no = VAR_5->linfo.txpciq[0].s.q_no;
 VAR_7.lio = VAR_5;
 VAR_7.cb_fn = VAR_3;


 VAR_8 = FUNC_1(VAR_4, VAR_2, &VAR_7.udd[0]);





 VAR_7.wait_time = 0;
 VAR_7.ncmd.s.param2 = VAR_8;
 VAR_7.ncmd.s.more = VAR_8;

 VAR_9 = FUNC_5(VAR_5->oct_dev, &VAR_7);
 if (VAR_9 < 0) {
  FUNC_3(VAR_6, "DEVFLAGS change failed in core (ret: 0x%x)\n",
       VAR_9);
 }

 return ((VAR_9) ? VAR_0 : 0);
}
