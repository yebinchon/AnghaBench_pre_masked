
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_5__ {TYPE_1__* board; scalar_t__ num; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_4__ {int gmd1; int gmd0; int port; } ;


 int FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_3 (int ,unsigned char,int) ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

unsigned char FUNC_6 (ct_chan_t *VAR_6, unsigned char VAR_7)
{
 port_t VAR_8 = FUNC_1(VAR_6->board->port);
 port_t VAR_9 = FUNC_0(VAR_6->board->port);
 unsigned char VAR_10 = 0, VAR_11 = VAR_6->num ? VAR_1 : VAR_0;
 int VAR_12;

 FUNC_5 (FUNC_2(VAR_6->board->port), VAR_6->board->gmd1 | VAR_3 | VAR_4);
 FUNC_5 (FUNC_2(VAR_6->board->port), VAR_6->board->gmd1 |
  (VAR_6->num ? VAR_3 : VAR_4));
 FUNC_3 (VAR_8, (VAR_7 << 1) | VAR_5, VAR_6->board->gmd0);
 for (VAR_12=0; VAR_12<8; ++VAR_12) {
  FUNC_5 (VAR_8, VAR_6->board->gmd0 | VAR_2);
  if (FUNC_4 (VAR_9) & VAR_11)
   VAR_10 |= 1 << VAR_12;
  FUNC_5 (VAR_8, VAR_6->board->gmd0);
 }
 FUNC_5 (FUNC_2(VAR_6->board->port), VAR_6->board->gmd1 | VAR_3 | VAR_4);
 return VAR_10;
}
