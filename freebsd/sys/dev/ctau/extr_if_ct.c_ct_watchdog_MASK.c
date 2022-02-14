
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int chan; scalar_t__ running; } ;
typedef TYPE_1__ drv_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6 (drv_t *VAR_0)
{

 FUNC_0 (VAR_0, ("device timeout\n"));
 if (VAR_0->running) {
  FUNC_3 (VAR_0->chan);
  FUNC_5 (VAR_0->chan, 0, 0);
  FUNC_1 (VAR_0->chan, 1);
  FUNC_2 (VAR_0->chan, 1);
  FUNC_4 (VAR_0);
 }
}
