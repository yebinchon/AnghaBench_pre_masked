
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ LPCONTEXT ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static ULONG *
FUNC_0 (LPCONTEXT VAR_1, int VAR_2)
{
  static ULONG VAR_3 = 0;
  ULONG *VAR_4;
  if (VAR_0[VAR_2] < 0)
    VAR_4 = &VAR_3;
  else
    VAR_4 = (ULONG *) (((char *) VAR_1) + VAR_0[VAR_2]);
  return VAR_4;
}
