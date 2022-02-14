
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int slave; } ;
struct TYPE_7__ {TYPE_1__ dama; } ;
typedef TYPE_2__ ax25_dev ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_2(ax25_dev *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->dama.slave == 0)
  FUNC_1(VAR_0, 5, 1);

 VAR_0->dama.slave = 1;
 FUNC_0(VAR_0);
}
