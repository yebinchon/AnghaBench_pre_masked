
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int ) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_2, loff_t *VAR_3)
{
 FUNC_1(&VAR_0);

 if (FUNC_0(&VAR_1) && (!*VAR_3))
  return (void *) 1;

 return FUNC_2(&VAR_1, *VAR_3);
}
