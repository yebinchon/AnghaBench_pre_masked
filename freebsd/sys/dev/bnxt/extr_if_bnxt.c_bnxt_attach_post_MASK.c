
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnxt_softc {TYPE_1__* scctx; int media; } ;
typedef TYPE_2__* if_t ;
typedef int if_ctx_t ;
struct TYPE_5__ {scalar_t__ if_mtu; } ;
struct TYPE_4__ {scalar_t__ isc_max_frame_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int FUNC_2 (struct bnxt_softc*) ;
 int FUNC_3 (struct bnxt_softc*) ;
 TYPE_2__* FUNC_4 (int ) ;
 struct bnxt_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_4)
{
 struct bnxt_softc *VAR_5 = FUNC_5(VAR_4);
 if_t VAR_6 = FUNC_4(VAR_4);
 int VAR_7;

 FUNC_1(VAR_5);


 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  goto failed;


 FUNC_2(VAR_5);
 FUNC_0(VAR_5);
 FUNC_6(VAR_5->media, VAR_3 | VAR_2);

 VAR_5->scctx->isc_max_frame_size = VAR_6->if_mtu + VAR_1 +
     VAR_0;

failed:
 return VAR_7;
}
