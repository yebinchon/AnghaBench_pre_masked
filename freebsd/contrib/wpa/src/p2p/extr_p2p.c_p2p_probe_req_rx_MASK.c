
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct p2p_data {scalar_t__ state; TYPE_4__* invite_peer; TYPE_2__* go_neg_peer; } ;
typedef enum p2p_probe_req_status { ____Placeholder_p2p_probe_req_status } p2p_probe_req_status ;
struct TYPE_7__ {int p2p_device_addr; } ;
struct TYPE_8__ {int flags; TYPE_3__ info; } ;
struct TYPE_5__ {int p2p_device_addr; } ;
struct TYPE_6__ {int flags; TYPE_1__ info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct p2p_data*,int *) ;
 int FUNC_1 (int ,int ,int ,struct p2p_data*,int *) ;
 scalar_t__ FUNC_2 (int const*,int ,int ) ;
 int FUNC_3 (struct p2p_data*,int const*,int const*,size_t) ;
 int FUNC_4 (struct p2p_data*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct p2p_data*,int const*,int const*,int const*,int const*,size_t,unsigned int) ;

enum p2p_probe_req_status
FUNC_6(struct p2p_data *VAR_11, const u8 *VAR_12, const u8 *VAR_13,
   const u8 *VAR_14, const u8 *VAR_15, size_t VAR_16,
   unsigned int VAR_17, int VAR_18)
{
 enum p2p_probe_req_status VAR_19;

 FUNC_3(VAR_11, VAR_12, VAR_15, VAR_16);

 if (VAR_18) {
  FUNC_4(VAR_11,
   "Probe Response is offloaded, do not reply Probe Request");
  return VAR_8;
 }

 VAR_19 = FUNC_5(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
 if (VAR_19 != VAR_8 && VAR_19 != VAR_7)
  return VAR_19;
 if ((VAR_11->state == VAR_1 || VAR_11->state == VAR_2) &&
     VAR_11->go_neg_peer &&
     FUNC_2(VAR_12, VAR_11->go_neg_peer->info.p2p_device_addr, VAR_0)
     == 0 &&
     !(VAR_11->go_neg_peer->flags & VAR_3)) {

  FUNC_4(VAR_11, "Found GO Negotiation peer - try to start GO negotiation from timeout");
  FUNC_0(VAR_9, VAR_11, ((void*)0));
  FUNC_1(0, 0, VAR_9, VAR_11, ((void*)0));
  return VAR_19;
 }

 if ((VAR_11->state == VAR_5 || VAR_11->state == VAR_6) &&
     VAR_11->invite_peer &&
     (VAR_11->invite_peer->flags & VAR_4) &&
     FUNC_2(VAR_12, VAR_11->invite_peer->info.p2p_device_addr, VAR_0)
     == 0) {

  FUNC_4(VAR_11, "Found Invite peer - try to start Invite from timeout");
  FUNC_0(VAR_10, VAR_11, ((void*)0));
  FUNC_1(0, 0, VAR_10, VAR_11, ((void*)0));
  return VAR_19;
 }

 return VAR_19;
}
