
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {struct virtqueue* vtscsi_event_vq; } ;
struct virtqueue {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (struct virtqueue*,int*) ;
 int FUNC_2 (struct virtqueue*) ;

__attribute__((used)) static void
FUNC_3(struct vtscsi_softc *VAR_0)
{
 struct virtqueue *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->vtscsi_event_vq;
 VAR_2 = 0;

 while (FUNC_1(VAR_1, &VAR_2) != ((void*)0))
  ;

 FUNC_0(FUNC_2(VAR_1), ("eventvq not empty"));
}
