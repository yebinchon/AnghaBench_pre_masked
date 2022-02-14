
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int loop; } ;
struct TYPE_10__ {TYPE_2__ md2; } ;
struct TYPE_11__ {scalar_t__ mode; int lx; TYPE_3__ opt; int MD2; TYPE_1__* board; int TXS; int RXS; scalar_t__ num; } ;
typedef TYPE_4__ ct_chan_t ;
struct TYPE_8__ {int bcr1; int port; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short FUNC_1 (int ) ;
 unsigned short FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (unsigned short,int ) ;
 int FUNC_5 (unsigned short,int ,int) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 unsigned char FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_9 (ct_chan_t *VAR_16)
{
 if (VAR_16->mode == VAR_13) {
  unsigned short VAR_17 = VAR_16->num ? FUNC_2 (VAR_16->board->port) :
         FUNC_1 (VAR_16->board->port);


  FUNC_5 (VAR_17, VAR_5, FUNC_4 (VAR_17, VAR_5) | VAR_2);


  FUNC_5 (VAR_17, VAR_6, FUNC_4 (VAR_17, VAR_6) | VAR_7);
  return;
 } else if (VAR_16->mode == VAR_14) {
  VAR_16->lx = VAR_11 | VAR_9;
  FUNC_6 (VAR_16, VAR_8, VAR_16->lx |= VAR_10);
  return;
 } else if (VAR_16->mode == VAR_15 && FUNC_3(VAR_16)) {
  unsigned char VAR_18 = FUNC_7 (VAR_16->RXS) & ~VAR_4;
  unsigned char VAR_19 = FUNC_7 (VAR_16->TXS) & ~VAR_4;
  int VAR_20 = VAR_16->num ? VAR_1 : VAR_0;
  VAR_16->opt.md2.loop = VAR_12;




  FUNC_8 (FUNC_0(VAR_16->board->port), VAR_16->board->bcr1 & ~VAR_20);

  FUNC_8 (VAR_16->RXS, VAR_18 | VAR_3);
  FUNC_8 (VAR_16->TXS, VAR_19 | VAR_3);

  VAR_16->board->bcr1 |= VAR_20;
  FUNC_8 (FUNC_0(VAR_16->board->port), VAR_16->board->bcr1);

  FUNC_8 (VAR_16->MD2, *(unsigned char*)&VAR_16->opt.md2);
  return;
 }
}
