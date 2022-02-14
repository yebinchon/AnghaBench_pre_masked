
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* sendmsg ) (int,struct msghdr const*,int) ;} ;


 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,struct msghdr const*,int) ;
 int FUNC_2 (int,struct msghdr const*,int) ;

ssize_t FUNC_3(int VAR_2, const struct msghdr *VAR_3, int VAR_4)
{
 int VAR_5;
 return (FUNC_0(VAR_2, &VAR_5) == VAR_0) ?
  FUNC_1(VAR_5, VAR_3, VAR_4) : VAR_1.sendmsg(VAR_5, VAR_3, VAR_4);
}
