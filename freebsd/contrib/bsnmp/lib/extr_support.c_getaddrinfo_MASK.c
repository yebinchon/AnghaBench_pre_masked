
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {scalar_t__ sin_family; int sin_len; int sin_port; int sin_addr; } ;
struct servent {int s_port; } ;
struct hostent {scalar_t__ h_addrtype; int h_addr; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int * ai_addr; int * ai_next; int ai_protocol; int ai_socktype; int ai_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct addrinfo*) ;
 struct hostent* FUNC_1 (char const*) ;
 struct servent* FUNC_2 (char const*,int *) ;
 int VAR_2 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;

int
FUNC_5(const char *VAR_3, const char *VAR_4, const struct addrinfo *VAR_5,
    struct addrinfo **VAR_6)
{
 struct hostent *VAR_7;
 struct sockaddr_in *VAR_8;
 struct servent *VAR_9;

 if ((VAR_7 = FUNC_1(VAR_3)) == ((void*)0))
  return (VAR_2);
 if (VAR_7->h_addrtype != VAR_5->ai_family)
  return (VAR_1);
 if (VAR_7->h_addrtype != VAR_0)
  return (VAR_1);

 if ((*VAR_6 = FUNC_3(sizeof(**VAR_6))) == ((void*)0))
  return (VAR_1);

 (*VAR_6)->ai_flags = VAR_5->ai_flags;
 (*VAR_6)->ai_family = VAR_5->ai_family;
 (*VAR_6)->ai_socktype = VAR_5->ai_socktype;
 (*VAR_6)->ai_protocol = VAR_5->ai_protocol;
 (*VAR_6)->ai_next = ((void*)0);

 if (((*VAR_6)->ai_addr = FUNC_3(sizeof(struct sockaddr_in))) == ((void*)0)) {
  FUNC_0(*VAR_6);
  return (VAR_1);
 }
 (*VAR_6)->ai_addrlen = sizeof(struct sockaddr_in);
 VAR_8 = (struct sockaddr_in *)(*VAR_6)->ai_addr;
 VAR_8->sin_family = VAR_5->ai_family;
 VAR_8->sin_len = sizeof(*VAR_8);
 FUNC_4(&VAR_8->sin_addr, VAR_7->h_addr, 4);

 if ((VAR_9 = FUNC_2(VAR_4, ((void*)0))) == ((void*)0)) {
  FUNC_0(*VAR_6);
  return (VAR_1);
 }
 VAR_8->sin_port = VAR_9->s_port;

 return (0);
}
