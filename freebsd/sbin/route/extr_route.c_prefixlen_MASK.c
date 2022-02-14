
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_in6 {int sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; int sin_addr; } ;




 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (void*,int,int) ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int
FUNC_3(const char *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_7), VAR_9, VAR_10;
 int VAR_11;
 char *VAR_12;

 VAR_5 |= VAR_3;
 switch (VAR_4) {
 default:
  FUNC_1(VAR_0, "prefixlen not supported in this af");
 }

 if (VAR_8 < 0 || VAR_11 < VAR_8)
  FUNC_1(VAR_1, "%s: invalid prefixlen", VAR_7);

 VAR_9 = VAR_8 >> 3;
 VAR_10 = VAR_8 & 7;
 FUNC_2((void *)VAR_12, 0, VAR_11 / 8);
 if (VAR_9 > 0)
  FUNC_2((void *)VAR_12, 0xff, VAR_9);
 if (VAR_10 > 0)
  *((u_char *)VAR_12 + VAR_9) = (0xff00 >> VAR_10) & 0xff;
 if (VAR_8 == VAR_11)
  return (-1);
 else
  return (VAR_8);
}
