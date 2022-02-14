
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
struct au1xpsc_audio_data {int dummy; } ;
struct TYPE_9__ {int cfg; struct TYPE_9__* ioarea; int mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 TYPE_1__* VAR_10 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (scalar_t__,scalar_t__,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11,
        struct snd_soc_dai *VAR_12)
{
 struct resource *VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 if (VAR_10)
  return -VAR_0;

 VAR_10 =
  FUNC_8(sizeof(struct au1xpsc_audio_data), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_13 = FUNC_9(VAR_11, VAR_4, 0);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  goto out0;
 }

 VAR_15 = -VAR_0;
 VAR_10->ioarea =
  FUNC_11(VAR_13->start, VAR_13->end - VAR_13->start + 1,
     "au1xpsc_i2s");
 if (!VAR_10->ioarea)
  goto out0;

 VAR_10->mmio = FUNC_6(VAR_13->start, 0xffff);
 if (!VAR_10->mmio)
  goto out1;




 VAR_14 = FUNC_3(FUNC_2(VAR_10)) & VAR_8;
 FUNC_5(VAR_5, FUNC_1(VAR_10));
 FUNC_4();
 FUNC_5(VAR_9 | VAR_14, FUNC_2(VAR_10));
 FUNC_5(0, FUNC_0(VAR_10));
 FUNC_4();


 VAR_10->cfg |=
   VAR_6 | VAR_7;






 return 0;

out1:
 FUNC_10(VAR_10->ioarea);
 FUNC_7(VAR_10->ioarea);
out0:
 FUNC_7(VAR_10);
 VAR_10 = ((void*)0);
 return VAR_15;
}
