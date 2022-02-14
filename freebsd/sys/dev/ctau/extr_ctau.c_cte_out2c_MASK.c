
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char) ;

void FUNC_3 (ct_chan_t *VAR_2, unsigned char VAR_3)
{
 FUNC_2 (FUNC_0(VAR_2->board->port), VAR_1 | (VAR_2->num ? 0 : VAR_0));
 FUNC_2 (FUNC_1(VAR_2->board->port), VAR_3);
}
