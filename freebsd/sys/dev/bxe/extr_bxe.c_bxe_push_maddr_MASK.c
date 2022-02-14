
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct ecore_mcast_list_elem {int * mac; } ;


 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;

__attribute__((used)) static u_int
FUNC_1(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
    struct ecore_mcast_list_elem *VAR_3 = VAR_0;

    VAR_3 += VAR_2;
    VAR_3->mac = (uint8_t *)FUNC_0(VAR_1);

    return (1);
}
