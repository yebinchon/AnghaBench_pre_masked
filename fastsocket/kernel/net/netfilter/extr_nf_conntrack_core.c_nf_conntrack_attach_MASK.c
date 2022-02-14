
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int nfctinfo; int * nfct; } ;
struct nf_conn {int ct_general; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_3, struct sk_buff *VAR_4)
{
 struct nf_conn *VAR_5;
 enum ip_conntrack_info VAR_6;


 VAR_5 = FUNC_2(VAR_4, &VAR_6);
 if (FUNC_0(VAR_6) == VAR_0)
  VAR_6 = VAR_2 + VAR_1;
 else
  VAR_6 = VAR_2;


 VAR_3->nfct = &VAR_5->ct_general;
 VAR_3->nfctinfo = VAR_6;
 FUNC_1(VAR_3->nfct);
}
