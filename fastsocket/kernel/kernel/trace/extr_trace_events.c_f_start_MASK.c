
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (struct seq_file*,void*,scalar_t__*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2)
{
 loff_t VAR_3 = 0;
 void *VAR_4;


 if (!*VAR_2)
  return (void *)VAR_0;

 VAR_4 = (void *)VAR_0;
 do {
  VAR_4 = FUNC_0(VAR_1, VAR_4, &VAR_3);
 } while (VAR_4 && VAR_3 < *VAR_2);

 return VAR_4;
}
