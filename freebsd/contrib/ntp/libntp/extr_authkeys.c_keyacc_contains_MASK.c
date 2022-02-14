
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sockaddr_u ;
struct TYPE_3__ {int subnetbits; int addr; struct TYPE_3__* next; } ;
typedef TYPE_1__ KeyAccT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const*,int ) ;

int
FUNC_1(
 const KeyAccT *VAR_2,
 const sockaddr_u *VAR_3,
 int VAR_4)
{
 if (VAR_2) {
  do {
   if (FUNC_0(&VAR_2->addr, VAR_3,
       VAR_2->subnetbits))
    return VAR_1;
  } while (((void*)0) != (VAR_2 = VAR_2->next));
  return VAR_0;
 } else {
  return !!VAR_4;
 }
}
