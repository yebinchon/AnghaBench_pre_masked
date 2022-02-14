
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef void gcov_iterator ;
typedef int off_t ;


 scalar_t__ FUNC_0 (void*) ;

__attribute__((used)) static void *
FUNC_1(struct seq_file *VAR_0, void *VAR_1, off_t *VAR_2)
{
 struct gcov_iterator *VAR_3 = VAR_1;

 if (FUNC_0(VAR_3))
  return ((void*)0);
 (*VAR_2)++;

 return VAR_3;
}
