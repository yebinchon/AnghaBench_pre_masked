
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct servent {int s_port; } ;
struct addrinfo {int ai_family; int ai_socktype; int ai_flags; int ai_protocol; scalar_t__ ai_addr; } ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct servent* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static int
FUNC_3(struct addrinfo *VAR_4, const char *VAR_5, int VAR_6)
{
 const char *VAR_7;
 struct servent *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 if (VAR_5 == ((void*)0))
  return 0;
 switch (VAR_4->ai_family) {
 case 137:

  return (0);
 case 139:

 case 138:

  break;
 default:
  return 0;
 }

 switch (VAR_4->ai_socktype) {
 case 130:
  return VAR_2;
 case 131:
 case 128:
 case 129:
  VAR_11 = 1;
  break;
 case 136:
  switch (VAR_4->ai_family) {
  case 139:

  case 138:

   VAR_11 = 1;
   break;
  default:
   VAR_11 = 0;
   break;
  }
  break;
 default:
  return VAR_3;
 }

 VAR_10 = FUNC_2(VAR_5, &VAR_9);
 if (VAR_10 == 0) {
  if (!VAR_11)
   return VAR_2;
  if (VAR_9 < 0 || VAR_9 > 65535)
   return VAR_2;
  VAR_9 = FUNC_1(VAR_9);
 } else {
  if (VAR_4->ai_flags & VAR_0)
   return VAR_1;

  switch (VAR_4->ai_protocol) {
  case 133:
   VAR_7 = "udp";
   break;
  case 134:
   VAR_7 = "tcp";
   break;
  case 135:
   VAR_7 = "sctp";
   break;
  case 132:
   VAR_7 = "udplite";
   break;
  default:
   VAR_7 = ((void*)0);
   break;
  }

  if ((VAR_8 = FUNC_0(VAR_5, VAR_7)) == ((void*)0))
   return VAR_2;
  VAR_9 = VAR_8->s_port;
 }

 if (!VAR_6) {
  switch (VAR_4->ai_family) {
  case 139:
   ((struct sockaddr_in *)(void *)
       VAR_4->ai_addr)->sin_port = VAR_9;
   break;






  }
 }

 return 0;
}
