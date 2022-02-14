
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int as_aperture; } ;
struct agp_amd64_softc {int apbase; int n_mctrl; int * mctrl; TYPE_1__ agp; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_amd64_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2)
{
 struct agp_amd64_softc *VAR_3 = FUNC_0(VAR_2);
 uint32_t VAR_4;
 int VAR_5;

 VAR_3->apbase = FUNC_2(VAR_3->agp.as_aperture);
 VAR_4 = (VAR_3->apbase >> 25) & VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_3->n_mctrl; VAR_5++)
  FUNC_1(0, VAR_3->mctrl[VAR_5], 3,
      VAR_0, VAR_4, 4);
}
