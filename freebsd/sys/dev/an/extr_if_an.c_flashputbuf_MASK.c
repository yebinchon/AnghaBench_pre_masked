
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {struct an_softc* if_softc; } ;
struct an_softc {unsigned short* an_flash_buffer; int mpi350; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct an_softc*,int,int) ;
 int FUNC_2 (struct an_softc*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_4)
{
 unsigned short *VAR_5;
 int VAR_6;
 struct an_softc *VAR_7 = VAR_4->if_softc;



 VAR_5 = VAR_7->an_flash_buffer;

 if (!VAR_7->mpi350) {
  FUNC_2(VAR_7, VAR_2, 0x100);
  FUNC_2(VAR_7, VAR_1, 0);

  for (VAR_6 = 0; VAR_6 != VAR_3 / 2; VAR_6++) {
   FUNC_2(VAR_7, VAR_0, VAR_5[VAR_6] & 0xffff);
  }
 } else {
  for (VAR_6 = 0; VAR_6 != VAR_3 / 4; VAR_6++) {
   FUNC_1(VAR_7, 0x8000,
    ((u_int32_t *)VAR_5)[VAR_6] & 0xffff);
  }
 }

 FUNC_2(VAR_7, FUNC_0(VAR_7->mpi350), 0x8000);

 return 0;
}
