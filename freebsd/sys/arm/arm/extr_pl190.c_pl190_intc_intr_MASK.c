
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct trapframe {int dummy; } ;
struct pl190_intc_softc {int dummy; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 int FUNC_0 (struct pl190_intc_softc*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct pl190_intc_softc*) ;
 int VAR_2 ;
 int FUNC_3 (struct pl190_intc_softc*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (struct pl190_intc_softc*,int,struct trapframe*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_5)
{
 struct pl190_intc_softc *VAR_6;
 u_int VAR_7;
 uint32_t VAR_8, VAR_9;
 struct trapframe *VAR_10;

 VAR_6 = VAR_5;
 VAR_7 = FUNC_1(VAR_3);
 VAR_10 = VAR_4->td_intr_frame;

 FUNC_2(VAR_6);
 VAR_9 = FUNC_0(VAR_6, VAR_1);
 FUNC_3(VAR_6);
 for (VAR_8 = 0 ; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_9 & (1 << VAR_8))
   FUNC_4(VAR_6, VAR_8, VAR_10);
 }

 return (VAR_0);
}
