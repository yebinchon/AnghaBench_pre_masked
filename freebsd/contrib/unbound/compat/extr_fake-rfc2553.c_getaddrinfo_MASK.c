
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct servent {long s_port; } ;
struct in_addr {int s_addr; } ;
struct hostent {scalar_t__* h_addr_list; scalar_t__* h_name; } ;
struct addrinfo {int ai_flags; struct addrinfo* ai_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct addrinfo*) ;
 struct hostent* FUNC_1 (char const*) ;
 struct servent* FUNC_2 (char const*,int *) ;
 int FUNC_3 (int) ;
 long FUNC_4 (long) ;
 scalar_t__ FUNC_5 (char const*,struct in_addr*) ;
 struct addrinfo* FUNC_6 (long,int ,struct addrinfo const*) ;
 long FUNC_7 (char const*,char**,int) ;

int
FUNC_8(const char *VAR_5, const char *VAR_6,
    const struct addrinfo *VAR_7, struct addrinfo **VAR_8)
{
 struct hostent *VAR_9;
 struct servent *VAR_10;
 struct in_addr VAR_11;
 int VAR_12;
 long int VAR_13;
 u_long VAR_14;

 VAR_13 = 0;
 if (VAR_6 != ((void*)0)) {
  char *VAR_15;

  VAR_13 = FUNC_7(VAR_6, &VAR_15, 10);
  if (VAR_13 > 0 && VAR_13 <= 65535 && *VAR_15 == '\0')
   VAR_13 = FUNC_4(VAR_13);
  else if ((VAR_10 = FUNC_2(VAR_6, ((void*)0))) != ((void*)0))
   VAR_13 = VAR_10->s_port;
  else
   VAR_13 = 0;
 }

 if (VAR_7 && VAR_7->ai_flags & VAR_1) {
  VAR_14 = FUNC_3(0x00000000);
  if (VAR_5 && FUNC_5(VAR_5, &VAR_11) != 0)
   VAR_14 = VAR_11.s_addr;
  *VAR_8 = FUNC_6(VAR_13, VAR_14, VAR_7);
  if (*VAR_8 == ((void*)0))
   return (VAR_2);
  return (0);
 }

 if (!VAR_5) {
  *VAR_8 = FUNC_6(VAR_13, FUNC_3(0x7f000001), VAR_7);
  if (*VAR_8 == ((void*)0))
   return (VAR_2);
  return (0);
 }

 if (FUNC_5(VAR_5, &VAR_11)) {
  *VAR_8 = FUNC_6(VAR_13, VAR_11.s_addr, VAR_7);
  if (*VAR_8 == ((void*)0))
   return (VAR_2);
  return (0);
 }


 if (VAR_7 && VAR_7->ai_flags & VAR_0)
  return (VAR_4);

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9 && VAR_9->h_name && VAR_9->h_name[0] && VAR_9->h_addr_list[0]) {
  struct addrinfo *VAR_16, *VAR_17;

  VAR_16 = VAR_17 = *VAR_8 = ((void*)0);
  for (VAR_12 = 0; VAR_9->h_addr_list[VAR_12]; VAR_12++) {
   struct in_addr *VAR_18 = (struct in_addr *)VAR_9->h_addr_list[VAR_12];

   VAR_16 = FUNC_6(VAR_13, VAR_18->s_addr, VAR_7);
   if (VAR_16 == ((void*)0)) {
    if (*VAR_8 != ((void*)0))
     FUNC_0(*VAR_8);
    return (VAR_2);
   }
   if (VAR_17)
    VAR_17->ai_next = VAR_16;
   else
    *VAR_8 = VAR_16;

   VAR_17 = VAR_16;
  }
  return (0);
 }

 return (VAR_3);
}
