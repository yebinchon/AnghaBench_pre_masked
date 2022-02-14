
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct addrinfo {TYPE_1__* ai_addr; int ai_family; int ai_addrlen; } ;
struct TYPE_4__ {int sa_family; } ;
struct TYPE_5__ {TYPE_1__ sa; } ;
typedef TYPE_2__ sockaddr_u ;


 int FUNC_0 (int ) ;

struct addrinfo
FUNC_1(sockaddr_u* VAR_0) {
 struct addrinfo VAR_1;
 VAR_1.ai_family = VAR_0->sa.sa_family;
 VAR_1.ai_addrlen = FUNC_0(VAR_1.ai_family);
 VAR_1.ai_addr = &VAR_0->sa;
 return VAR_1;
}
