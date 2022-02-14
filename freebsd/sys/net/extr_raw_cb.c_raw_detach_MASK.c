
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct rawcb* so_pcb; } ;
struct rawcb {struct socket* rcb_socket; } ;
typedef int caddr_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rawcb*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

void
FUNC_5(struct rawcb *VAR_3)
{
 struct socket *VAR_4 = VAR_3->rcb_socket;

 FUNC_0(VAR_4->so_pcb == VAR_3, ("raw_detach: so_pcb != rp"));

 VAR_4->so_pcb = ((void*)0);
 FUNC_3(&VAR_2);
 FUNC_1(VAR_3, VAR_1);
 FUNC_4(&VAR_2);
 FUNC_2((caddr_t)(VAR_3), VAR_0);
}
