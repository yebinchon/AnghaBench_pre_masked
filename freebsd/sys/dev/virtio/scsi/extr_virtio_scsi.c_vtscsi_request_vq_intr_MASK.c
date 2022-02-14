
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {struct virtqueue* vtscsi_request_vq; } ;
struct virtqueue {int dummy; } ;


 int FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*) ;
 int FUNC_2 (struct virtqueue*) ;
 scalar_t__ FUNC_3 (struct virtqueue*) ;
 int FUNC_4 (struct vtscsi_softc*,struct virtqueue*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct vtscsi_softc *VAR_1;
 struct virtqueue *VAR_2;

 VAR_1 = VAR_0;
 VAR_2 = VAR_1->vtscsi_request_vq;

again:
 FUNC_0(VAR_1);

 FUNC_4(VAR_1, VAR_1->vtscsi_request_vq);

 if (FUNC_3(VAR_2) != 0) {
  FUNC_2(VAR_2);
  FUNC_1(VAR_1);
  goto again;
 }

 FUNC_1(VAR_1);
}
