
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct TYPE_2__ {int func; scalar_t__ flag; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct ifnet*,scalar_t__,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct ifnet *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_0[VAR_4].flag; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_0[VAR_4].flag,
         VAR_2, VAR_0[VAR_4].func);
  if (VAR_3)
   return (VAR_3);
 }
 return (0);
}
