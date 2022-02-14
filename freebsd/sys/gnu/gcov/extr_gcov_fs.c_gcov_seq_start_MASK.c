
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {void* private; } ;
typedef scalar_t__ off_t ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void *
FUNC_2(struct seq_file *VAR_0, off_t *VAR_1)
{
 off_t VAR_2;

 FUNC_1(VAR_0->private);
 for (VAR_2 = 0; VAR_2 < *VAR_1; VAR_2++) {
  if (FUNC_0(VAR_0->private))
   return ((void*)0);
 }
 return VAR_0->private;
}
