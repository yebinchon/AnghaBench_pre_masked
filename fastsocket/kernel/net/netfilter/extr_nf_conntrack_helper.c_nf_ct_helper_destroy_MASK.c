
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_helper {int (* destroy ) (struct nf_conn*) ;} ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int dummy; } ;


 struct nf_conn_help* FUNC_0 (struct nf_conn*) ;
 struct nf_conntrack_helper* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct nf_conn*) ;

void FUNC_5(struct nf_conn *VAR_0)
{
 struct nf_conn_help *VAR_1 = FUNC_0(VAR_0);
 struct nf_conntrack_helper *VAR_2;

 if (VAR_1) {
  FUNC_2();
  VAR_2 = FUNC_1(VAR_1->helper);
  if (VAR_2 && VAR_2->destroy)
   VAR_2->destroy(VAR_0);
  FUNC_3();
 }
}
