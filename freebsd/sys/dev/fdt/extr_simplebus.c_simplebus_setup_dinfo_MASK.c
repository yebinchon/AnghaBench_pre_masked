
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simplebus_softc {int scells; int acells; } ;
struct simplebus_devinfo {int rl; int obdinfo; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct simplebus_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct simplebus_devinfo*,int ) ;
 struct simplebus_devinfo* FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int *) ;
 int FUNC_6 (int *) ;

struct simplebus_devinfo *
FUNC_7(device_t VAR_3, phandle_t VAR_4,
    struct simplebus_devinfo *VAR_5)
{
 struct simplebus_softc *VAR_6;
 struct simplebus_devinfo *VAR_7;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_5 == ((void*)0))
  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0, VAR_1 | VAR_2);
 else
  VAR_7 = VAR_5;
 if (FUNC_3(&VAR_7->obdinfo, VAR_4) != 0) {
  if (VAR_5 == ((void*)0))
   FUNC_1(VAR_7, VAR_0);
  return (((void*)0));
 }

 FUNC_6(&VAR_7->rl);
 FUNC_5(VAR_3, VAR_4, VAR_6->acells, VAR_6->scells, &VAR_7->rl);
 FUNC_4(VAR_3, VAR_4, &VAR_7->rl, ((void*)0));

 return (VAR_7);
}
