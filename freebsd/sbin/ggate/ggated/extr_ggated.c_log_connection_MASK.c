
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct sockaddr *VAR_1)
{
 in_addr_t VAR_2;

 VAR_2 = FUNC_1(((struct sockaddr_in *)(void *)VAR_1)->sin_addr.s_addr);
 FUNC_0(VAR_0, "Connection from: %s.", FUNC_2(VAR_2));
}
