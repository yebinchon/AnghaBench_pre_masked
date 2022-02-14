
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_3__ {int length; int * value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int OM_uint32 ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static void
FUNC_1 (struct sockaddr *VAR_2,
    OM_uint32 *VAR_3,
    gss_buffer_desc *VAR_4)
{
    switch (VAR_2->sa_family) {
    case 129 : {
 struct sockaddr_in *VAR_5 = (struct sockaddr_in *)VAR_2;

 VAR_4->length = 4;
 VAR_4->value = &VAR_5->sin_addr;
 *VAR_3 = VAR_0;
 break;
    }
    default :
 FUNC_0 (1, "unknown address family %d", VAR_2->sa_family);

    }
}
