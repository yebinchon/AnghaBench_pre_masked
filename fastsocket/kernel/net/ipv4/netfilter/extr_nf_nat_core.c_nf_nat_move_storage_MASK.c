
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_nat {int bysource; struct nf_conn* ct; } ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, void *VAR_3)
{
 struct nf_conn_nat *VAR_4 = VAR_2;
 struct nf_conn_nat *VAR_5 = VAR_3;
 struct nf_conn *VAR_6 = VAR_5->ct;

 if (!VAR_6 || !(VAR_6->status & VAR_0))
  return;

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_5->bysource, &VAR_4->bysource);
 FUNC_2(&VAR_1);
}
