
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct port_sock {struct inet_port* port; int bind_addr; int input; } ;
struct inet_port_params {int addr_len; int port; int addr; } ;
struct inet_port {int socks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct port_sock*,int ) ;
 struct port_sock* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct inet_port *VAR_5, struct inet_port_params *VAR_6)
{
 uint32_t VAR_7;

 if (VAR_6->addr_len != 4)
  return (VAR_2);

 FUNC_4(&VAR_7, VAR_6->addr, 4);
 struct port_sock *VAR_8 = FUNC_1(1, sizeof(struct port_sock));
 if (VAR_8 == ((void*)0))
  return (VAR_1);

 FUNC_5(&VAR_8->input);

 FUNC_0(&VAR_5->socks, VAR_8, VAR_4);

 struct sockaddr_in *VAR_9 =
     (struct sockaddr_in *)&VAR_8->bind_addr;

 VAR_9->sin_len = sizeof(struct sockaddr_in);
 VAR_9->sin_family = VAR_0;
 VAR_9->sin_addr.s_addr = FUNC_2(VAR_7);
 VAR_9->sin_port = FUNC_3(VAR_6->port);

 VAR_8->port = VAR_5;

 return (VAR_3);
}
