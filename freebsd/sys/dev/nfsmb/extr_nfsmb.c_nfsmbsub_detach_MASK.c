
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmb_softc {int * res; int rid; int lock; int * smbus; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 struct nfsmb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 device_t VAR_2;
 struct nfsmb_softc *VAR_3 = FUNC_3(VAR_1);

 VAR_2 = FUNC_2(VAR_1);

 if (VAR_3->smbus) {
  FUNC_1(VAR_1, VAR_3->smbus);
  VAR_3->smbus = ((void*)0);
 }
 FUNC_4(&VAR_3->lock);
 if (VAR_3->res) {
  FUNC_0(VAR_2, VAR_0, VAR_3->rid,
      VAR_3->res);
  VAR_3->res = ((void*)0);
 }
 return (0);
}
