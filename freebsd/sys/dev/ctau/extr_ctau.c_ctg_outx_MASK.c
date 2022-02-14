
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_5__ {TYPE_1__* board; scalar_t__ num; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_4__ {int gmd1; int port; int gmd0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_2 (int ,unsigned char,int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4 (ct_chan_t *VAR_3, unsigned char VAR_4, unsigned char VAR_5)
{
 port_t VAR_6 = FUNC_0(VAR_3->board->port);

 FUNC_3 (FUNC_1(VAR_3->board->port), VAR_3->board->gmd1 | VAR_0 | VAR_1);
 FUNC_3 (FUNC_1(VAR_3->board->port), VAR_3->board->gmd1 |
  (VAR_3->num ? VAR_0 : VAR_1));
 FUNC_2 (VAR_6, (VAR_4 << 1) | VAR_2, VAR_3->board->gmd0);
 FUNC_2 (VAR_6, VAR_5, VAR_3->board->gmd0);
 FUNC_3 (FUNC_1(VAR_3->board->port), VAR_3->board->gmd1 | VAR_0 | VAR_1);
}
