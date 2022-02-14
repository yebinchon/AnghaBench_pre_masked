
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* board; scalar_t__ num; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_4__ {int port; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

unsigned char FUNC_4 (ct_chan_t *VAR_3)
{
 FUNC_3 (FUNC_0(VAR_3->board->port), VAR_2 | VAR_1 |
  (VAR_3->num ? 0 : VAR_0));
 return FUNC_2 (FUNC_1(VAR_3->board->port));
}
