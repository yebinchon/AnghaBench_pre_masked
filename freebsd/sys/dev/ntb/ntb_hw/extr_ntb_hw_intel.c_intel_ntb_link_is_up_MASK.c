
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {int dummy; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
typedef int device_t ;


 struct ntb_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ntb_softc*) ;
 int FUNC_2 (struct ntb_softc*) ;
 int FUNC_3 (struct ntb_softc*) ;

__attribute__((used)) static bool
FUNC_4(device_t VAR_0, enum ntb_speed *VAR_1, enum ntb_width *VAR_2)
{
 struct ntb_softc *VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 != ((void*)0))
  *VAR_1 = FUNC_1(VAR_3);
 if (VAR_2 != ((void*)0))
  *VAR_2 = FUNC_2(VAR_3);
 return (FUNC_3(VAR_3));
}
