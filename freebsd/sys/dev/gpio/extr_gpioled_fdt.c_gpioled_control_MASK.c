
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioled {scalar_t__ pin; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, int VAR_1)
{
 struct gpioled *VAR_2;

 VAR_2 = (struct gpioled *)VAR_0;
 if (VAR_2->pin)
  FUNC_0(VAR_2->pin, VAR_1);
}
