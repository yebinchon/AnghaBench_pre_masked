
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ socklen_t ;
typedef int nvlist_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,struct sockaddr const*,size_t) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (char*,int ,size_t) ;

int
FUNC_10(cap_channel_t *VAR_1, const struct sockaddr *VAR_2, socklen_t VAR_3,
    char *VAR_4, size_t VAR_5, char *VAR_6, size_t VAR_7, int VAR_8)
{
 nvlist_t *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(0);
 FUNC_3(VAR_9, "cmd", "getnameinfo");
 FUNC_2(VAR_9, "hostlen", (uint64_t)VAR_5);
 FUNC_2(VAR_9, "servlen", (uint64_t)VAR_7);
 FUNC_1(VAR_9, "sa", VAR_2, (size_t)VAR_3);
 FUNC_2(VAR_9, "flags", (uint64_t)VAR_8);
 VAR_9 = FUNC_0(VAR_1, VAR_9);
 if (VAR_9 == ((void*)0))
  return (VAR_0);
 if (FUNC_7(VAR_9, "error") != 0) {
  VAR_10 = (int)FUNC_7(VAR_9, "error");
  FUNC_5(VAR_9);
  return (VAR_10);
 }

 if (VAR_4 != ((void*)0) && FUNC_6(VAR_9, "host"))
  FUNC_9(VAR_4, FUNC_8(VAR_9, "host"), VAR_5 + 1);
 if (VAR_6 != ((void*)0) && FUNC_6(VAR_9, "serv"))
  FUNC_9(VAR_6, FUNC_8(VAR_9, "serv"), VAR_7 + 1);
 FUNC_5(VAR_9);
 return (0);
}
