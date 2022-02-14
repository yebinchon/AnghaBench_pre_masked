
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct addrinfo {struct addrinfo* ai_next; scalar_t__ ai_protocol; scalar_t__ ai_socktype; scalar_t__ ai_family; scalar_t__ ai_flags; } ;
typedef int nvlname ;
typedef int nvlist_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 struct addrinfo* FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,char const*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int * FUNC_10 (int *,char*) ;
 int FUNC_11 (char*,int,char*,unsigned int) ;

int
FUNC_12(cap_channel_t *VAR_1, const char *VAR_2, const char *VAR_3,
    const struct addrinfo *VAR_4, struct addrinfo **VAR_5)
{
 struct addrinfo *VAR_6, *VAR_7, *VAR_8;
 unsigned int VAR_9;
 const nvlist_t *VAR_10;
 char VAR_11[64];
 nvlist_t *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_6(0);
 FUNC_5(VAR_12, "cmd", "getaddrinfo");
 if (VAR_2 != ((void*)0))
  FUNC_5(VAR_12, "hostname", VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_5(VAR_12, "servname", VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_4(VAR_12, "hints.ai_flags",
      (uint64_t)VAR_4->ai_flags);
  FUNC_4(VAR_12, "hints.ai_family",
      (uint64_t)VAR_4->ai_family);
  FUNC_4(VAR_12, "hints.ai_socktype",
      (uint64_t)VAR_4->ai_socktype);
  FUNC_4(VAR_12, "hints.ai_protocol",
      (uint64_t)VAR_4->ai_protocol);
 }
 VAR_12 = FUNC_2(VAR_1, VAR_12);
 if (VAR_12 == ((void*)0))
  return (VAR_0);
 if (FUNC_9(VAR_12, "error") != 0) {
  VAR_13 = (int)FUNC_9(VAR_12, "error");
  FUNC_7(VAR_12);
  return (VAR_13);
 }

 VAR_10 = ((void*)0);
 VAR_6 = VAR_7 = VAR_8 = ((void*)0);
 for (VAR_9 = 0; ; VAR_9++) {
  VAR_14 = FUNC_11(VAR_11, sizeof(VAR_11), "res%u", VAR_9);
  FUNC_1(VAR_14 > 0 && VAR_14 < (int)sizeof(VAR_11));
  if (!FUNC_8(VAR_12, VAR_11))
   break;
  VAR_10 = FUNC_10(VAR_12, VAR_11);
  VAR_8 = FUNC_0(VAR_10);
  if (VAR_8 == ((void*)0))
   break;
  if (VAR_7 != ((void*)0))
   VAR_7->ai_next = VAR_8;
  else if (VAR_6 == ((void*)0))
   VAR_6 = VAR_8;
  VAR_7 = VAR_8;
 }
 FUNC_7(VAR_12);
 if (VAR_8 == ((void*)0) && VAR_10 != ((void*)0)) {
  if (VAR_6 == ((void*)0))
   FUNC_3(VAR_6);
  return (VAR_0);
 }

 *VAR_5 = VAR_6;
 return (0);
}
