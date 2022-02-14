
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct servent {long s_port; } ;
struct in_addr {int s_addr; } ;
struct hostent {scalar_t__* h_addr_list; scalar_t__* h_name; } ;
struct addrinfo {scalar_t__ ai_family; int ai_flags; struct addrinfo* ai_next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct addrinfo*) ;
 struct hostent* FUNC_1 (char const*) ;
 struct servent* FUNC_2 (char const*,int *) ;
 int FUNC_3 (int) ;
 long FUNC_4 (long) ;
 scalar_t__ FUNC_5 (char const*,struct in_addr*) ;
 struct addrinfo* FUNC_6 (long,int ,struct addrinfo const*) ;
 long FUNC_7 (char const*,char**,int) ;

int
FUNC_8(const char *VAR_8, const char *VAR_9,
    const struct addrinfo *VAR_10, struct addrinfo **VAR_11)
{
 struct hostent *VAR_12;
 struct servent *VAR_13;
 struct in_addr VAR_14;
 int VAR_15;
 long int VAR_16;
 u_long VAR_17;

 VAR_16 = 0;
 if (VAR_10 && VAR_10->ai_family != VAR_1 &&
     VAR_10->ai_family != VAR_0)
  return (VAR_4);
 if (VAR_9 != ((void*)0)) {
  char *VAR_18;

  VAR_16 = FUNC_7(VAR_9, &VAR_18, 10);
  if (VAR_16 > 0 && VAR_16 <= 65535 && *VAR_18 == '\0')
   VAR_16 = FUNC_4(VAR_16);
  else if ((VAR_13 = FUNC_2(VAR_9, ((void*)0))) != ((void*)0))
   VAR_16 = VAR_13->s_port;
  else
   VAR_16 = 0;
 }

 if (VAR_10 && VAR_10->ai_flags & VAR_3) {
  VAR_17 = FUNC_3(0x00000000);
  if (VAR_8 && FUNC_5(VAR_8, &VAR_14) != 0)
   VAR_17 = VAR_14.s_addr;
  *VAR_11 = FUNC_6(VAR_16, VAR_17, VAR_10);
  if (*VAR_11 == ((void*)0))
   return (VAR_5);
  return (0);
 }

 if (!VAR_8) {
  *VAR_11 = FUNC_6(VAR_16, FUNC_3(0x7f000001), VAR_10);
  if (*VAR_11 == ((void*)0))
   return (VAR_5);
  return (0);
 }

 if (FUNC_5(VAR_8, &VAR_14)) {
  *VAR_11 = FUNC_6(VAR_16, VAR_14.s_addr, VAR_10);
  if (*VAR_11 == ((void*)0))
   return (VAR_5);
  return (0);
 }


 if (VAR_10 && VAR_10->ai_flags & VAR_2)
  return (VAR_7);

 VAR_12 = FUNC_1(VAR_8);
 if (VAR_12 && VAR_12->h_name && VAR_12->h_name[0] && VAR_12->h_addr_list[0]) {
  struct addrinfo *VAR_19, *VAR_20;

  VAR_19 = VAR_20 = *VAR_11 = ((void*)0);
  for (VAR_15 = 0; VAR_12->h_addr_list[VAR_15]; VAR_15++) {
   struct in_addr *VAR_21 = (struct in_addr *)VAR_12->h_addr_list[VAR_15];

   VAR_19 = FUNC_6(VAR_16, VAR_21->s_addr, VAR_10);
   if (VAR_19 == ((void*)0)) {
    if (*VAR_11 != ((void*)0))
     FUNC_0(*VAR_11);
    return (VAR_5);
   }
   if (VAR_20)
    VAR_20->ai_next = VAR_19;
   else
    *VAR_11 = VAR_19;

   VAR_20 = VAR_19;
  }
  return (0);
 }

 return (VAR_6);
}
