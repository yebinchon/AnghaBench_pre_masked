
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_Error ;
struct resource {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int flags; int cookie; int * arg; int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,struct resource*,int ) ;
 int FUNC_1 (struct resource*) ;
 uintptr_t FUNC_2 (struct resource*) ;

t_Error
FUNC_3(uintptr_t VAR_4)
{
 device_t VAR_5;
 struct resource *VAR_6;

 VAR_6 = (struct resource *)VAR_4;
 VAR_5 = FUNC_1(VAR_6);
 VAR_4 = FUNC_2(VAR_6);


 if (VAR_3[VAR_4].flags & VAR_2) {
  if (VAR_3[VAR_4].handler == ((void*)0))
   return (VAR_0);

  VAR_3[VAR_4].handler = ((void*)0);
  VAR_3[VAR_4].arg = ((void*)0);

  return (VAR_1);
 }

 return (FUNC_0(VAR_5, VAR_6, VAR_3[VAR_4].cookie));
}
