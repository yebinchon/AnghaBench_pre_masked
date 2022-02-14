
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct sk_buff {unsigned int len; TYPE_1__* dev; } ;
struct nfulnl_msg_packet_timestamp {int dummy; } ;
struct nfulnl_msg_packet_hw {int dummy; } ;
struct nfulnl_msg_packet_hdr {int dummy; } ;
struct TYPE_9__ {scalar_t__ expires; } ;
struct nfulnl_instance {int flags; unsigned int qthreshold; int copy_mode; unsigned int copy_range; unsigned int qlen; int flushtimeout; int lock; TYPE_4__ timer; scalar_t__ skb; int nlbufsiz; } ;
struct nfgenmsg {int dummy; } ;
struct TYPE_7__ {int qthreshold; int group; } ;
struct TYPE_8__ {TYPE_2__ ulog; } ;
struct nf_loginfo {scalar_t__ type; TYPE_3__ u; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {unsigned int hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct nfulnl_instance*,struct sk_buff const*,unsigned int,int ,unsigned int,struct net_device const*,struct net_device const*,struct nf_loginfo const*,char const*,unsigned int) ;
 int FUNC_2 (struct nfulnl_instance*) ;
 int FUNC_3 (TYPE_4__*) ;
 struct nf_loginfo VAR_4 ;
 int FUNC_4 (struct nfulnl_instance*) ;
 struct nfulnl_instance* FUNC_5 (int ) ;
 int FUNC_6 (struct nfulnl_instance*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (int ,unsigned int) ;
 unsigned int FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (struct sk_buff const*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (TYPE_4__*) ;

void
FUNC_15(u_int8_t VAR_6,
    unsigned int VAR_7,
    const struct sk_buff *VAR_8,
    const struct net_device *VAR_9,
    const struct net_device *VAR_10,
    const struct nf_loginfo *VAR_11,
    const char *VAR_12)
{
 unsigned int VAR_13, VAR_14;
 struct nfulnl_instance *VAR_15;
 const struct nf_loginfo *VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;

 if (VAR_11 && VAR_11->type == VAR_3)
  VAR_16 = VAR_11;
 else
  VAR_16 = &VAR_4;

 VAR_15 = FUNC_5(VAR_16->u.ulog.group);
 if (!VAR_15)
  return;

 VAR_18 = 0;
 if (VAR_12)
  VAR_18 = FUNC_13(VAR_12) + 1;




 VAR_13 = FUNC_0(sizeof(struct nfgenmsg))
  + FUNC_8(sizeof(struct nfulnl_msg_packet_hdr))
  + FUNC_8(sizeof(u_int32_t))
  + FUNC_8(sizeof(u_int32_t))




  + FUNC_8(sizeof(u_int32_t))
  + FUNC_8(sizeof(u_int32_t))
  + FUNC_8(sizeof(u_int32_t))
  + FUNC_8(VAR_18)
  + FUNC_8(sizeof(struct nfulnl_msg_packet_hw))
  + FUNC_8(sizeof(struct nfulnl_msg_packet_timestamp));

 if (VAR_9 && FUNC_9(VAR_8)) {
  VAR_13 += FUNC_8(VAR_8->dev->hard_header_len)
   + FUNC_8(sizeof(u_int16_t))
   + FUNC_8(sizeof(u_int16_t));
 }

 FUNC_11(&VAR_15->lock);

 if (VAR_15->flags & VAR_1)
  VAR_13 += FUNC_8(sizeof(u_int32_t));
 if (VAR_15->flags & VAR_2)
  VAR_13 += FUNC_8(sizeof(u_int32_t));

 VAR_17 = VAR_15->qthreshold;

 if (VAR_16->u.ulog.qthreshold)
  if (VAR_17 > VAR_16->u.ulog.qthreshold)
   VAR_17 = VAR_16->u.ulog.qthreshold;


 switch (VAR_15->copy_mode) {
 case 130:
 case 129:
  VAR_14 = 0;
  break;

 case 128:
  if (VAR_15->copy_range == 0
      || VAR_15->copy_range > VAR_8->len)
   VAR_14 = VAR_8->len;
  else
   VAR_14 = VAR_15->copy_range;

  VAR_13 += FUNC_8(VAR_14);
  break;

 default:
  goto unlock_and_release;
 }

 if (VAR_15->skb &&
     VAR_13 > FUNC_10(VAR_15->skb) - sizeof(struct nfgenmsg)) {


  FUNC_2(VAR_15);
 }

 if (!VAR_15->skb) {
  VAR_15->skb = FUNC_7(VAR_15->nlbufsiz, VAR_13);
  if (!VAR_15->skb)
   goto alloc_failure;
 }

 VAR_15->qlen++;

 FUNC_1(VAR_15, VAR_8, VAR_14, VAR_6,
    VAR_7, VAR_9, VAR_10, VAR_16, VAR_12, VAR_18);

 if (VAR_15->qlen >= VAR_17)
  FUNC_2(VAR_15);


 else if (!FUNC_14(&VAR_15->timer)) {
  FUNC_4(VAR_15);
  VAR_15->timer.expires = VAR_5 + (VAR_15->flushtimeout*VAR_0/100);
  FUNC_3(&VAR_15->timer);
 }

unlock_and_release:
 FUNC_12(&VAR_15->lock);
 FUNC_6(VAR_15);
 return;

alloc_failure:

 goto unlock_and_release;
}
