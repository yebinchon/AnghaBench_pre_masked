
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct es_info {int ctrl; int sctrl; void* escfg; int dev; } ;
struct TYPE_2__ {int minspeed; int maxspeed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct es_info*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*,int) ;
 void* FUNC_4 (void*,int) ;
 void* FUNC_5 (void*,int) ;
 int FUNC_6 (struct es_info*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct es_info*,int ,int) ;
 TYPE_1__ VAR_12 ;
 int FUNC_10 (struct es_info*,int ,int,int) ;
 scalar_t__ FUNC_11 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_12(struct es_info *VAR_13)
{
 uint32_t VAR_14;
 int VAR_15, VAR_16;


 if (FUNC_11(FUNC_7(VAR_13->dev),
     FUNC_8(VAR_13->dev), "fixed_rate", &VAR_15) == 0) {
  VAR_14 = VAR_15;
  if (VAR_14) {
   if (VAR_14 < VAR_12.minspeed)
    VAR_14 = VAR_12.minspeed;
   if (VAR_14 > VAR_12.maxspeed)
    VAR_14 = VAR_12.maxspeed;
  }
 } else
  VAR_14 = VAR_12.maxspeed;

 if (FUNC_11(FUNC_7(VAR_13->dev),
     FUNC_8(VAR_13->dev), "single_pcm_mixer", &VAR_15) == 0)
  VAR_16 = (VAR_15 != 0) ? 1 : 0;
 else
  VAR_16 = 1;

 FUNC_1(VAR_13);
 if (FUNC_2(VAR_13->escfg) == 1)
  VAR_16 = 1;

 VAR_13->escfg = FUNC_4(VAR_13->escfg, 1);
 if (VAR_14)
  VAR_13->escfg = FUNC_3(VAR_13->escfg, VAR_14);
 else {
  VAR_13->escfg = FUNC_3(VAR_13->escfg, 0);
  VAR_14 = VAR_9;
 }
 if (VAR_16)
  VAR_13->escfg = FUNC_5(VAR_13->escfg, 1);
 else
  VAR_13->escfg = FUNC_5(VAR_13->escfg, 0);
 VAR_13->ctrl = VAR_4 | VAR_5 | VAR_6 |
     (FUNC_0(VAR_14) << VAR_7);
 VAR_13->ctrl |= 3 << VAR_8;
 FUNC_10(VAR_13, VAR_10, VAR_13->ctrl, 4);

 VAR_13->sctrl = 0;
 FUNC_10(VAR_13, VAR_11, VAR_13->sctrl, 4);


 FUNC_9(VAR_13, VAR_3, 3);




 FUNC_9(VAR_13, VAR_1, 0);

 FUNC_9(VAR_13, VAR_0, 0);

 FUNC_9(VAR_13, VAR_2, 0);
 FUNC_6(VAR_13);

 return (0);
}
