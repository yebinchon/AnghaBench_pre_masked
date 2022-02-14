
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct addrinfo {scalar_t__ ai_addr; int ai_flags; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4, u_char *VAR_5)
{
 struct addrinfo VAR_6, *VAR_7;
 int VAR_8;
 struct sockaddr_in *VAR_9;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ai_family = VAR_0;
 VAR_6.ai_socktype = VAR_3;
 VAR_6.ai_protocol = VAR_2;
 VAR_6.ai_flags = VAR_1;
 VAR_8 = FUNC_2(VAR_4, ((void*)0), &VAR_6, &VAR_7);
 if (VAR_8 != 0)
  FUNC_5("%s: %s", VAR_4, FUNC_1(VAR_8));
 if (VAR_7 == ((void*)0))
  FUNC_5("%s: unknown hostname", VAR_4);

 VAR_9 = (struct sockaddr_in *)(void *)VAR_7->ai_addr;
 VAR_9->sin_addr.s_addr = FUNC_4(VAR_9->sin_addr.s_addr);
 VAR_5[0] = VAR_9->sin_addr.s_addr >> 24;
 VAR_5[1] = VAR_9->sin_addr.s_addr >> 16;
 VAR_5[2] = VAR_9->sin_addr.s_addr >> 8;
 VAR_5[3] = VAR_9->sin_addr.s_addr >> 0;

 FUNC_0(VAR_7);
}
