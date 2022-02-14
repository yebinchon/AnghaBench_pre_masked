
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hpet_softc {int mem_res; scalar_t__ legacy_route; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct hpet_softc *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_3->mem_res, VAR_2);
 if (VAR_3->legacy_route)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_0;
 FUNC_1(VAR_3->mem_res, VAR_2, VAR_4);
}
