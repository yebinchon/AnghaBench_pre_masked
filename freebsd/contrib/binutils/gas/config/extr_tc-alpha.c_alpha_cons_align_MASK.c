
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

void
FUNC_1 (int VAR_3)
{
  int VAR_4;

  VAR_4 = 0;
  while ((VAR_3 >>= 1) != 0)
    ++VAR_4;

  if (VAR_0 && VAR_1 < VAR_4)
    FUNC_0 (VAR_4, (char *) ((void*)0), VAR_2, 0);
  if (VAR_1 > VAR_4)
    VAR_1 = VAR_4;
  VAR_2 = ((void*)0);
}
