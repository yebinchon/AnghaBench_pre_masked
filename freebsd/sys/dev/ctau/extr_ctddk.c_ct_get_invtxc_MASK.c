
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num; TYPE_1__* board; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_4__ {int bcr2; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0 (ct_chan_t *VAR_2)
{
 return (VAR_2->board->bcr2 & (VAR_2->num ? VAR_1 : VAR_0)) != 0;
}
