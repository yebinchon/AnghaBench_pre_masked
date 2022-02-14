
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sockaddr_u ;
struct TYPE_5__ {unsigned int subnetbits; struct TYPE_5__* next; int addr; } ;
typedef TYPE_1__ KeyAccT ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int) ;

KeyAccT*
FUNC_2(
 KeyAccT * VAR_0,
 const sockaddr_u * VAR_1,
 unsigned int VAR_2
 )
{
 KeyAccT * VAR_3 = FUNC_0(sizeof(KeyAccT));

 FUNC_1(&VAR_3->addr, VAR_1, sizeof(sockaddr_u));
 VAR_3->subnetbits = VAR_2;
 VAR_3->next = VAR_0;

 return VAR_3;
}
