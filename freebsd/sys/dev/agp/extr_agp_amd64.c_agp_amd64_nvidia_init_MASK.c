
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_amd64_softc {int apbase; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct agp_amd64_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_3)
{
 struct agp_amd64_softc *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3);
 FUNC_4(VAR_3, VAR_0,
     (FUNC_3(VAR_3, VAR_0, 4) & 0x0000000f) |
     VAR_4->apbase, 4);
 FUNC_2(0, 11, 0, VAR_1, VAR_4->apbase, 4);
 FUNC_2(0, 11, 0, VAR_2, VAR_4->apbase, 4);
}
