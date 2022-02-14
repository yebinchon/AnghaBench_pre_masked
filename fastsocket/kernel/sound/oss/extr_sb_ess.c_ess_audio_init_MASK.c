
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct audio_driver {int dummy; } ;
struct TYPE_3__ {int dma16; int dma8; scalar_t__ duplex; } ;
typedef TYPE_1__ sb_devc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct audio_driver VAR_3 ;

struct audio_driver *FUNC_0
  (sb_devc *VAR_4, int *VAR_5, int *VAR_6)
{
 *VAR_5 = VAR_1;
 *VAR_6 |= VAR_0;

 if (VAR_4->duplex) {
  int VAR_7;




  VAR_7 = VAR_4->dma16;
  VAR_4->dma16 = VAR_4->dma8;
  VAR_4->dma8 = VAR_7;

  *VAR_5 |= VAR_2;
 }

 return &VAR_3;
}
