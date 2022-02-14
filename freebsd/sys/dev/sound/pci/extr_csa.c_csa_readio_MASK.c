
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int32_t ;
struct TYPE_4__ {int io; } ;
typedef TYPE_1__ csa_res ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

u_int32_t
FUNC_4(csa_res *VAR_1, u_long VAR_2)
{
 u_int32_t VAR_3;

 if (VAR_2 < VAR_0)
  return FUNC_0(FUNC_3(VAR_1->io), FUNC_2(VAR_1->io), VAR_2) & 0xffffffff;
 else {
  if (FUNC_1(VAR_1, VAR_2, &VAR_3))
   VAR_3 = 0;
  return (VAR_3);
 }
}
