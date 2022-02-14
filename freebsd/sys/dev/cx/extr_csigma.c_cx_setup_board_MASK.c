
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fast; } ;
struct TYPE_7__ {int dma; scalar_t__ type; int bcr0; int bcr0b; TYPE_3__* chan; TYPE_1__ opt; scalar_t__ port; int bcr1b; int bcr1; } ;
typedef TYPE_2__ cx_board_t ;
typedef int cr_dat_tst_t ;
struct TYPE_8__ {scalar_t__ type; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (scalar_t__,unsigned char const*,long,int const*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8 (cx_board_t *VAR_10, const unsigned char *VAR_11,
 long VAR_12, const cr_dat_tst_t *VAR_13)
{
 int VAR_14;


 FUNC_6 (VAR_4, (VAR_10->dma & 3) | VAR_5);


 FUNC_6 (FUNC_0(VAR_10->port), 0);
 if (VAR_10->chan[8].type || VAR_10->chan[12].type)
  FUNC_6 (FUNC_0(VAR_10->port+0x10), 0);


 if (VAR_10->type == VAR_3) {

  FUNC_6 (FUNC_2(VAR_10->port), VAR_2);
  if (VAR_10->chan[8].type || VAR_10->chan[12].type)
   FUNC_6 (FUNC_2(VAR_10->port+0x10), VAR_2);
  FUNC_6 (FUNC_2(VAR_10->port), 0);
  if (VAR_10->chan[8].type || VAR_10->chan[12].type)
   FUNC_6 (FUNC_2(VAR_10->port+0x10), 0);

  if (VAR_11 &&
      (! FUNC_3 (VAR_10->port, VAR_11, VAR_12, VAR_13) ||
      ((VAR_10->chan[8].type || VAR_10->chan[12].type) &&
      ! FUNC_3 (VAR_10->port+0x10, VAR_11, VAR_12, VAR_13))))
   return (0);
 }





 FUNC_6 (FUNC_0(VAR_10->port), VAR_10->bcr0);
 if (VAR_10->chan[8].type || VAR_10->chan[12].type)
  FUNC_6 (FUNC_0(VAR_10->port+0x10), VAR_10->bcr0b);


 FUNC_7 (FUNC_1(VAR_10->port), VAR_10->bcr1);
 if (VAR_10->chan[8].type || VAR_10->chan[12].type)
  FUNC_7 (FUNC_1(VAR_10->port+0x10), VAR_10->bcr1b);

 if (VAR_10->type == VAR_3)
  FUNC_6 (FUNC_2(VAR_10->port), VAR_10->opt.fast &
   (VAR_0 | VAR_1));


 for (VAR_14=0; VAR_14<VAR_8; VAR_14+=4)
  if (VAR_10->chan[VAR_14].type != VAR_9)
   FUNC_5 (VAR_10->chan + VAR_14);


 FUNC_6 (VAR_6, (VAR_10->dma & 3) | VAR_7);


 FUNC_6 (VAR_4, VAR_10->dma & 3);


 for (VAR_14=0; VAR_14<VAR_8; ++VAR_14)
  if (VAR_10->chan[VAR_14].type != VAR_9)
   FUNC_4 (VAR_10->chan + VAR_14);
 return (1);
}
