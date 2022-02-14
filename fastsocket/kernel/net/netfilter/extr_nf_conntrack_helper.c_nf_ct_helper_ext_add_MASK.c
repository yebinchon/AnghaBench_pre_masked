
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_help {int expectations; } ;
struct nf_conn {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct nf_conn_help* FUNC_1 (struct nf_conn*,int ,int ) ;
 int FUNC_2 (char*) ;

struct nf_conn_help *FUNC_3(struct nf_conn *VAR_1, gfp_t VAR_2)
{
 struct nf_conn_help *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_3->expectations);
 else
  FUNC_2("failed to add helper extension area");
 return VAR_3;
}
