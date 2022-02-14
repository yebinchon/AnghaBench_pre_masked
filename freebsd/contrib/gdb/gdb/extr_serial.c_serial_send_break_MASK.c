
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* send_break ) (struct serial*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char,int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct serial*) ;

int
FUNC_2 (struct serial *VAR_2)
{
  if (VAR_1 != ((void*)0))
    FUNC_0 (VAR_1, 'w', VAR_0, 0);

  return (VAR_2->ops->send_break (VAR_2));
}
