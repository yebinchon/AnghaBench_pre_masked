
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned char cfg; } ;
struct TYPE_10__ {TYPE_1__ opt; TYPE_4__* chan; } ;
typedef TYPE_2__ ct_board_t ;
struct TYPE_11__ {int mode; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5 (ct_board_t *VAR_3, unsigned char VAR_4)
{
 if (VAR_4 == VAR_3->opt.cfg)
  return;

 if (VAR_4 == VAR_0)
  VAR_3->chan[1].mode = VAR_2;
 else
  VAR_3->chan[1].mode = VAR_1;


 if (VAR_3->opt.cfg == VAR_0) {
  FUNC_0 (VAR_3->chan+1, 0);
  FUNC_2 (VAR_3->chan+1, 0);
  FUNC_1 (VAR_3->chan+1, 0);
  FUNC_3 (VAR_3->chan+1, 0);
 }
 VAR_3->opt.cfg = VAR_4;
 FUNC_4 (VAR_3);
}
