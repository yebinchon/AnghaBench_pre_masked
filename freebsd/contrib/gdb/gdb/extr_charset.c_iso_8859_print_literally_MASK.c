
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (void *VAR_1, int VAR_2)
{
  VAR_2 &= 0xff;

  return ((0x20 <= VAR_2 && VAR_2 <= 0x7e)
          || (! VAR_0 && 0xA0 <= VAR_2));
}
