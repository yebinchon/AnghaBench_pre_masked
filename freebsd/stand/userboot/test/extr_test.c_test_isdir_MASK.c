
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_file {int tf_isdir; } ;



int
FUNC_0(void *VAR_0, void *VAR_1)
{
 struct test_file *VAR_2 = VAR_1;

 return (VAR_2->tf_isdir);
}
