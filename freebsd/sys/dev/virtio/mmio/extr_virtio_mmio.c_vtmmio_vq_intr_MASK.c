
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtmmio_virtqueue {scalar_t__ vtv_no_intr; struct virtqueue* vtv_vq; } ;
struct vtmmio_softc {int vtmmio_nvqs; struct vtmmio_virtqueue* vtmmio_vqs; int * vtmmio_child_dev; } ;
struct virtqueue {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct vtmmio_softc*,int ) ;
 int FUNC_3 (struct vtmmio_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct vtmmio_virtqueue *VAR_5;
 struct vtmmio_softc *VAR_6;
 struct virtqueue *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_6 = VAR_4;

 VAR_8 = FUNC_2(VAR_6, VAR_1);
 FUNC_3(VAR_6, VAR_0, VAR_8);


 if (VAR_8 & VAR_2)
  if (VAR_6->vtmmio_child_dev != ((void*)0))
   FUNC_0(VAR_6->vtmmio_child_dev);


 if (VAR_8 & VAR_3) {
  for (VAR_9 = 0; VAR_9 < VAR_6->vtmmio_nvqs; VAR_9++) {
   VAR_5 = &VAR_6->vtmmio_vqs[VAR_9];
   if (VAR_5->vtv_no_intr == 0) {
    VAR_7 = VAR_5->vtv_vq;
    FUNC_1(VAR_7);
   }
  }
 }
}
