
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {int rta_type; } ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (struct rtattr*) ;
 struct rtattr* FUNC_1 (struct rtattr*,int) ;
 scalar_t__ FUNC_2 (struct rtattr*,int) ;

__le16 FUNC_3(struct rtattr *VAR_0, int VAR_1, int VAR_2)
{
 while(FUNC_2(VAR_0,VAR_1)) {
  if (VAR_0->rta_type == VAR_2)
   return *(__le16*)FUNC_0(VAR_0);
  VAR_0 = FUNC_1(VAR_0, VAR_1);
 }

 return 0;
}
