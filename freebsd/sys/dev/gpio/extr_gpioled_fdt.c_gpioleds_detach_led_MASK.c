
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioled {scalar_t__ pin; int * leddev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct gpioled *VAR_0)
{

 if (VAR_0->leddev != ((void*)0))
  FUNC_1(VAR_0->leddev);

 if (VAR_0->pin)
  FUNC_0(VAR_0->pin);
}
