
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int dummy; } ;
struct vtscsi_request {int dummy; } ;
struct virtqueue {int dummy; } ;


 int FUNC_0 (struct vtscsi_softc*) ;
 struct vtscsi_request* FUNC_1 (struct virtqueue*,int *) ;
 int FUNC_2 (struct vtscsi_request*) ;

__attribute__((used)) static void
FUNC_3(struct vtscsi_softc *VAR_0, struct virtqueue *VAR_1)
{
 struct vtscsi_request *VAR_2;

 FUNC_0(VAR_0);

 while ((VAR_2 = FUNC_1(VAR_1, ((void*)0))) != ((void*)0))
  FUNC_2(VAR_2);
}
