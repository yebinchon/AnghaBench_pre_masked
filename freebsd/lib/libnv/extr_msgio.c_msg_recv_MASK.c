
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,struct msghdr*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, struct msghdr *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3 >= 0);




 VAR_5 = 0;


 for (;;) {
  FUNC_1(VAR_3, 1);
  if (FUNC_2(VAR_3, VAR_4, VAR_5) == -1) {
   if (VAR_2 == VAR_0)
    continue;
   return (-1);
  }
  break;
 }

 return (0);
}
