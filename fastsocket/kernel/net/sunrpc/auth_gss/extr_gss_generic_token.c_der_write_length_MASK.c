
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(unsigned char **VAR_0, int VAR_1)
{
 if (VAR_1 < (1<<7)) {
  *(*VAR_0)++ = (unsigned char) VAR_1;
 } else {
  *(*VAR_0)++ = (unsigned char) (FUNC_0(VAR_1)+127);






  if (VAR_1 >= (1<<8))
   *(*VAR_0)++ = (unsigned char) ((VAR_1>>8)&0xff);
  *(*VAR_0)++ = (unsigned char) (VAR_1&0xff);
 }
}
