
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct port_sock {int bind_addr; struct inet_port* port; int input; } ;
struct inet_port {char* dns_addr; int row_status; int socks; int dns_port; } ;
struct addrinfo {scalar_t__ ai_family; int ai_flags; scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_socktype; } ;
typedef int hints ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct port_sock*,int ) ;
 struct port_sock* FUNC_2 (int,int) ;
 int FUNC_3 (struct port_sock*) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (struct port_sock*) ;
 int FUNC_8 (struct port_sock*) ;
 int VAR_11 ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,char*,int ) ;
 int FUNC_13 (int ,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_14(struct inet_port *VAR_12)
{
 struct addrinfo VAR_13;
 FUNC_9(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.ai_family = VAR_2;
 VAR_13.ai_socktype = VAR_10;
 VAR_13.ai_flags = VAR_3 | VAR_5 | VAR_4;

 char VAR_14[8];
 FUNC_12(VAR_14, "%hu", FUNC_10(VAR_12->dns_port));

 struct addrinfo *VAR_15;
 int VAR_16 = FUNC_6(VAR_12->dns_addr[0] == '\0'
     ? ((void*)0) : VAR_12->dns_addr,
     VAR_14, &VAR_13, &VAR_15);

 if (VAR_16) {
  FUNC_13(VAR_6, "cannot resolve address '%s': %s",
      VAR_12->dns_addr, FUNC_5(VAR_16));
  return (VAR_8);
 }

 for (struct addrinfo *VAR_17 = VAR_15; VAR_17 != ((void*)0); VAR_17 = VAR_17->ai_next) {
  if (VAR_17->ai_family != VAR_0 && VAR_17->ai_family != VAR_1)
   continue;

  struct port_sock *VAR_18 = FUNC_2(1, sizeof(struct port_sock));
  if (VAR_18 == ((void*)0))
   return (VAR_8);

  FUNC_11(&VAR_18->input);
  VAR_18->port = VAR_12;

  int VAR_19 = VAR_9;

  if (VAR_17->ai_family == VAR_0) {
   *(struct sockaddr_in *)&VAR_18->bind_addr =
       *(struct sockaddr_in *)(void *)VAR_17->ai_addr;
   VAR_19 = FUNC_7(VAR_18);
  } else {
   *(struct sockaddr_in6 *)&VAR_18->bind_addr =
       *(struct sockaddr_in6 *)(void *)VAR_17->ai_addr;
   VAR_19 = FUNC_8(VAR_18);
  }

  if (VAR_19 != VAR_9)
   FUNC_3(VAR_18);
  else
   FUNC_1(&VAR_12->socks, VAR_18, VAR_11);
 }

 if (!FUNC_0(&VAR_12->socks))
  VAR_12->row_status = VAR_7;

 FUNC_4(VAR_15);
 return (VAR_8);
}
