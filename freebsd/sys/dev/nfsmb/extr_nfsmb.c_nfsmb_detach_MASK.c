
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmb_softc {int * res; int rid; int lock; int * smbus; int * subdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct nfsmb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct nfsmb_softc *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->subdev) {
  FUNC_1(VAR_1, VAR_2->subdev);
  VAR_2->subdev = ((void*)0);
 }

 if (VAR_2->smbus) {
  FUNC_1(VAR_1, VAR_2->smbus);
  VAR_2->smbus = ((void*)0);
 }

 FUNC_3(&VAR_2->lock);
 if (VAR_2->res) {
  FUNC_0(VAR_1, VAR_0, VAR_2->rid,
      VAR_2->res);
  VAR_2->res = ((void*)0);
 }

 return (0);
}
