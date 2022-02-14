
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_sock {int input; } ;
struct inet_port {int row_status; int socks; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct port_sock* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct port_sock*,int ) ;
 int FUNC_3 (struct port_sock*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct inet_port *VAR_2)
{
 while (!FUNC_0(&VAR_2->socks)) {
  struct port_sock *VAR_3 = FUNC_1(&VAR_2->socks);
  FUNC_2(&VAR_2->socks, VAR_3, VAR_1);
  FUNC_4(&VAR_3->input);
  FUNC_3(VAR_3);
 }
 VAR_2->row_status = VAR_0;
}
