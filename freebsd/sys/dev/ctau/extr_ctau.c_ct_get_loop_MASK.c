
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int loop; } ;
struct TYPE_7__ {TYPE_1__ md2; } ;
struct TYPE_9__ {scalar_t__ mode; int lx; TYPE_2__ opt; TYPE_3__* board; scalar_t__ num; } ;
typedef TYPE_4__ ct_chan_t ;
struct TYPE_8__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (int ) ;
 unsigned short FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (unsigned short,int ) ;

int FUNC_3 (ct_chan_t *VAR_6)
{
 if (VAR_6->mode == VAR_4) {
  unsigned short VAR_7 = VAR_6->num ? FUNC_1 (VAR_6->board->port) :
         FUNC_0 (VAR_6->board->port);

  return FUNC_2 (VAR_7, VAR_1) & VAR_0;
 }
 if (VAR_6->mode == VAR_5)
  return VAR_6->lx & VAR_2;


 return (VAR_6->opt.md2.loop & VAR_3) != 0;
}
