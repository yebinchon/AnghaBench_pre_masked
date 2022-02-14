
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_Isr ;
typedef int t_Handle ;
typedef int t_Error ;
struct resource {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int flags; int cookie; int arg; int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 int FUNC_2 (int ,struct resource*,unsigned int,int *,int *,int ,int *) ;
 int FUNC_3 (uintptr_t,int ) ;
 int FUNC_4 (struct resource*) ;
 uintptr_t FUNC_5 (struct resource*) ;

t_Error
FUNC_6(uintptr_t VAR_7, t_Isr *VAR_8, t_Handle VAR_9)
{
 device_t VAR_10;
 struct resource *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_11 = (struct resource *)VAR_7;
 VAR_10 = FUNC_4(VAR_11);
 VAR_7 = FUNC_5(VAR_11);


 if (VAR_6[VAR_7].flags & VAR_5) {
  if (VAR_6[VAR_7].handler != ((void*)0))
   return (VAR_0);

  VAR_6[VAR_7].handler = VAR_8;
  VAR_6[VAR_7].arg = VAR_9;

  return (VAR_1);
 }

 VAR_12 = VAR_4 | VAR_3;


 if (FUNC_1(VAR_7))
  VAR_12 |= VAR_2;

 VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_12, ((void*)0), VAR_8, VAR_9,
      &VAR_6[VAR_7].cookie);
 if (VAR_13)
  goto finish;
finish:
 return (VAR_13);
}
