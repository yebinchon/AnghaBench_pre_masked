
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_plx_softc {int spad_count1; int spad_count2; } ;
typedef int device_t ;


 struct ntb_plx_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0)
{
 struct ntb_plx_softc *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->spad_count1 + VAR_1->spad_count2; VAR_2++)
  FUNC_1(VAR_0, VAR_2, 0);
}
