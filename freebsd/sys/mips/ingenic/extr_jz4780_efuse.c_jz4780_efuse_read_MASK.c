
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_efuse_softc {int dummy; } ;


 int FUNC_0 (struct jz4780_efuse_softc*,int,void*,int) ;

__attribute__((used)) static void
FUNC_1(struct jz4780_efuse_softc *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4;

 while (VAR_3 > 0) {
  VAR_4 = (VAR_3 > 32) ? 32 : VAR_3;
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
  VAR_3 -= VAR_4;
  VAR_2 = (void *)((uintptr_t)VAR_2 + VAR_4);
  VAR_1 += VAR_4;
 }
}
