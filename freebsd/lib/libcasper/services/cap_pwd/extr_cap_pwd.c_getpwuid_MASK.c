
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int dummy; } ;
typedef int cap_channel_t ;


 struct passwd* FUNC_0 (int *,char*,int *,int ) ;

struct passwd *
FUNC_1(cap_channel_t *VAR_0, uid_t VAR_1)
{

 return (FUNC_0(VAR_0, "getpwuid", ((void*)0), VAR_1));
}
