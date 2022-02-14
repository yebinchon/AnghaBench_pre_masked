
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_flags; } ;
typedef struct addrinfo sockaddr_u ;
typedef int name ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct addrinfo*,int ) ;
 int FUNC_3 (struct addrinfo) ;
 int VAR_1 ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (char const*,char*,int *) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char const*) ;

int
FUNC_11(
 const char *VAR_2,
 sockaddr_u *VAR_3
 )
{
 struct addrinfo VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;
 u_short VAR_7;
 const char *VAR_8;
 const char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 char VAR_12[80];

 FUNC_1(VAR_2 != ((void*)0));

 if (FUNC_10(VAR_2) >= sizeof(VAR_12)) {
  return 0;
 }

 VAR_9 = ((void*)0);
 if ('[' != VAR_2[0]) {





  VAR_10 = FUNC_8(VAR_2, ':');
  if (((void*)0) == VAR_10)
   VAR_8 = VAR_2;
  else if (((void*)0) != FUNC_8(VAR_10 + 1, ':'))
   VAR_8 = VAR_2;
  else {
   FUNC_9(VAR_12, VAR_2, sizeof(VAR_12));
   VAR_8 = VAR_12;
   VAR_10 = FUNC_8(VAR_8, ':');
   *VAR_10 = '\0';
   VAR_9 = VAR_10 + 1;
  }
 } else {
  VAR_8 = VAR_2 + 1;
  VAR_11 = VAR_12;
  while (*VAR_8 && ']' != *VAR_8)
   *VAR_11++ = *VAR_8++;
  *VAR_11 = 0;
  if (']' == VAR_8[0] && ':' == VAR_8[1] && '\0' != VAR_8[2])
   VAR_9 = &VAR_8[2];
  VAR_8 = VAR_12;
 }
 FUNC_3(VAR_4);
 VAR_4.ai_flags = VAR_1;
 VAR_6 = FUNC_5(VAR_8, "ntp", &VAR_4, &VAR_5);
 if (VAR_6 != 0)
  return 0;
 FUNC_0(VAR_5->ai_addrlen <= sizeof(*VAR_3));
 FUNC_3(*VAR_3);
 FUNC_6(VAR_3, VAR_5->ai_addr, VAR_5->ai_addrlen);
 FUNC_4(VAR_5);
 if (((void*)0) == VAR_9 || 1 != FUNC_7(VAR_9, "%hu", &VAR_7))
  VAR_7 = VAR_0;
 FUNC_2(VAR_3, VAR_7);
 return 1;
}
