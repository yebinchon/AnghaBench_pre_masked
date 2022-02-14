
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int va_window_size; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int) ;

int
FUNC_1(unsigned int VAR_3)
{
  if (VAR_3/VAR_1.va_window_size != VAR_2) {
    FUNC_0(0, VAR_0, VAR_3);
    VAR_2 = VAR_3/VAR_1.va_window_size;
  }
  return (VAR_3%VAR_1.va_window_size);
}
