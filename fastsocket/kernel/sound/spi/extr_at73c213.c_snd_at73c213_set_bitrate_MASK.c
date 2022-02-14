
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_at73c213 {unsigned long bitrate; TYPE_3__* spi; TYPE_2__* ssc; TYPE_1__* board; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int regs; int clk; } ;
struct TYPE_4__ {int dac_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,char*,unsigned long,unsigned long) ;
 int FUNC_4 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_at73c213 *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_5->ssc->clk);
 unsigned long VAR_7, VAR_8;
 int VAR_9;
 unsigned long VAR_10, VAR_11;
 int VAR_12;
 VAR_8 = VAR_6 / (VAR_2 * 2 * 16);
 VAR_11 = VAR_6 / (VAR_0 * 2 * 16);
 VAR_10 = VAR_6 / (VAR_1 * 2 * 16);
 VAR_12 = (VAR_10 - VAR_11) / 2;

 if (VAR_12 < 1)
  VAR_12 = 1;


 VAR_8 = (VAR_8 + 1) & ~1UL;

 if ((VAR_6 / (VAR_8 * 2 * 16)) < VAR_1) {
  VAR_8 -= 2;
  if ((VAR_6 / (VAR_8 * 2 * 16)) > VAR_0)
   return -VAR_4;
 }


 do {

  if ((VAR_6 / (VAR_8 * 2 * 16)) < VAR_1)
   return -VAR_4;


  VAR_7 = 8 * (VAR_6 / VAR_8);

  VAR_9 = FUNC_1(VAR_5->board->dac_clk, VAR_7);
  if (VAR_9 < 0)
   return VAR_9;


  if ((VAR_9/256) == (VAR_7/256))
   goto set_rate;

  VAR_8 += 2;
 } while (--VAR_12);


 return -VAR_4;

set_rate:
 VAR_9 = FUNC_2(VAR_5->board->dac_clk, VAR_9);
 if (VAR_9 < 0)
  return VAR_9;


 FUNC_4(VAR_5->ssc->regs, VAR_3, VAR_8/2);


 VAR_5->bitrate = VAR_6 / (VAR_8 * 16 * 2);

 FUNC_3(&VAR_5->spi->dev,
   "at73c213: supported bitrate is %lu (%lu divider)\n",
   VAR_5->bitrate, VAR_8);

 return 0;
}
