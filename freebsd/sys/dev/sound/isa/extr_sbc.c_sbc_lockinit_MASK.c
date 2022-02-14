
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbc_softc {int dev; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct sbc_softc *VAR_0)
{
 VAR_0->lock = FUNC_1(FUNC_0(VAR_0->dev),
     "snd_sbc softc");
}
