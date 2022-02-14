
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hostent {int dummy; } ;
typedef scalar_t__ socklen_t ;
typedef int nvlist_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hostent* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,void const*,size_t) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,char*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*) ;

struct hostent *
FUNC_8(cap_channel_t *VAR_3, const void *VAR_4, socklen_t VAR_5,
    int VAR_6)
{
 struct hostent *VAR_7;
 nvlist_t *VAR_8;

 VAR_8 = FUNC_5(0);
 FUNC_4(VAR_8, "cmd", "gethostbyaddr");
 FUNC_2(VAR_8, "addr", VAR_4, (size_t)VAR_5);
 FUNC_3(VAR_8, "family", (uint64_t)VAR_6);
 VAR_8 = FUNC_0(VAR_3, VAR_8);
 if (VAR_8 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }
 if (FUNC_7(VAR_8, "error") != 0) {
  VAR_1 = (int)FUNC_7(VAR_8, "error");
  FUNC_6(VAR_8);
  return (((void*)0));
 }
 VAR_7 = FUNC_1(VAR_8, &VAR_2);
 FUNC_6(VAR_8);
 return (VAR_7);
}
