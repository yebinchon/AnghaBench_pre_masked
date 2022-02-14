
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct agp_amd64_softc {int n_mctrl; int via_agp; int * mctrl; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,size_t) ;
 size_t* VAR_4 ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,size_t) ;
 struct agp_amd64_softc* FUNC_3 (int ) ;
 size_t FUNC_4 (int ,int ,int,int ,int) ;
 int FUNC_5 (int ,int ,int,int ,size_t,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, uint32_t VAR_6)
{
 struct agp_amd64_softc *VAR_7 = FUNC_3(VAR_5);
 uint32_t VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  if (VAR_4[VAR_8] == VAR_6)
   break;
 if (VAR_8 >= VAR_2)
  return (VAR_3);

 for (VAR_9 = 0; VAR_9 < VAR_7->n_mctrl; VAR_9++)
  FUNC_5(0, VAR_7->mctrl[VAR_9], 3, VAR_0,
      (FUNC_4(0, VAR_7->mctrl[VAR_9], 3, VAR_0, 4) &
      ~(VAR_1)) | (VAR_8 << 1), 4);

 switch (FUNC_6(VAR_5)) {
 case 0x10b9:
  return (FUNC_1(VAR_5, VAR_6));
  break;

 case 0x10de:
  return (FUNC_0(VAR_5, VAR_6));
  break;

 case 0x1106:
  if (VAR_7->via_agp)
   return (FUNC_2(VAR_5, VAR_6));
  break;
 }

 return (0);
}
