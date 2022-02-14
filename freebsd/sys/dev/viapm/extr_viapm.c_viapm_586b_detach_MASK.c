
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viapm_softc {int lock; scalar_t__ iores; int iorid; scalar_t__ iicbb; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct viapm_softc *VAR_2 = (struct viapm_softc *)FUNC_3(VAR_1);

 FUNC_0(VAR_1);
 if (VAR_2->iicbb) {
  FUNC_2(VAR_1, VAR_2->iicbb);
 }

 if (VAR_2->iores)
  FUNC_1(VAR_1, VAR_0, VAR_2->iorid,
      VAR_2->iores);
 FUNC_4(&VAR_2->lock);

 return 0;
}
