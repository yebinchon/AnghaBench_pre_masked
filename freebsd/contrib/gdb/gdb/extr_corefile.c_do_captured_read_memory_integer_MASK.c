
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct captured_read_memory_integer_arguments {int len; int result; int memaddr; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_0)
{
  struct captured_read_memory_integer_arguments *VAR_1 = (struct captured_read_memory_integer_arguments*) VAR_0;
  CORE_ADDR VAR_2 = VAR_1->memaddr;
  int VAR_3 = VAR_1->len;

  VAR_1->result = FUNC_0 (VAR_2, VAR_3);

  return 1;
}
