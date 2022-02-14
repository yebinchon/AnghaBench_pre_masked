
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct ib_mad_addr {int grh_present; int hop_limit; scalar_t__ flow_label; scalar_t__ traffic_class; int gid; } ;
struct TYPE_13__ {int mgtclass; } ;
typedef TYPE_3__ ib_rpc_t ;
struct TYPE_12__ {int u; } ;
struct TYPE_11__ {int u; } ;
struct TYPE_14__ {int type; int flags; int status; TYPE_2__ d2; TYPE_1__ d1; } ;
typedef TYPE_4__ ib_rmpp_hdr_t ;
struct TYPE_16__ {int drslid; } ;
struct TYPE_15__ {int lid; TYPE_7__ drpath; int pkey_idx; int gid; scalar_t__ grh_present; int qp; int qkey; int sl; } ;
typedef TYPE_5__ ib_portid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int *,TYPE_3__*,TYPE_7__*,void*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int * FUNC_3 (void*) ;
 int FUNC_4 (void*,int,int ,int ,int ) ;
 int FUNC_5 (void*,struct ib_mad_addr*) ;
 int FUNC_6 (void*,int ) ;

int FUNC_7(void *VAR_9, ib_rpc_t * VAR_10, ib_portid_t * VAR_11,
    ib_rmpp_hdr_t * VAR_12, void *VAR_13)
{
 uint8_t *VAR_14, *VAR_15;
 int VAR_16 = (VAR_10->mgtclass & 0xff) != VAR_8;
 int VAR_17 = ((VAR_10->mgtclass & 0xff) == VAR_7 ||
        (VAR_10->mgtclass & 0xff) == VAR_8);
 struct ib_mad_addr VAR_18;

 if (!VAR_17)
  FUNC_4(VAR_9, VAR_11->lid, VAR_11->qp, VAR_11->sl,
         VAR_11->qkey);
 else if (VAR_16)
  FUNC_4(VAR_9, VAR_11->lid, VAR_11->qp, 0, 0);
 else if ((VAR_11->drpath.drslid != 0xffff) && (VAR_11->lid > 0))
  FUNC_4(VAR_9, VAR_11->lid, 0, 0, 0);
 else
  FUNC_4(VAR_9, 0xffff, 0, 0, 0);

 if (VAR_11->grh_present && !VAR_17) {
  VAR_18.grh_present = 1;
  FUNC_2(VAR_18.gid, VAR_11->gid, 16);
  VAR_18.hop_limit = 0xff;
  VAR_18.traffic_class = 0;
  VAR_18.flow_label = 0;
  FUNC_5(VAR_9, &VAR_18);
 } else
  FUNC_5(VAR_9, 0);
 FUNC_6(VAR_9, VAR_17 ? 0 : VAR_11->pkey_idx);

 VAR_15 = FUNC_3(VAR_9);
 VAR_14 = FUNC_0(VAR_15, VAR_10, VAR_16 ? 0 : &VAR_11->drpath, VAR_13);
 if (!VAR_14)
  return -1;

 if (!VAR_17 && VAR_12) {
  FUNC_1(VAR_15, 0, VAR_6, 1);
  FUNC_1(VAR_15, 0, VAR_5, VAR_12->type);
  FUNC_1(VAR_15, 0, VAR_3, 0x3f);
  FUNC_1(VAR_15, 0, VAR_2, VAR_12->flags);
  FUNC_1(VAR_15, 0, VAR_4, VAR_12->status);
  FUNC_1(VAR_15, 0, VAR_0, VAR_12->d1.u);
  FUNC_1(VAR_15, 0, VAR_1, VAR_12->d2.u);
 }

 return ((int)(VAR_14 - VAR_15));
}
