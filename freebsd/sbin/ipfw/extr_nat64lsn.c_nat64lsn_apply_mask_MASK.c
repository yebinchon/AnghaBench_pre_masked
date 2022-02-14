
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct in_addr {int s_addr; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct in6_addr*,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, void *VAR_3, uint16_t VAR_4)
{
 struct in6_addr VAR_5, *VAR_6;
 struct in_addr VAR_7, *VAR_8;

 if (VAR_2 == VAR_0) {
  VAR_8 = (struct in_addr *)VAR_3;
  VAR_7 = FUNC_1(~((1 << (32 - VAR_4)) - 1));
  VAR_8->s_addr &= VAR_7;
 } else if (VAR_2 == VAR_1) {
  VAR_6 = (struct in6_addr *)VAR_3;
  FUNC_2(&VAR_5, VAR_4);
  FUNC_0(VAR_6, &VAR_5);
 }
}
