
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_sock {int dummy; } ;
struct inet_port {int row_status; int socks; } ;


 int VAR_0 ;
 int const VAR_1 ;
 struct port_sock* FUNC_0 (int *) ;
 int FUNC_1 (struct port_sock*) ;
 int FUNC_2 (struct port_sock*) ;

__attribute__((used)) static int
FUNC_3(struct inet_port *VAR_2)
{
 struct port_sock *VAR_3 = FUNC_0(&VAR_2->socks);
 FUNC_1(VAR_3);

 const int VAR_4 = FUNC_2(VAR_3);

 if (VAR_4 == VAR_1)
  VAR_2->row_status = VAR_0;
 return (VAR_4);
}
