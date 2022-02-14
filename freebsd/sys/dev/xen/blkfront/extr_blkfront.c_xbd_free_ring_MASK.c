
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sring; } ;
struct xbd_softc {int xbd_ring_pages; scalar_t__* xbd_ring_ref; TYPE_1__ xbd_ring; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct xbd_softc *VAR_2)
{
 int VAR_3;

 if (VAR_2->xbd_ring.sring == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->xbd_ring_pages; VAR_3++) {
  if (VAR_2->xbd_ring_ref[VAR_3] != VAR_0) {
   FUNC_1(VAR_2->xbd_ring_ref[VAR_3]);
   VAR_2->xbd_ring_ref[VAR_3] = VAR_0;
  }
 }
 FUNC_0(VAR_2->xbd_ring.sring, VAR_1);
 VAR_2->xbd_ring.sring = ((void*)0);
}
