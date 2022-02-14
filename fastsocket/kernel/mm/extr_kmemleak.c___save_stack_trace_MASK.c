
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {int nr_entries; unsigned long* entries; int skip; int max_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct stack_trace*) ;

__attribute__((used)) static int FUNC_1(unsigned long *VAR_1)
{
 struct stack_trace VAR_2;

 VAR_2.max_entries = VAR_0;
 VAR_2.nr_entries = 0;
 VAR_2.entries = VAR_1;
 VAR_2.skip = 2;
 FUNC_0(&VAR_2);

 return VAR_2.nr_entries;
}
