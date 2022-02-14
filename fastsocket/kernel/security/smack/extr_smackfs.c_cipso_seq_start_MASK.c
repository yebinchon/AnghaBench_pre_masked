
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {void* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_2, loff_t *VAR_3)
{
 if (*VAR_3 == VAR_0)
  return ((void*)0);
 if (FUNC_0(&VAR_1))
  return ((void*)0);

 return VAR_1.next;
}
