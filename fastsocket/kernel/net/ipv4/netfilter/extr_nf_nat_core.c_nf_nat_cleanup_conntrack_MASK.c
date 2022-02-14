
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conn_nat {int bysource; TYPE_1__* ct; } ;
struct nf_conn {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct nf_conn_nat* FUNC_2 (struct nf_conn*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct nf_conn *VAR_3)
{
 struct nf_conn_nat *VAR_4 = FUNC_2(VAR_3, VAR_1);

 if (VAR_4 == ((void*)0) || VAR_4->ct == ((void*)0))
  return;

 FUNC_0(VAR_4->ct->status & VAR_0);

 FUNC_3(&VAR_2);
 FUNC_1(&VAR_4->bysource);
 FUNC_4(&VAR_2);
}
