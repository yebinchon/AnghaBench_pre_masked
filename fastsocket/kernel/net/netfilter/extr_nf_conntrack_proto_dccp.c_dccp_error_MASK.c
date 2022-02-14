
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {scalar_t__ sysctl_checksum; } ;
struct net {TYPE_1__ ct; } ;
struct dccp_hdr {int dccph_doff; int dccph_cscov; scalar_t__ dccph_type; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _dh ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int,unsigned int,unsigned int,int ,int ) ;
 int FUNC_2 (int ,int ,struct sk_buff*,int *,int *,int *,char const*) ;
 struct dccp_hdr* FUNC_3 (struct sk_buff*,unsigned int,int,struct dccp_hdr*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_4, struct sk_buff *VAR_5,
        unsigned int VAR_6, enum ip_conntrack_info *VAR_7,
        u_int8_t VAR_8, unsigned int VAR_9)
{
 struct dccp_hdr VAR_10, *VAR_11;
 unsigned int VAR_12 = VAR_5->len - VAR_6;
 unsigned int VAR_13;
 const char *VAR_14;

 VAR_11 = FUNC_3(VAR_5, VAR_6, sizeof(VAR_10), &VAR_10);
 if (VAR_11 == ((void*)0)) {
  VAR_14 = "nf_ct_dccp: short packet ";
  goto out_invalid;
 }

 if (VAR_11->dccph_doff * 4 < sizeof(struct dccp_hdr) ||
     VAR_11->dccph_doff * 4 > VAR_12) {
  VAR_14 = "nf_ct_dccp: truncated/malformed packet ";
  goto out_invalid;
 }

 VAR_13 = VAR_12;
 if (VAR_11->dccph_cscov) {
  VAR_13 = (VAR_11->dccph_cscov - 1) * 4;
  if (VAR_13 > VAR_12) {
   VAR_14 = "nf_ct_dccp: bad checksum coverage ";
   goto out_invalid;
  }
 }

 if (VAR_4->ct.sysctl_checksum && VAR_9 == VAR_3 &&
     FUNC_1(VAR_5, VAR_9, VAR_6, VAR_13, VAR_1,
    VAR_8)) {
  VAR_14 = "nf_ct_dccp: bad checksum ";
  goto out_invalid;
 }

 if (VAR_11->dccph_type >= VAR_0) {
  VAR_14 = "nf_ct_dccp: reserved packet type ";
  goto out_invalid;
 }

 return VAR_2;

out_invalid:
 if (FUNC_0(VAR_4, VAR_1))
  FUNC_2(VAR_8, 0, VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_14);
 return -VAR_2;
}
