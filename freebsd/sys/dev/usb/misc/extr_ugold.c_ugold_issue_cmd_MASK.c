
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ugold_softc {int sc_report_id; int * sc_iface_index; int sc_mtx; int sc_udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ugold_softc *VAR_1, uint8_t *VAR_2, int VAR_3)
{
 return (FUNC_0(VAR_1->sc_udev, &VAR_1->sc_mtx, VAR_2, VAR_3,
     VAR_1->sc_iface_index[1], VAR_0, VAR_1->sc_report_id));
}
