
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cpswp_softc {int swsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct cpswp_softc *VAR_2, int VAR_3)
{
 uint32_t VAR_4;
 VAR_4 = FUNC_0(VAR_2->swsc, VAR_0);
 VAR_4 &= ~VAR_1;
 if (VAR_3)
  VAR_4 |= VAR_1;
 FUNC_1(VAR_2->swsc, VAR_0, VAR_4);
}
