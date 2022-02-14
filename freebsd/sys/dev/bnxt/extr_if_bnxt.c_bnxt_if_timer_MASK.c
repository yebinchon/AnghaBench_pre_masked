
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct bnxt_softc {scalar_t__ admin_ticks; } ;
typedef int if_ctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct bnxt_softc* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_2, uint16_t VAR_3)
{

 struct bnxt_softc *VAR_4 = FUNC_1(VAR_2);
 uint64_t VAR_5 = VAR_1;


        if (VAR_5 - VAR_4->admin_ticks >= VAR_0) {
  VAR_4->admin_ticks = VAR_5;
  FUNC_0(VAR_2);
 }

 return;
}
