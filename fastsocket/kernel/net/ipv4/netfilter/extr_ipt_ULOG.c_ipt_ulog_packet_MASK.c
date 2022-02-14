
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t data_len; unsigned int hook; char* prefix; scalar_t__ mac_len; char* indev_name; char* outdev_name; int payload; int mac; int mark; int timestamp_usec; int timestamp_sec; } ;
typedef TYPE_1__ ulog_packet_msg_t ;
struct TYPE_10__ {scalar_t__ expires; } ;
struct TYPE_9__ {int qlen; TYPE_4__ timer; struct nlmsghdr* lastnlh; void* skb; } ;
typedef TYPE_2__ ulog_buff_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_11__ {scalar_t__ tv64; } ;
struct sk_buff {size_t len; scalar_t__ mac_header; scalar_t__ network_header; int mark; TYPE_5__ tstamp; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; } ;
struct net_device {scalar_t__ hard_header_len; char const* name; } ;
struct ipt_ulog_info {size_t copy_range; int qthreshold; char* prefix; int nl_group; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct nlmsghdr*) ;
 int VAR_1 ;
 struct nlmsghdr* FUNC_2 (void*,int ,int,int ,int) ;
 size_t FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct timeval FUNC_8 (TYPE_5__) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (struct sk_buff const*,int ,int ,size_t) ;
 int FUNC_13 (struct sk_buff const*) ;
 size_t FUNC_14 (void*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,char const*,int) ;
 int FUNC_18 (TYPE_4__*) ;
 void* FUNC_19 (size_t) ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int FUNC_20 (unsigned int) ;

__attribute__((used)) static void FUNC_21(unsigned int VAR_9,
       const struct sk_buff *VAR_10,
       const struct net_device *VAR_11,
       const struct net_device *VAR_12,
       const struct ipt_ulog_info *VAR_13,
       const char *VAR_14)
{
 ulog_buff_t *VAR_15;
 ulog_packet_msg_t *VAR_16;
 size_t VAR_17, VAR_18;
 struct nlmsghdr *VAR_19;
 struct timeval VAR_20;




 unsigned int VAR_21 = FUNC_7(VAR_13->nl_group) - 1;


 if (VAR_13->copy_range == 0 || VAR_13->copy_range > VAR_10->len)
  VAR_18 = VAR_10->len;
 else
  VAR_18 = VAR_13->copy_range;

 VAR_17 = FUNC_3(sizeof(*VAR_16) + VAR_18);

 VAR_15 = &VAR_7[VAR_21];

 FUNC_15(&VAR_8);

 if (!VAR_15->skb) {
  if (!(VAR_15->skb = FUNC_19(VAR_17)))
   goto alloc_failure;
 } else if (VAR_15->qlen >= VAR_13->qthreshold ||
     VAR_17 > FUNC_14(VAR_15->skb)) {



  FUNC_20(VAR_21);

  if (!(VAR_15->skb = FUNC_19(VAR_17)))
   goto alloc_failure;
 }

 FUNC_10("ipt_ULOG: qlen %d, qthreshold %Zu\n", VAR_15->qlen,
   VAR_13->qthreshold);


 VAR_19 = FUNC_2(VAR_15->skb, 0, VAR_15->qlen, VAR_4,
   sizeof(*VAR_16)+VAR_18);
 VAR_15->qlen++;

 VAR_16 = FUNC_1(VAR_19);


 if (VAR_10->tstamp.tv64 == 0)
  FUNC_5((struct sk_buff *)VAR_10);


 VAR_16->data_len = VAR_18;
 VAR_20 = FUNC_8(VAR_10->tstamp);
 FUNC_11(VAR_20.tv_sec, &VAR_16->timestamp_sec);
 FUNC_11(VAR_20.tv_usec, &VAR_16->timestamp_usec);
 FUNC_11(VAR_10->mark, &VAR_16->mark);
 VAR_16->hook = VAR_9;
 if (VAR_14 != ((void*)0))
  FUNC_17(VAR_16->prefix, VAR_14, sizeof(VAR_16->prefix));
 else if (VAR_13->prefix[0] != '\0')
  FUNC_17(VAR_16->prefix, VAR_13->prefix, sizeof(VAR_16->prefix));
 else
  *(VAR_16->prefix) = '\0';

 if (VAR_11 && VAR_11->hard_header_len > 0
     && VAR_10->mac_header != VAR_10->network_header
     && VAR_11->hard_header_len <= VAR_3) {
  FUNC_9(VAR_16->mac, FUNC_13(VAR_10), VAR_11->hard_header_len);
  VAR_16->mac_len = VAR_11->hard_header_len;
 } else
  VAR_16->mac_len = 0;

 if (VAR_11)
  FUNC_17(VAR_16->indev_name, VAR_11->name, sizeof(VAR_16->indev_name));
 else
  VAR_16->indev_name[0] = '\0';

 if (VAR_12)
  FUNC_17(VAR_16->outdev_name, VAR_12->name, sizeof(VAR_16->outdev_name));
 else
  VAR_16->outdev_name[0] = '\0';


 if (FUNC_12(VAR_10, 0, VAR_16->payload, VAR_18) < 0)
  FUNC_0();


 if (VAR_15->qlen > 1)
  VAR_15->lastnlh->nlmsg_flags |= VAR_2;

 VAR_15->lastnlh = VAR_19;


 if (!FUNC_18(&VAR_15->timer)) {
  VAR_15->timer.expires = VAR_6 + VAR_5 * VAR_0 / 100;
  FUNC_6(&VAR_15->timer);
 }


 if (VAR_15->qlen >= VAR_13->qthreshold) {
  if (VAR_13->qthreshold > 1)
   VAR_19->nlmsg_type = VAR_1;
  FUNC_20(VAR_21);
 }

 FUNC_16(&VAR_8);

 return;

nlmsg_failure:
 FUNC_4("ipt_ULOG: error during NLMSG_PUT\n");

alloc_failure:
 FUNC_4("ipt_ULOG: Error building netlink message\n");

 FUNC_16(&VAR_8);
}
