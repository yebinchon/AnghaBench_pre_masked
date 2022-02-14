
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_15__ {int options; int mediaControlChannel; int mediaChannel; } ;
struct TYPE_12__ {scalar_t__ choice; int localAreaAddress; } ;
struct TYPE_13__ {TYPE_4__ networkAddress; } ;
struct TYPE_11__ {scalar_t__ choice; TYPE_7__ h2250LogicalChannelAckParameters; } ;
struct TYPE_9__ {scalar_t__ choice; int h2250LogicalChannelParameters; } ;
struct TYPE_10__ {int options; TYPE_1__ multiplexParameters; } ;
struct TYPE_14__ {int options; TYPE_5__ separateStack; TYPE_3__ forwardMultiplexAckParameters; TYPE_2__ reverseLogicalChannelParameters; } ;
typedef TYPE_6__ OpenLogicalChannelAck ;
typedef TYPE_7__ H2250LogicalChannelAckParameters ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_9, struct nf_conn *VAR_10,
   enum ip_conntrack_info VAR_11,
   unsigned char **VAR_12, int VAR_13,
   OpenLogicalChannelAck *VAR_14)
{
 H2250LogicalChannelAckParameters *VAR_15;
 int VAR_16;

 FUNC_2("nf_ct_h323: OpenLogicalChannelAck\n");

 if ((VAR_14->options &
      VAR_5) &&
     (VAR_14->reverseLogicalChannelParameters.options &
      VAR_6)
     && (VAR_14->reverseLogicalChannelParameters.multiplexParameters.
  choice ==
  VAR_7))
 {
  VAR_16 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
        &VAR_14->
        reverseLogicalChannelParameters.
        multiplexParameters.
        h2250LogicalChannelParameters);
  if (VAR_16 < 0)
   return -1;
 }

 if ((VAR_14->options &
      VAR_3) &&
     (VAR_14->forwardMultiplexAckParameters.choice ==
      VAR_4))
 {
  VAR_15 = &VAR_14->forwardMultiplexAckParameters.
      h2250LogicalChannelAckParameters;
  if (VAR_15->options &
      VAR_0) {

   VAR_16 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
           &VAR_15->mediaChannel);
   if (VAR_16 < 0)
    return -1;
  }

  if (VAR_15->options &
      VAR_1) {

   VAR_16 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
           &VAR_15->mediaControlChannel);
   if (VAR_16 < 0)
    return -1;
  }
 }

 if ((VAR_14->options & VAR_8) &&
  VAR_14->separateStack.networkAddress.choice ==
  VAR_2) {
  VAR_16 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
      &VAR_14->separateStack.networkAddress.
      localAreaAddress);
  if (VAR_16 < 0)
   return -1;
 }

 return 0;
}
