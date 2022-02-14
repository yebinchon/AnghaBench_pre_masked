
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hdb3; } ;
struct TYPE_11__ {int lx; TYPE_1__ gopt; TYPE_3__* board; scalar_t__ num; } ;
typedef TYPE_4__ ct_chan_t ;
struct TYPE_9__ {scalar_t__ cfg; } ;
struct TYPE_10__ {TYPE_2__ opt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_2 (ct_chan_t *VAR_10)
{
 FUNC_1 (VAR_10, VAR_1, VAR_8);

 FUNC_0 (VAR_10, VAR_1);
 VAR_10->lx = VAR_7;
 if (VAR_10->num && VAR_10->board->opt.cfg == VAR_0)
  VAR_10->lx |= VAR_9;
 if (VAR_10->gopt.hdb3)
  VAR_10->lx |= VAR_6;
 FUNC_1 (VAR_10, VAR_1, VAR_10->lx);
 FUNC_1 (VAR_10, VAR_2, VAR_3);
 FUNC_1 (VAR_10, VAR_4, VAR_5);
}
