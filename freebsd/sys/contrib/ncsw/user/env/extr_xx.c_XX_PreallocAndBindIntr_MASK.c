
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Error ;
struct resource {int dummy; } ;
struct TYPE_3__ {unsigned int cpu; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (uintptr_t,int ,TYPE_1__*) ;
 unsigned int FUNC_1 (struct resource*) ;

t_Error
FUNC_2(uintptr_t VAR_4, unsigned int VAR_5)
{
 struct resource *VAR_6;
 unsigned int VAR_7;
 t_Error VAR_8;

 VAR_6 = (struct resource *)VAR_4;
 VAR_7 = FUNC_1(VAR_6);

 VAR_8 = FUNC_0(VAR_4, VAR_1, &VAR_3[VAR_7]);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_3[VAR_7].flags = VAR_2;
 VAR_3[VAR_7].cpu = VAR_5;

 return (VAR_0);
}
