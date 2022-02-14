
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {void* private; } ;
typedef int loff_t ;


 int FUNC_0 (void*,int ) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, loff_t *VAR_1)
{
 if (!FUNC_0(VAR_0->private, *VAR_1))
  return ((void*)0);
 return VAR_0->private;
}
