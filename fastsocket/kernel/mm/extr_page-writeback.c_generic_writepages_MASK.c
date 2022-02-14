
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int writepage; } ;


 int VAR_0 ;
 int FUNC_0 (struct address_space*,struct writeback_control*,int ,struct address_space*) ;

int FUNC_1(struct address_space *VAR_1,
         struct writeback_control *VAR_2)
{

 if (!VAR_1->a_ops->writepage)
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_0, VAR_1);
}
