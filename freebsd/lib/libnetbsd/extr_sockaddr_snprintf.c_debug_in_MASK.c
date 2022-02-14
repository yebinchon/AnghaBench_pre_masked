
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; int sin_port; TYPE_1__ sin_addr; } ;


 int FUNC_0 (struct sockaddr_in const*) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, size_t VAR_1, const struct sockaddr_in *VAR_2)
{
 return FUNC_1(VAR_0, VAR_1, "sin_len=%u, sin_family=%u, sin_port=%u, "
     "sin_addr.s_addr=%08x",
     FUNC_0(VAR_2), VAR_2->sin_family, VAR_2->sin_port,
     VAR_2->sin_addr.s_addr);
}
