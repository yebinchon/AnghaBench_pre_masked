
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hpet_softc {int mem_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct hpet_softc *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2->mem_res, VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_2->mem_res, VAR_1, VAR_3);
}
