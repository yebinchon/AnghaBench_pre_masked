
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s10_svc_softc {int * callfn; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 struct s10_svc_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct s10_svc_softc*) ;
 int * FUNC_4 (struct s10_svc_softc*,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct s10_svc_softc *VAR_2;
 phandle_t VAR_3;

 VAR_3 = FUNC_2(VAR_1);

 VAR_2 = FUNC_0(VAR_1);
 VAR_2->dev = VAR_1;

 if (FUNC_1(VAR_1) != 0)
  return (VAR_0);

 VAR_2->callfn = FUNC_4(VAR_2, VAR_3);
 if (VAR_2->callfn == ((void*)0))
  return (VAR_0);

 if (FUNC_3(VAR_2) != 0)
  return (VAR_0);

 return (0);
}
