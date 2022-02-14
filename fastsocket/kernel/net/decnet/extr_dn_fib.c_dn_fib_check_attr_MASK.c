
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmsg {int dummy; } ;
struct rtattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtattr*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtattr*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct rtmsg *VAR_5, struct rtattr **VAR_6)
{
 int VAR_7;

 for(VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++) {
  struct rtattr *VAR_8 = VAR_6[VAR_7-1];
  if (VAR_8) {
   if (FUNC_1(VAR_8) < 4 && FUNC_1(VAR_8) != 2)
    return -VAR_0;
   if (VAR_7 != VAR_3 && VAR_7 != VAR_2 &&
       VAR_7 != VAR_4)
    VAR_6[VAR_7-1] = (struct rtattr *)FUNC_0(VAR_8);
  }
 }

 return 0;
}
