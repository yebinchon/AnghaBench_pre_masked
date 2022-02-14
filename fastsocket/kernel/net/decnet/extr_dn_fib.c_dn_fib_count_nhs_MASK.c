
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {scalar_t__ rtnh_len; } ;
struct rtattr {int dummy; } ;


 struct rtnexthop* FUNC_0 (struct rtattr*) ;
 int FUNC_1 (struct rtattr*) ;
 struct rtnexthop* FUNC_2 (struct rtnexthop*) ;

__attribute__((used)) static int FUNC_3(struct rtattr *VAR_0)
{
 int VAR_1 = 0;
 struct rtnexthop *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = FUNC_1(VAR_0);

 while(VAR_3 >= (int)sizeof(struct rtnexthop)) {
  if ((VAR_3 -= VAR_2->rtnh_len) < 0)
   return 0;
  VAR_1++;
  VAR_2 = FUNC_2(VAR_2);
 }

 return VAR_1;
}
