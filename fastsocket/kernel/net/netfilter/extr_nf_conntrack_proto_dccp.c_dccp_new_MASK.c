
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {size_t* role; size_t state; } ;
struct TYPE_4__ {TYPE_1__ dccp; } ;
struct nf_conn {TYPE_2__ proto; } ;
struct net {int dummy; } ;
struct dccp_net {int dccp_loose; } ;
struct dccp_hdr {size_t dccph_type; } ;
typedef int _dh ;


 int FUNC_0 (int ) ;

 size_t VAR_0 ;

 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (struct net*,int ) ;
 struct dccp_net* FUNC_2 (struct net*) ;
 int*** VAR_6 ;
 int FUNC_3 (struct nf_conn*) ;
 struct net* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (int ,int ,struct sk_buff const*,int *,int *,int *,char const*) ;
 struct dccp_hdr* FUNC_6 (struct sk_buff const*,unsigned int,int,struct dccp_hdr*) ;

__attribute__((used)) static bool FUNC_7(struct nf_conn *VAR_7, const struct sk_buff *VAR_8,
       unsigned int VAR_9)
{
 struct net *VAR_10 = FUNC_4(VAR_7);
 struct dccp_net *VAR_11;
 struct dccp_hdr VAR_12, *VAR_13;
 const char *VAR_14;
 u_int8_t VAR_15;

 VAR_13 = FUNC_6(VAR_8, VAR_9, sizeof(VAR_12), &VAR_12);
 FUNC_0(VAR_13 == ((void*)0));

 VAR_15 = VAR_6[VAR_1][VAR_13->dccph_type][VAR_0];
 switch (VAR_15) {
 default:
  VAR_11 = FUNC_2(VAR_10);
  if (VAR_11->dccp_loose == 0) {
   VAR_14 = "nf_ct_dccp: not picking up existing connection ";
   goto out_invalid;
  }
 case 128:
  break;
 case 129:
  VAR_14 = "nf_ct_dccp: invalid state transition ";
  goto out_invalid;
 }

 VAR_7->proto.dccp.role[VAR_4] = VAR_1;
 VAR_7->proto.dccp.role[VAR_5] = VAR_2;
 VAR_7->proto.dccp.state = VAR_0;
 return 1;

out_invalid:
 if (FUNC_1(VAR_10, VAR_3))
  FUNC_5(FUNC_3(VAR_7), 0, VAR_8, ((void*)0), ((void*)0), ((void*)0), VAR_14);
 return 0;
}
