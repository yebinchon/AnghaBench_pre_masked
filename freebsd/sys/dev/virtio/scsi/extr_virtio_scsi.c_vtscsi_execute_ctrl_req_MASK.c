
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {struct virtqueue* vtscsi_control_vq; } ;
struct vtscsi_request {int * vsr_complete; } ;
struct virtqueue {int dummy; } ;
struct sglist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct virtqueue*,struct vtscsi_request*,struct sglist*,int,int) ;
 int FUNC_2 (struct virtqueue*) ;
 int FUNC_3 (struct vtscsi_softc*,struct vtscsi_request*) ;

__attribute__((used)) static int
FUNC_4(struct vtscsi_softc *VAR_4, struct vtscsi_request *VAR_5,
    struct sglist *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct virtqueue *VAR_10;
 int VAR_11;

 VAR_10 = VAR_4->vtscsi_control_vq;

 FUNC_0(VAR_9 == VAR_3 || VAR_5->vsr_complete != ((void*)0));

 VAR_11 = FUNC_1(VAR_10, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_11) {




  if (VAR_11 == VAR_2 || VAR_11 == VAR_1)
   VAR_11 = VAR_0;

  return (VAR_11);
 }

 FUNC_2(VAR_10);
 if (VAR_9 == VAR_3)
  FUNC_3(VAR_4, VAR_5);

 return (0);
}
