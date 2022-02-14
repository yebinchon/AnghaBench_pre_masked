
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct bnxt_softc {TYPE_1__* scctx; } ;
typedef int if_ctx_t ;
struct TYPE_2__ {scalar_t__ isc_max_frame_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bnxt_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(if_ctx_t VAR_4, uint32_t VAR_5)
{
 struct bnxt_softc *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 > VAR_0)
  return VAR_1;

 VAR_6->scctx->isc_max_frame_size = VAR_5 + VAR_3 + VAR_2;
 return 0;
}
