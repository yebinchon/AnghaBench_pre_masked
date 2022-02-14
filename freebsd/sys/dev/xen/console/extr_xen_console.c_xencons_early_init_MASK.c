
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; int mtx; } ;
struct TYPE_5__ {int (* early_init ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(void)
{

 FUNC_0(&VAR_1.mtx, "XCONS LOCK", ((void*)0), VAR_0);

 if (FUNC_2() == 0)
  VAR_1.ops = &VAR_2;
 else
  VAR_1.ops = &VAR_3;

 VAR_1.ops->early_init(&VAR_1);
}
