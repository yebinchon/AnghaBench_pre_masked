
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {unsigned int invite_cseq; } ;
struct TYPE_3__ {TYPE_2__ ct_sip_info; } ;
struct nf_conn_help {TYPE_1__ help; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int FUNC_0 (struct nf_conn*,int) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;
 struct nf_conn_help* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct sk_buff*,char const**,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1,
      const char **VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5)
{
 enum ip_conntrack_info VAR_6;
 struct nf_conn *VAR_7 = FUNC_1(VAR_1, &VAR_6);
 struct nf_conn_help *VAR_8 = FUNC_2(VAR_7);

 if ((VAR_5 >= 100 && VAR_5 <= 199) ||
     (VAR_5 >= 200 && VAR_5 <= 299))
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 else if (VAR_8->help.ct_sip_info.invite_cseq == VAR_4)
  FUNC_0(VAR_7, 1);
 return VAR_0;
}
