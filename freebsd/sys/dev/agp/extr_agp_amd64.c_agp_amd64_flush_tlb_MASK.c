
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_amd64_softc {int n_mctrl; int * mctrl; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_amd64_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2)
{
 struct agp_amd64_softc *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->n_mctrl; VAR_4++)
  FUNC_2(0, VAR_3->mctrl[VAR_4], 3, VAR_0,
      FUNC_1(0, VAR_3->mctrl[VAR_4], 3, VAR_0, 4) |
      VAR_1, 4);
}
