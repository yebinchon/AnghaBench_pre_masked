
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {int dummy; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vmxnet3_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vmxnet3_softc*) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_5, struct ifmediareq * VAR_6)
{
 struct vmxnet3_softc *VAR_7;

 VAR_7 = FUNC_0(VAR_5);

 VAR_6->ifm_status = VAR_2;
 VAR_6->ifm_active = VAR_3;

 if (FUNC_1(VAR_7) != 0) {
  VAR_6->ifm_status |= VAR_0;
  VAR_6->ifm_active |= VAR_1;
 } else
  VAR_6->ifm_active |= VAR_4;
}
