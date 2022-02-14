
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*,int) ;

__attribute__((used)) static unsigned int
FUNC_1 (struct type *VAR_0, int VAR_1)
{
  int VAR_2 = FUNC_0 (VAR_0, VAR_1);

  if (VAR_2 < 0)
    return (unsigned int) VAR_2 & 0xffff;
  else
    return VAR_2;
}
