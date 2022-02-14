
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct intsmb_softc {int io_res; } ;
typedef int device_t ;


 int FUNC_0 (struct intsmb_softc*) ;
 int FUNC_1 (struct intsmb_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct intsmb_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct intsmb_softc*) ;
 int FUNC_6 (struct intsmb_softc*,int ,int ) ;
 int FUNC_7 (struct intsmb_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9, u_char VAR_10, char VAR_11, u_char VAR_12, char *VAR_13)
{
 struct intsmb_softc *VAR_14 = FUNC_4(VAR_9);
 int VAR_15, VAR_16;

 if (VAR_12 > VAR_7 || VAR_12 == 0)
  return (VAR_8);

 FUNC_0(VAR_14);
 VAR_15 = FUNC_5(VAR_14);
 if (VAR_15) {
  FUNC_1(VAR_14);
  return (VAR_15);
 }


 FUNC_2(VAR_14->io_res, VAR_4);

 FUNC_3(VAR_14->io_res, VAR_2, VAR_10 & ~VAR_0);
 FUNC_3(VAR_14->io_res, VAR_3, VAR_11);
 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
  FUNC_3(VAR_14->io_res, VAR_1, VAR_13[VAR_16]);
 FUNC_3(VAR_14->io_res, VAR_6, VAR_12);
 FUNC_6(VAR_14, VAR_5, 0);
 VAR_15 = FUNC_7(VAR_14);
 FUNC_1(VAR_14);
 return (VAR_15);
}
