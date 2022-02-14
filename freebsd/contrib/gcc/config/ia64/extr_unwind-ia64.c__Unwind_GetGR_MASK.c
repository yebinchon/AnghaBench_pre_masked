
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int * eh_data; int gp; } ;
typedef int _Unwind_Word ;


 int FUNC_0 (struct _Unwind_Context*,int,int *,char*,int ) ;

_Unwind_Word
FUNC_1 (struct _Unwind_Context *VAR_0, int VAR_1)
{
  _Unwind_Word VAR_2;
  char VAR_3;

  if (VAR_1 == 1)
    return VAR_0->gp;
  else if (VAR_1 >= 15 && VAR_1 <= 18)
    return VAR_0->eh_data[VAR_1 - 15];
  else
    FUNC_0 (VAR_0, VAR_1, &VAR_2, &VAR_3, 0);

  return VAR_2;
}
