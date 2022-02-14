
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int rport ;
struct TYPE_12__ {void* mod; void* id; } ;
struct TYPE_13__ {int method; int timeout; void* mgtclass; TYPE_1__ attr; int trid; void* oui; int member_0; } ;
typedef TYPE_2__ ib_rpc_t ;
struct TYPE_14__ {int flags; int member_0; } ;
typedef TYPE_3__ ib_rmpp_hdr_t ;
struct TYPE_15__ {int qp; void* qkey; int gid; scalar_t__ grh_present; int sl; int lid; } ;
typedef TYPE_4__ ib_portid_t ;
struct TYPE_16__ {int gid; scalar_t__ grh_present; int sl; int qkey; int qpn; int lid; } ;
typedef TYPE_5__ ib_mad_addr_t ;


 int FUNC_0 (char*,...) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (void*,TYPE_2__*,TYPE_4__*,TYPE_3__*,int ) ;
 void* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_11 (void*) ;
 TYPE_5__* FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (int ,int ,void*,int,int ,int ) ;
 int FUNC_14 (int ,char*,int *,int) ;

__attribute__((used)) static int FUNC_15(void *VAR_13, int VAR_14)
{
 ib_rpc_t VAR_15 = { 0 };
 ib_rmpp_hdr_t VAR_16 = { 0 };
 ib_portid_t VAR_17;
 uint8_t *VAR_18 = FUNC_11(VAR_13);
 ib_mad_addr_t *VAR_19;

 if (!(VAR_19 = FUNC_12(VAR_13)))
  return -1;

 FUNC_7(&VAR_17, 0, sizeof(VAR_17));

 VAR_17.lid = FUNC_9(VAR_19->lid);
 VAR_17.qp = FUNC_8(VAR_19->qpn);
 VAR_17.qkey = FUNC_8(VAR_19->qkey);
 VAR_17.sl = VAR_19->sl;
 if (!VAR_17.qkey && VAR_17.qp == 1)
  VAR_17.qkey = VAR_0;
 VAR_17.grh_present = VAR_19->grh_present;
 if (VAR_17.grh_present)
  FUNC_6(VAR_17.gid, VAR_19->gid, 16);

 VAR_15.mgtclass = FUNC_2(VAR_18, 0, VAR_4);
 VAR_15.method = VAR_3 | VAR_5;
 VAR_15.attr.id = FUNC_2(VAR_18, 0, VAR_1);
 VAR_15.attr.mod = FUNC_2(VAR_18, 0, VAR_2);
 VAR_15.oui = FUNC_2(VAR_18, 0, VAR_9);
 VAR_15.trid = FUNC_3(VAR_18, 0, VAR_7);

 if (VAR_14 > VAR_6)
  VAR_16.flags = VAR_8;

 FUNC_0("responding %d bytes to %s, attr 0x%x mod 0x%x qkey %x",
       VAR_14, FUNC_10(&VAR_17), VAR_15.attr.id, VAR_15.attr.mod, VAR_17.qkey);

 if (FUNC_1(VAR_13, &VAR_15, &VAR_17, &VAR_16, 0) < 0)
  return -1;

 if (VAR_10 > 1)
  FUNC_14(VAR_12, "mad respond pkt\n", VAR_18, VAR_6);

 if (FUNC_13(FUNC_5(VAR_11),
        FUNC_4(VAR_11, VAR_15.mgtclass), VAR_13, VAR_14,
        VAR_15.timeout, 0) < 0) {
  FUNC_0("send failed; %m");
  return -1;
 }

 return 0;
}
