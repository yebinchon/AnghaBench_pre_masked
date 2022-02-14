
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {void** eh_data; void* gp; } ;
typedef void* _Unwind_Word ;


 int FUNC_0 (struct _Unwind_Context*,int,void**,char*,int) ;

void
FUNC_1 (struct _Unwind_Context *VAR_0, int VAR_1, _Unwind_Word VAR_2)
{
  char VAR_3 = 0;

  if (VAR_1 == 1)
    VAR_0->gp = VAR_2;
  else if (VAR_1 >= 15 && VAR_1 <= 18)
    VAR_0->eh_data[VAR_1 - 15] = VAR_2;
  else
    FUNC_0 (VAR_0, VAR_1, &VAR_2, &VAR_3, 1);
}
