
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpiobus_ivar {int npins; int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int ,int) ;

int
FUNC_1(struct gpiobus_ivar *VAR_4)
{


 VAR_4->pins = FUNC_0(sizeof(uint32_t) * VAR_4->npins, VAR_1,
     VAR_2 | VAR_3);
 if (VAR_4->pins == ((void*)0))
  return (VAR_0);
 return (0);
}
