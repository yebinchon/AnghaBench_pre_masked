
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {TYPE_2__* io_ctx; } ;
struct ahc_softc {int dummy; } ;
struct TYPE_3__ {int path; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static __inline void
FUNC_1(struct ahc_softc *VAR_0, struct scb *VAR_1)
{
 FUNC_0(VAR_1->io_ctx->ccb_h.path);
}
