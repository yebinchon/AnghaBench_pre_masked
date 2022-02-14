
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mv_pcib_softc {int sc_msi_mtx; int sc_msi_bitmap; int sc_msi_supported; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct mv_pcib_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5)
{
 struct mv_pcib_softc *VAR_6;
 u_int VAR_7;

 VAR_6 = FUNC_1(VAR_2);
 if(!VAR_6->sc_msi_supported)
  return (VAR_0);

 FUNC_2(&VAR_6->sc_msi_mtx);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_0(&VAR_6->sc_msi_bitmap, VAR_5[VAR_7] - VAR_1);

 FUNC_3(&VAR_6->sc_msi_mtx);
 return (0);
}
