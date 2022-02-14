
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int ;



__attribute__((used)) static unsigned
FUNC_0(unsigned VAR_0, unsigned VAR_1)
{
 u_int VAR_2;

 while (VAR_1 != 0) {
  VAR_2 = VAR_0;
  VAR_0 = VAR_1;
  VAR_1 = (VAR_2 % VAR_1);
 }
 return (VAR_0);
}
