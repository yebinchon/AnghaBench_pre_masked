
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void tracer ;
struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (struct seq_file*,void*,scalar_t__*) ;
 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_2, loff_t *VAR_3)
{
 struct tracer *VAR_4;
 loff_t VAR_5 = 0;

 FUNC_0(&VAR_1);
 for (VAR_4 = VAR_0; VAR_4 && VAR_5 < *VAR_3; VAR_4 = FUNC_1(VAR_2, VAR_4, &VAR_5))
  ;

 return VAR_4;
}
