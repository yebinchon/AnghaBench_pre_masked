
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(struct inode * VAR_1)
{
 return (VAR_1 && FUNC_1(VAR_1->i_mode) &&
  FUNC_0(VAR_1)->type == VAR_0);
}
