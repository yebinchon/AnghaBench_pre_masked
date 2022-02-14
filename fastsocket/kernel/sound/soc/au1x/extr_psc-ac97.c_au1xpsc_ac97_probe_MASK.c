
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
struct au1xpsc_audio_data {int dummy; } ;
struct TYPE_8__ {int cfg; struct TYPE_8__* ioarea; int mmio; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned long VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 TYPE_1__* VAR_11 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (scalar_t__,scalar_t__,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_12,
         struct snd_soc_dai *VAR_13)
{
 int VAR_14;
 struct resource *VAR_15;
 unsigned long VAR_16;

 if (VAR_11)
  return -VAR_0;

 VAR_11 =
  FUNC_7(sizeof(struct au1xpsc_audio_data), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 FUNC_8(&VAR_11->lock);

 VAR_15 = FUNC_9(VAR_12, VAR_4, 0);
 if (!VAR_15) {
  VAR_14 = -VAR_1;
  goto out0;
 }

 VAR_14 = -VAR_0;
 VAR_11->ioarea =
  FUNC_11(VAR_15->start, VAR_15->end - VAR_15->start + 1,
     "au1xpsc_ac97");
 if (!VAR_11->ioarea)
  goto out0;

 VAR_11->mmio = FUNC_5(VAR_15->start, 0xffff);
 if (!VAR_11->mmio)
  goto out1;


 VAR_11->cfg = VAR_6 |
         VAR_7 |
         VAR_5;




 VAR_16 = FUNC_2(FUNC_1(VAR_11)) & VAR_9;
 FUNC_4(VAR_8, FUNC_0(VAR_11));
 FUNC_3();
 FUNC_4(0, FUNC_1(VAR_11));
 FUNC_3();
 FUNC_4(VAR_10 | VAR_16, FUNC_1(VAR_11));
 FUNC_3();




 return 0;

out1:
 FUNC_10(VAR_11->ioarea);
 FUNC_6(VAR_11->ioarea);
out0:
 FUNC_6(VAR_11);
 VAR_11 = ((void*)0);
 return VAR_14;
}
