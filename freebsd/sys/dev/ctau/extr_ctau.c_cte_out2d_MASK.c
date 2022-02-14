
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
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char) ;

void FUNC_3 (ct_chan_t *VAR_3, unsigned char VAR_4)
{
 FUNC_2 (FUNC_0(VAR_3->board->port), VAR_2 | VAR_1 |
  (VAR_3->num ? 0 : VAR_0));
 FUNC_2 (FUNC_1(VAR_3->board->port), VAR_4);
}
