
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_ivar {scalar_t__ npins; int * pins; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct gpiobus_ivar *VAR_1)
{

 if (VAR_1->pins) {
  FUNC_0(VAR_1->pins, VAR_0);
  VAR_1->pins = ((void*)0);
 }
 VAR_1->npins = 0;
}
