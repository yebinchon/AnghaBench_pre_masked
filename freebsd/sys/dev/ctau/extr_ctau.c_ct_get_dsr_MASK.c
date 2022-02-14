
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num; TYPE_1__* board; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_4__ {int port; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

int FUNC_2 (ct_chan_t *VAR_2)
{
 return (FUNC_1 (FUNC_0(VAR_2->board->port)) &
  (VAR_2->num ? VAR_1 : VAR_0)) != 0;
}
