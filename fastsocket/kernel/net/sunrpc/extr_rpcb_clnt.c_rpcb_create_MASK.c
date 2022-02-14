
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int sa_family; } ;
struct rpc_create_args {int protocol; size_t addrsize; char* servername; int flags; int authflavor; int version; int * program; struct sockaddr* address; int * net; } ;
struct rpc_clnt {int dummy; } ;




 int VAR_0 ;
 struct rpc_clnt* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 int VAR_5 ;
 struct rpc_clnt* FUNC_2 (struct rpc_create_args*) ;
 int VAR_6 ;

__attribute__((used)) static struct rpc_clnt *FUNC_3(char *VAR_7, struct sockaddr *VAR_8,
        size_t VAR_9, int VAR_10, u32 VAR_11)
{
 struct rpc_create_args VAR_12 = {
  .net = &VAR_5,
  .protocol = VAR_10,
  .address = VAR_8,
  .addrsize = VAR_9,
  .servername = VAR_7,
  .program = &VAR_6,
  .version = VAR_11,
  .authflavor = VAR_2,
  .flags = (VAR_4 |
     VAR_3),
 };

 switch (VAR_8->sa_family) {
 case 129:
  ((struct sockaddr_in *)VAR_8)->sin_port = FUNC_1(VAR_1);
  break;
 case 128:
  ((struct sockaddr_in6 *)VAR_8)->sin6_port = FUNC_1(VAR_1);
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 return FUNC_2(&VAR_12);
}
