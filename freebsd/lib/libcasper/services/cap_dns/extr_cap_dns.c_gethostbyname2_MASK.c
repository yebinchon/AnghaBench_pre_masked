
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hostent {int dummy; } ;
typedef int nvlist_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hostent* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;

struct hostent *
FUNC_7(cap_channel_t *VAR_3, const char *VAR_4, int VAR_5)
{
 struct hostent *VAR_6;
 nvlist_t *VAR_7;

 VAR_7 = FUNC_4(0);
 FUNC_3(VAR_7, "cmd", "gethostbyname");
 FUNC_2(VAR_7, "family", (uint64_t)VAR_5);
 FUNC_3(VAR_7, "name", VAR_4);
 VAR_7 = FUNC_0(VAR_3, VAR_7);
 if (VAR_7 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }
 if (FUNC_6(VAR_7, "error") != 0) {
  VAR_1 = (int)FUNC_6(VAR_7, "error");
  FUNC_5(VAR_7);
  return (((void*)0));
 }

 VAR_6 = FUNC_1(VAR_7, &VAR_2);
 FUNC_5(VAR_7);
 return (VAR_6);
}
