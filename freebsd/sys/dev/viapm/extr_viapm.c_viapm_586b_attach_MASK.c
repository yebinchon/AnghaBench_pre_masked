
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viapm_softc {int lock; scalar_t__ iores; int iorid; int iicbb; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_8)
{
 struct viapm_softc *VAR_9 = (struct viapm_softc *)FUNC_7(VAR_8);

 FUNC_10(&VAR_9->lock, FUNC_6(VAR_8), "viapm", VAR_2);
 if (!(VAR_9->iores = FUNC_2(VAR_8, VAR_5,
  &VAR_9->iorid, VAR_3 | VAR_4))) {
  FUNC_8(VAR_8, "could not allocate bus resource\n");
  goto error;
 }

 FUNC_1(VAR_1, FUNC_0(VAR_1) | VAR_6 | VAR_7);


 if (!(VAR_9->iicbb = FUNC_5(VAR_8, "iicbb", -1)))
  goto error;

 FUNC_3(VAR_8);

 return 0;

error:
 if (VAR_9->iores)
  FUNC_4(VAR_8, VAR_5,
     VAR_9->iorid, VAR_9->iores);
 FUNC_9(&VAR_9->lock);
 return VAR_0;
}
