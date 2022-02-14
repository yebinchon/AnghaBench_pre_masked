
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xprt_create {int bc_xprt; int addrlen; TYPE_1__* dstaddr; int srcaddr; int ident; int net; } ;
struct sockaddr_un {char* sun_path; } ;
struct sockaddr_in6 {char sin6_addr; } ;
struct TYPE_4__ {char s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct rpc_xprt {int resvport; int cl_softrtry; int cl_autobind; int cl_discrtry; int cl_chatty; } ;
struct rpc_create_args {char* servername; int flags; TYPE_1__* address; int bc_xprt; int addrsize; int saddress; int protocol; int net; } ;
struct rpc_clnt {int resvport; int cl_softrtry; int cl_autobind; int cl_discrtry; int cl_chatty; } ;
typedef int servername ;
struct TYPE_3__ {int sa_family; } ;





 int VAR_0 ;
 struct rpc_xprt* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rpc_xprt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rpc_xprt* FUNC_2 (struct rpc_create_args*,struct rpc_xprt*) ;
 int FUNC_3 (struct rpc_xprt*) ;
 int FUNC_4 (struct rpc_xprt*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 struct rpc_xprt* FUNC_6 (struct xprt_create*) ;

struct rpc_clnt *FUNC_7(struct rpc_create_args *VAR_7)
{
 struct rpc_xprt *VAR_8;
 struct rpc_clnt *VAR_9;
 struct xprt_create VAR_10 = {
  .net = VAR_7->net,
  .ident = VAR_7->protocol,
  .srcaddr = VAR_7->saddress,
  .dstaddr = VAR_7->address,
  .addrlen = VAR_7->addrsize,
  .bc_xprt = VAR_7->bc_xprt,
 };
 char VAR_11[48];





 if (VAR_7->servername == ((void*)0)) {
  struct sockaddr_un *VAR_12 =
    (struct sockaddr_un *)VAR_7->address;
  struct sockaddr_in *VAR_13 =
    (struct sockaddr_in *)VAR_7->address;
  struct sockaddr_in6 *VAR_14 =
    (struct sockaddr_in6 *)VAR_7->address;

  VAR_11[0] = '\0';
  switch (VAR_7->address->sa_family) {
  case 128:
   FUNC_5(VAR_11, sizeof(VAR_11), "%s",
     VAR_12->sun_path);
   break;
  case 130:
   FUNC_5(VAR_11, sizeof(VAR_11), "%pI4",
     &VAR_13->sin_addr.s_addr);
   break;
  case 129:
   FUNC_5(VAR_11, sizeof(VAR_11), "%pI6",
     &VAR_14->sin6_addr);
   break;
  default:


   return FUNC_0(-VAR_0);
  }
  VAR_7->servername = VAR_11;
 }

 VAR_8 = FUNC_6(&VAR_10);
 if (FUNC_1(VAR_8))
  return (struct rpc_clnt *)VAR_8;







 VAR_8->resvport = 1;
 if (VAR_7->flags & VAR_4)
  VAR_8->resvport = 0;

 VAR_9 = FUNC_2(VAR_7, VAR_8);
 if (FUNC_1(VAR_9))
  return VAR_9;

 if (!(VAR_7->flags & VAR_5)) {
  int VAR_15 = FUNC_3(VAR_9);
  if (VAR_15 != 0) {
   FUNC_4(VAR_9);
   return FUNC_0(VAR_15);
  }
 }

 VAR_9->cl_softrtry = 1;
 if (VAR_7->flags & VAR_3)
  VAR_9->cl_softrtry = 0;

 if (VAR_7->flags & VAR_1)
  VAR_9->cl_autobind = 1;
 if (VAR_7->flags & VAR_2)
  VAR_9->cl_discrtry = 1;
 if (!(VAR_7->flags & VAR_6))
  VAR_9->cl_chatty = 1;

 return VAR_9;
}
