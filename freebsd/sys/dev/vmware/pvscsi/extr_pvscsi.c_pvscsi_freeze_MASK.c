
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int frozen; int sim; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct pvscsi_softc *VAR_0)
{

 if (!VAR_0->frozen) {
  FUNC_0(VAR_0->sim, 1);
  VAR_0->frozen = 1;
 }
}
