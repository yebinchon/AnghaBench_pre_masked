
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ so_pcb; } ;
struct ngpcb {int type; struct socket* ng_socket; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int *,struct ngpcb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ngpcb* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct socket*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_8, int VAR_9)
{
 struct ngpcb *VAR_10;
 int VAR_11;


 VAR_11 = FUNC_4(VAR_8, VAR_4, VAR_3);
 if (VAR_11)
  return (VAR_11);


 VAR_10 = FUNC_1(sizeof(struct ngpcb), VAR_0, VAR_1 | VAR_2);
 VAR_10->type = VAR_9;


 VAR_8->so_pcb = (caddr_t)VAR_10;
 VAR_10->ng_socket = VAR_8;


 FUNC_2(&VAR_5);
 FUNC_0(&VAR_6, VAR_10, VAR_7);
 FUNC_3(&VAR_5);
 return (0);
}
