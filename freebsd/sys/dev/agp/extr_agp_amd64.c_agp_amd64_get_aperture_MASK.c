
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct agp_amd64_softc {int * mctrl; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t* VAR_3 ;
 struct agp_amd64_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_4)
{
 struct agp_amd64_softc *VAR_5 = FUNC_0(VAR_4);
 uint32_t VAR_6;

 VAR_6 = (FUNC_1(0, VAR_5->mctrl[0], 3, VAR_0, 4) &
  VAR_1) >> 1;

 if (VAR_6 >= VAR_2)
  return (0);

 return (VAR_3[VAR_6]);
}
