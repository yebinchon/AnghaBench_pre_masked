
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ib_wc {scalar_t__ slid; int wc_flags; TYPE_1__* qp; int dlid_path_bits; int src_qp; } ;
struct ib_port_attr {scalar_t__ lid; } ;
struct TYPE_15__ {scalar_t__ mgmt_class; scalar_t__ method; scalar_t__ attr_id; int status; } ;
struct ib_mad {TYPE_6__ mad_hdr; } ;
struct TYPE_13__ {int interface_id; int subnet_prefix; } ;
struct TYPE_14__ {TYPE_4__ global; } ;
struct TYPE_11__ {int interface_id; int subnet_prefix; } ;
struct TYPE_12__ {TYPE_2__ global; } ;
struct ib_grh {TYPE_5__ dgid; TYPE_3__ sgid; } ;
struct ib_device {int dummy; } ;
struct TYPE_16__ {int dev; } ;
struct TYPE_10__ {scalar_t__ qp_num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,int ,struct ib_mad const*) ;
 int FUNC_4 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_5 (TYPE_7__*,int,int ,struct ib_wc const*,struct ib_grh const*,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ib_device*,struct ib_mad*) ;
 int FUNC_8 (char*,unsigned long long,unsigned long long,...) ;
 int FUNC_9 (struct ib_device*,int ,struct ib_mad const*,scalar_t__) ;
 TYPE_7__* FUNC_10 (struct ib_device*) ;

__attribute__((used)) static int FUNC_11(struct ib_device *VAR_23, int VAR_24, u8 VAR_25,
   const struct ib_wc *VAR_26, const struct ib_grh *VAR_27,
   const struct ib_mad *VAR_28, struct ib_mad *VAR_29)
{
 u16 VAR_30, VAR_31 = 0;
 int VAR_32;
 struct ib_port_attr VAR_33;

 if (VAR_26 && VAR_26->qp->qp_num) {
  FUNC_8("received MAD: slid:%d sqpn:%d "
   "dlid_bits:%d dqpn:%d wc_flags:0x%x, cls %x, mtd %x, atr %x\n",
   VAR_26->slid, VAR_26->src_qp,
   VAR_26->dlid_path_bits,
   VAR_26->qp->qp_num,
   VAR_26->wc_flags,
   VAR_28->mad_hdr.mgmt_class, VAR_28->mad_hdr.method,
   FUNC_0(VAR_28->mad_hdr.attr_id));
  if (VAR_26->wc_flags & VAR_17) {
   FUNC_8("sgid_hi:0x%016llx sgid_lo:0x%016llx\n",
     (unsigned long long)FUNC_1(VAR_27->sgid.global.subnet_prefix),
     (unsigned long long)FUNC_1(VAR_27->sgid.global.interface_id));
   FUNC_8("dgid_hi:0x%016llx dgid_lo:0x%016llx\n",
     (unsigned long long)FUNC_1(VAR_27->dgid.global.subnet_prefix),
     (unsigned long long)FUNC_1(VAR_27->dgid.global.interface_id));
  }
 }

 VAR_30 = VAR_26 ? VAR_26->slid : FUNC_0(VAR_0);

 if (VAR_28->mad_hdr.method == VAR_13 && VAR_30 == 0) {
  FUNC_3(FUNC_10(VAR_23), VAR_25, VAR_28);
  return VAR_6 | VAR_3;
 }

 if (VAR_28->mad_hdr.mgmt_class == VAR_10 ||
     VAR_28->mad_hdr.mgmt_class == VAR_9) {
  if (VAR_28->mad_hdr.method != VAR_11 &&
      VAR_28->mad_hdr.method != VAR_12 &&
      VAR_28->mad_hdr.method != VAR_14)
   return VAR_6;




  if (VAR_28->mad_hdr.attr_id == VAR_16)
   return VAR_6;
 } else if (VAR_28->mad_hdr.mgmt_class == VAR_8 ||
     VAR_28->mad_hdr.mgmt_class == VAR_18 ||
     VAR_28->mad_hdr.mgmt_class == VAR_19 ||
     VAR_28->mad_hdr.mgmt_class == VAR_7) {
  if (VAR_28->mad_hdr.method != VAR_11 &&
      VAR_28->mad_hdr.method != VAR_12)
   return VAR_6;
 } else
  return VAR_6;

 if ((VAR_28->mad_hdr.mgmt_class == VAR_10 ||
      VAR_28->mad_hdr.mgmt_class == VAR_9) &&
     VAR_28->mad_hdr.method == VAR_12 &&
     VAR_28->mad_hdr.attr_id == VAR_15 &&
     !FUNC_4(VAR_23, VAR_25, &VAR_33))
  VAR_31 = VAR_33.lid;

 VAR_32 = FUNC_5(FUNC_10(VAR_23),
      (VAR_24 & VAR_2 ? VAR_21 : 0) |
      (VAR_24 & VAR_1 ? VAR_20 : 0) |
      VAR_22,
      VAR_25, VAR_26, VAR_27, VAR_28, VAR_29);
 if (VAR_32)
  return VAR_4;

 if (!VAR_29->mad_hdr.status) {
  FUNC_9(VAR_23, VAR_25, VAR_28, VAR_31);

  if (!FUNC_6(FUNC_10(VAR_23)->dev))
   FUNC_7(VAR_23, VAR_29);
 }


 if (VAR_28->mad_hdr.mgmt_class == VAR_9)
  VAR_29->mad_hdr.status |= FUNC_2(1 << 15);

 if (VAR_28->mad_hdr.method == VAR_14)

  return VAR_6 | VAR_3;

 return VAR_6 | VAR_5;
}
