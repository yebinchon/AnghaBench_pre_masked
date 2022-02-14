
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * wcbbase; int rxdesc_read; } ;
struct TYPE_3__ {int * wcbbase; int rxdesc_write; int rxdesc_read; } ;
struct malo_softc {TYPE_2__ malo_hwdma; TYPE_1__ malo_hwspecs; } ;


 int VAR_0 ;
 int FUNC_0 (struct malo_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct malo_softc *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, VAR_1->malo_hwspecs.rxdesc_read,
     VAR_1->malo_hwdma.rxdesc_read);
 FUNC_0(VAR_1, VAR_1->malo_hwspecs.rxdesc_write,
     VAR_1->malo_hwdma.rxdesc_read);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1,
      VAR_1->malo_hwspecs.wcbbase[VAR_2], VAR_1->malo_hwdma.wcbbase[VAR_2]);
 }
}
