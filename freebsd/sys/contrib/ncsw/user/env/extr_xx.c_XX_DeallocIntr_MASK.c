
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_Error ;
struct resource {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_1 (struct resource*) ;

t_Error
FUNC_2(uintptr_t VAR_3)
{
 struct resource *VAR_4;
 unsigned int VAR_5;

 VAR_4 = (struct resource *)VAR_3;
 VAR_5 = FUNC_1(VAR_4);

 if ((VAR_2[VAR_5].flags & VAR_1) == 0)
  return (VAR_0);

 VAR_2[VAR_5].flags = 0;
 return (FUNC_0(VAR_3));
}
