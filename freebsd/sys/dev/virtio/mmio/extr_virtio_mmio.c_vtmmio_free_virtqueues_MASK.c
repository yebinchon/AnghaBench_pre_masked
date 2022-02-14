
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtmmio_virtqueue {int * vtv_vq; } ;
struct vtmmio_softc {int vtmmio_nvqs; struct vtmmio_virtqueue* vtmmio_vqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtmmio_virtqueue*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vtmmio_softc*,int) ;
 int FUNC_3 (struct vtmmio_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct vtmmio_softc *VAR_2)
{
 struct vtmmio_virtqueue *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->vtmmio_nvqs; VAR_4++) {
  VAR_3 = &VAR_2->vtmmio_vqs[VAR_4];

  FUNC_2(VAR_2, VAR_4);
  FUNC_3(VAR_2, VAR_1, 0);

  FUNC_1(VAR_3->vtv_vq);
  VAR_3->vtv_vq = ((void*)0);
 }

 FUNC_0(VAR_2->vtmmio_vqs, VAR_0);
 VAR_2->vtmmio_vqs = ((void*)0);
 VAR_2->vtmmio_nvqs = 0;
}
