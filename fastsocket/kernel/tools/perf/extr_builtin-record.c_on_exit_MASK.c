
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int on_exit_func_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void** VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(on_exit_func_t VAR_6, void *VAR_7)
{
 if (VAR_4 == VAR_0)
  return -VAR_1;
 else if (VAR_4 == 0)
  FUNC_0(VAR_2);
 VAR_5[VAR_4] = VAR_6;
 VAR_3[VAR_4++] = VAR_7;
 return 0;
}
