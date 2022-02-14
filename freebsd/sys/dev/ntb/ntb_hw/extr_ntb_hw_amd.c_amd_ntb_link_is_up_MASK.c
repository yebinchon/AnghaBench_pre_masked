
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int dummy; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
typedef int device_t ;


 int FUNC_0 (struct amd_ntb_softc*) ;
 int FUNC_1 (struct amd_ntb_softc*) ;
 int FUNC_2 (struct amd_ntb_softc*) ;
 struct amd_ntb_softc* FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(device_t VAR_0, enum ntb_speed *VAR_1, enum ntb_width *VAR_2)
{
 struct amd_ntb_softc *VAR_3 = FUNC_3(VAR_0);

 if (VAR_1 != ((void*)0))
  *VAR_1 = FUNC_1(VAR_3);
 if (VAR_2 != ((void*)0))
  *VAR_2 = FUNC_2(VAR_3);

 return (FUNC_0(VAR_3));
}
