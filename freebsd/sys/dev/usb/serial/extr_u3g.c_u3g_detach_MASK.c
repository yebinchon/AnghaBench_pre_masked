
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct u3g_softc {int * sc_xfer; int sc_ucom; int sc_super_ucom; } ;
typedef int device_t ;


 int FUNC_0 (char*,struct u3g_softc*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct u3g_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct u3g_softc*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct u3g_softc *VAR_3 = FUNC_2(VAR_2);
 uint8_t VAR_4;

 FUNC_0("sc=%p\n", VAR_3);


 FUNC_4(&VAR_3->sc_super_ucom, VAR_3->sc_ucom);

 for (VAR_4 = 0; VAR_4 != VAR_0; VAR_4++)
  FUNC_5(VAR_3->sc_xfer[VAR_4], VAR_1);

 FUNC_1(VAR_2);

 FUNC_3(VAR_3);

 return (0);
}
