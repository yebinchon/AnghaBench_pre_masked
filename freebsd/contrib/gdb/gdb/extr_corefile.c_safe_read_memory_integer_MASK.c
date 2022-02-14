
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct captured_read_memory_integer_arguments {int len; int result; int memaddr; } ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,struct captured_read_memory_integer_arguments*,char*,int ) ;
 int VAR_1 ;

int
FUNC_1 (CORE_ADDR VAR_2, int VAR_3, LONGEST *VAR_4)
{
  int VAR_5;
  struct captured_read_memory_integer_arguments VAR_6;
  VAR_6.memaddr = VAR_2;
  VAR_6.len = VAR_3;

  VAR_5 = FUNC_0 (VAR_1, &VAR_6,
                        "", VAR_0);
  if (VAR_5)
    *VAR_4 = VAR_6.result;

  return VAR_5;
}
