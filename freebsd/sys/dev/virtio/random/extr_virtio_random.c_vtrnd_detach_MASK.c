
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtrnd_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct vtrnd_softc* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 struct vtrnd_softc* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int *,int ,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct vtrnd_softc *VAR_6;

 VAR_6 = FUNC_3(VAR_5);
 FUNC_0(
     FUNC_1(&VAR_1, VAR_2) == VAR_6,
     ("only one global instance at a time"));

 FUNC_5(&VAR_4);
 FUNC_2(&VAR_1, ((void*)0), VAR_3);






 FUNC_6(&VAR_1, 0, "vtrnddet", FUNC_4(50), 0, VAR_0);

 return (0);
}
