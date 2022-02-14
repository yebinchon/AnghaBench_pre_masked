
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (unsigned VAR_0)
{
  return ((VAR_0 & 0x000000ff) == 0 || (VAR_0 & 0x000000ff) == 0x000000ff)
         && ((VAR_0 & 0x0000ff00) == 0 || (VAR_0 & 0x0000ff00) == 0x0000ff00)
         && ((VAR_0 & 0x00ff0000) == 0 || (VAR_0 & 0x00ff0000) == 0x00ff0000)
         && ((VAR_0 & 0xff000000) == 0 || (VAR_0 & 0xff000000) == 0xff000000);
}
