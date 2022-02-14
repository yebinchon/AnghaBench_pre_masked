
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtrnd_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vtrnd_softc**,struct vtrnd_softc*,int ,int ) ;
 struct vtrnd_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
 struct vtrnd_softc *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_6);

 FUNC_4(VAR_6, VAR_5);
 FUNC_7(VAR_6);

 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9) {
  FUNC_2(VAR_6, "cannot allocate virtqueue\n");
  goto fail;
 }

 VAR_8 = ((void*)0);
 if (!FUNC_0(&VAR_1, &VAR_8, VAR_7,
     VAR_3, VAR_2)) {
  VAR_9 = VAR_0;
  goto fail;
 }
 FUNC_3(&VAR_4);

fail:
 if (VAR_9)
  FUNC_6(VAR_6);

 return (VAR_9);
}
