
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int* role; size_t state; int last_dir; size_t last_pkt; void* handshake_seq; } ;
struct TYPE_4__ {TYPE_1__ dccp; } ;
struct nf_conn {int lock; TYPE_2__ proto; int status; } ;
struct net {int dummy; } ;
struct dccp_net {int * dccp_timeout; } ;
struct dccp_hdr {size_t dccph_type; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef enum ct_dccp_roles { ____Placeholder_ct_dccp_roles } ct_dccp_roles ;
typedef int _dh ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;





 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_11 ;
 void* FUNC_3 (struct dccp_hdr*) ;
 void* FUNC_4 (struct dccp_hdr*) ;
 struct dccp_net* FUNC_5 (struct net*) ;
 size_t*** VAR_12 ;
 int FUNC_6 (int ,struct nf_conn*) ;
 int FUNC_7 (struct nf_conn*,int,struct sk_buff const*) ;
 struct net* FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (struct nf_conn*,int,struct sk_buff const*,int ) ;
 int FUNC_10 (size_t,int ,struct sk_buff const*,int *,int *,int *,char*) ;
 int FUNC_11 (int ,int *) ;
 struct dccp_hdr* FUNC_12 (struct sk_buff const*,unsigned int,int,struct dccp_hdr*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct nf_conn *VAR_13, const struct sk_buff *VAR_14,
         unsigned int VAR_15, enum ip_conntrack_info VAR_16,
         u_int8_t VAR_17, unsigned int VAR_18)
{
 struct net *VAR_19 = FUNC_8(VAR_13);
 struct dccp_net *VAR_20;
 enum ip_conntrack_dir VAR_21 = FUNC_1(VAR_16);
 struct dccp_hdr VAR_22, *VAR_23;
 u_int8_t VAR_24, VAR_25, VAR_26;
 enum ct_dccp_roles VAR_27;

 VAR_23 = FUNC_12(VAR_14, VAR_15, sizeof(VAR_22), &VAR_22);
 FUNC_0(VAR_23 == ((void*)0));
 VAR_24 = VAR_23->dccph_type;

 if (VAR_24 == VAR_5 &&
     !FUNC_15(VAR_10, &VAR_13->status)) {

  FUNC_7(VAR_13, VAR_16, VAR_14);
  return VAR_11;
 }

 FUNC_13(&VAR_13->lock);

 VAR_27 = VAR_13->proto.dccp.role[VAR_21];
 VAR_25 = VAR_13->proto.dccp.state;
 VAR_26 = VAR_12[VAR_27][VAR_24][VAR_25];

 switch (VAR_26) {
 case 129:
  if (VAR_25 == VAR_2 &&
      VAR_27 == VAR_1) {


   VAR_13->proto.dccp.role[VAR_21] = VAR_0;
   VAR_13->proto.dccp.role[!VAR_21] = VAR_1;
  }
  break;
 case 128:
  if (VAR_25 == 129)
   VAR_13->proto.dccp.handshake_seq = FUNC_4(VAR_23);
  break;
 case 130:
  if (VAR_25 == 128 &&
      VAR_24 == VAR_3 &&
      FUNC_3(VAR_23) == VAR_13->proto.dccp.handshake_seq)
   FUNC_11(VAR_9, &VAR_13->status);
  break;
 case 132:





  if (VAR_13->proto.dccp.last_dir == !VAR_21 &&
      VAR_13->proto.dccp.last_pkt == VAR_4 &&
      VAR_24 == VAR_6) {
   VAR_13->proto.dccp.role[!VAR_21] = VAR_0;
   VAR_13->proto.dccp.role[VAR_21] = VAR_1;
   VAR_13->proto.dccp.handshake_seq = FUNC_4(VAR_23);
   VAR_26 = 128;
   break;
  }
  VAR_13->proto.dccp.last_dir = VAR_21;
  VAR_13->proto.dccp.last_pkt = VAR_24;

  FUNC_14(&VAR_13->lock);
  if (FUNC_2(VAR_19, VAR_8))
   FUNC_10(VAR_17, 0, VAR_14, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_dccp: invalid packet ignored ");
  return VAR_11;
 case 131:
  FUNC_14(&VAR_13->lock);
  if (FUNC_2(VAR_19, VAR_8))
   FUNC_10(VAR_17, 0, VAR_14, ((void*)0), ((void*)0), ((void*)0),
          "nf_ct_dccp: invalid state transition ");
  return -VAR_11;
 }

 VAR_13->proto.dccp.last_dir = VAR_21;
 VAR_13->proto.dccp.last_pkt = VAR_24;
 VAR_13->proto.dccp.state = VAR_26;
 FUNC_14(&VAR_13->lock);

 if (VAR_26 != VAR_25)
  FUNC_6(VAR_7, VAR_13);

 VAR_20 = FUNC_5(VAR_19);
 FUNC_9(VAR_13, VAR_16, VAR_14, VAR_20->dccp_timeout[VAR_26]);

 return VAR_11;
}
