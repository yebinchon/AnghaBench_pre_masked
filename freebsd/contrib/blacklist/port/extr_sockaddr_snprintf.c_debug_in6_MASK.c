
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* s6_addr; } ;
struct sockaddr_in6 {int sin6_family; int sin6_port; int sin6_flowinfo; int sin6_scope_id; TYPE_1__ sin6_addr; } ;


 int FUNC_0 (struct sockaddr_in6 const*) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, size_t VAR_1, const struct sockaddr_in6 *VAR_2)
{
 const uint8_t *VAR_3 = VAR_2->sin6_addr.s6_addr;

 return FUNC_1(VAR_0, VAR_1, "sin6_len=%u, sin6_family=%u, sin6_port=%u, "
     "sin6_flowinfo=%u, "
     "sin6_addr=%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x:"
     "%02x:%02x:%02x:%02x:%02x:%02x, sin6_scope_id=%u",
     FUNC_0(VAR_2), VAR_2->sin6_family, VAR_2->sin6_port,
     VAR_2->sin6_flowinfo, VAR_3[0x0], VAR_3[0x1], VAR_3[0x2], VAR_3[0x3], VAR_3[0x4], VAR_3[0x5],
     VAR_3[0x6], VAR_3[0x7], VAR_3[0x8], VAR_3[0x9], VAR_3[0xa], VAR_3[0xb], VAR_3[0xc], VAR_3[0xd],
     VAR_3[0xe], VAR_3[0xf], VAR_2->sin6_scope_id);
}
