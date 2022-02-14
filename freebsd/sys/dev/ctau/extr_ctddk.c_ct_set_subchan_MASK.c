
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned long s2; } ;
struct TYPE_8__ {TYPE_2__ opt; TYPE_1__* chan; } ;
typedef TYPE_3__ ct_board_t ;
struct TYPE_6__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

int FUNC_1 (ct_board_t *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->chan[0].mode != VAR_0)
  return -1;
 VAR_1->opt.s2 = VAR_2;
 FUNC_0 (VAR_1);
 return 0;
}
