
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
typedef scalar_t__ mii_contype_t ;
struct TYPE_3__ {scalar_t__ type; char const* name; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;

const char *
FUNC_1(mii_contype_t VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  if (VAR_1 == VAR_0[VAR_2].type)
   return (VAR_0[VAR_2].name);
 }
 return (VAR_0[0].name);
}
