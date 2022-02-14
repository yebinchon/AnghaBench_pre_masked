
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rt_msghdr {int rtm_type; } ;
struct rt_addrinfo {int dummy; } ;
struct TYPE_3__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct rt_addrinfo*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct rt_msghdr *VAR_2,
  struct rt_addrinfo *VAR_3)
{
 if (FUNC_0(VAR_3) == 0
     || FUNC_0(VAR_3)->sa_family != VAR_0) {
  FUNC_5("ignore %s without gateway",
     FUNC_4(VAR_2->rtm_type));
  return;
 }

 if (VAR_1)
  FUNC_3(FUNC_1(FUNC_0(VAR_3)));
 FUNC_2(FUNC_1(FUNC_0(VAR_3)));
}
