
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_2__ {int * ich_func; } ;
struct sc_info {int ac97rate; int flags; int dev; TYPE_1__ intrhook; struct sc_chinfo* ch; } ;
struct sc_chinfo {scalar_t__ regbase; int blkcnt; scalar_t__ blksz; scalar_t__ desc_addr; int buffer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sc_info*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct sc_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (struct sc_info*,scalar_t__,int) ;
 int FUNC_7 (struct sc_info*) ;
 int FUNC_8 (struct sc_info*,scalar_t__,int,int) ;
 int FUNC_9 (int ,struct sc_chinfo*,int) ;
 int FUNC_10 (struct timeval*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(void *VAR_8)
{
 struct sc_info *VAR_9;
 struct sc_chinfo *VAR_10;
 struct timeval VAR_11, VAR_12;
 uint8_t VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;

 VAR_9 = (struct sc_info *)VAR_8;
 FUNC_1(VAR_9);
 VAR_10 = &VAR_9->ch[1];

 if (VAR_9->intrhook.ich_func != ((void*)0)) {
  FUNC_4(&VAR_9->intrhook);
  VAR_9->intrhook.ich_func = ((void*)0);
 }
 FUNC_3(VAR_10->regbase == VAR_1, ("wrong direction"));

 VAR_17 = VAR_10->blkcnt;
 VAR_10->blkcnt = 2;
 VAR_9->flags |= VAR_0;
 FUNC_2(VAR_9);
 FUNC_9(0, VAR_10, FUNC_12(VAR_10->buffer) >> 1);
 FUNC_1(VAR_9);
 VAR_9->flags &= ~VAR_0;
 VAR_13 = FUNC_6(VAR_9, VAR_10->regbase + VAR_3, 1);
 VAR_14 = VAR_13;
 FUNC_8(VAR_9, VAR_10->regbase + VAR_2, (uint32_t)(VAR_10->desc_addr), 4);


 FUNC_10(&VAR_11);
 FUNC_8(VAR_9, VAR_10->regbase + VAR_4, VAR_5, 1);


 do {
  FUNC_10(&VAR_12);
  if (VAR_12 - VAR_11 > 1)
   break;
  VAR_14 = FUNC_6(VAR_9, VAR_10->regbase + VAR_3, 1);
 } while (VAR_14 == VAR_13);


 FUNC_8(VAR_9, VAR_10->regbase + VAR_4, 0, 1);


 FUNC_0(100);
 FUNC_8(VAR_9, VAR_10->regbase + VAR_4, VAR_6, 1);
 VAR_10->blkcnt = VAR_17;


 VAR_15 = ((VAR_12 - VAR_11) * 1000000) + VAR_12 - VAR_11;

 if (VAR_14 == VAR_13) {
  FUNC_5(VAR_9->dev, "ac97 link rate calibration timed out after %d us\n", VAR_15);
  VAR_9->flags |= VAR_0;
  FUNC_2(VAR_9);
  FUNC_7(VAR_9);
  return;
 }


 if (VAR_15 > 0)
  VAR_16 = ((uint64_t)VAR_10->blksz * 250000) / VAR_15;
 else
  VAR_16 = 48000;

 if (VAR_16 < 47500 || VAR_16 > 48500) {
  VAR_9->ac97rate = VAR_16;
 } else {
  VAR_9->ac97rate = 48000;
 }

 if (VAR_7 || VAR_9->ac97rate != 48000) {
  FUNC_5(VAR_9->dev, "measured ac97 link rate at %d Hz", VAR_16);
  if (VAR_9->ac97rate != VAR_16)
   FUNC_11(", will use %d Hz", VAR_9->ac97rate);
   FUNC_11("\n");
 }
 VAR_9->flags |= VAR_0;
 FUNC_2(VAR_9);

 FUNC_7(VAR_9);

 return;
}
