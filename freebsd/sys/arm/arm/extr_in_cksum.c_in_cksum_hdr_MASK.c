
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union q_util {int dummy; } q_util ;
typedef union l_util {int dummy; } l_util ;
typedef int u_int64_t ;
typedef int u_int ;
struct ip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip const*,int) ;

u_int FUNC_1(const struct ip *VAR_1)
{
 u_int64_t VAR_2 = FUNC_0(VAR_1, sizeof(struct ip));
 union q_util VAR_3;
     union l_util VAR_4;
 VAR_0;
 return (~VAR_2 & 0xffff);
}
