
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_softc {int dummy; } ;
struct ida_qcb {int hwqcb_busaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ida_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ida_softc *VAR_1, struct ida_qcb *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, VAR_2->hwqcb_busaddr);
}
