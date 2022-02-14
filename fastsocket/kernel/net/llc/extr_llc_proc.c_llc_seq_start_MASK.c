
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_2, loff_t *VAR_3)
{
 loff_t VAR_4 = *VAR_3;

 FUNC_1(&VAR_1);
 return VAR_4 ? FUNC_0(--VAR_4) : VAR_0;
}
