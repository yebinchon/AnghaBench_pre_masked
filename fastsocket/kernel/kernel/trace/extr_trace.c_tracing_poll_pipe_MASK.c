
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int dummy; } ;
struct file {struct trace_iterator* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (struct trace_iterator*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static unsigned int
FUNC_2(struct file *VAR_5, poll_table *VAR_6)
{
 struct trace_iterator *VAR_7 = VAR_5->private_data;

 if (VAR_3 & VAR_2) {



  return VAR_0 | VAR_1;
 } else {
  if (!FUNC_1(VAR_7))
   return VAR_0 | VAR_1;
  FUNC_0(VAR_5, &VAR_4, VAR_6);
  if (!FUNC_1(VAR_7))
   return VAR_0 | VAR_1;

  return 0;
 }
}
