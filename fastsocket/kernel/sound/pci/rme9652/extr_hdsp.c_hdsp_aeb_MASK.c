
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hdsp *VAR_1)
{
 if (VAR_1->control_register & VAR_0)
  return 1;
 return 0;
}
