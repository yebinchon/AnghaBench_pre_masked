
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_sock {int dummy; } ;
struct inet_port {int row_status; int socks; } ;


 int VAR_0 ;
 int const VAR_1 ;
 struct port_sock* FUNC_0 (int *) ;
 int FUNC_1 (struct port_sock*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct port_sock*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct inet_port *VAR_3)
{
 struct port_sock *VAR_4 = FUNC_0(&VAR_3->socks);
 FUNC_2(VAR_4);
 FUNC_2(!FUNC_1(VAR_4, VAR_2));

 const int VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 == VAR_1)
  VAR_3->row_status = VAR_0;

 return (VAR_5);
}
