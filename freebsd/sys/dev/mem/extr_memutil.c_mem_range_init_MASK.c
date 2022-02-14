
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mr_op; } ;
struct TYPE_4__ {int (* init ) (TYPE_2__*) ;} ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(void)
{

 if (VAR_0.mr_op == ((void*)0))
  return;
 FUNC_0(&VAR_1, "memrange");
 VAR_0.mr_op->init(&VAR_0);
}
