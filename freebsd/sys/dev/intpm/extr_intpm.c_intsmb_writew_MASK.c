
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef short u_char ;
struct intsmb_softc {int io_res; } ;
typedef int device_t ;


 int FUNC_0 (struct intsmb_softc*) ;
 int FUNC_1 (struct intsmb_softc*) ;
 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,short) ;
 struct intsmb_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct intsmb_softc*) ;
 int FUNC_5 (struct intsmb_softc*,int ,int ) ;
 int FUNC_6 (struct intsmb_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6, u_char VAR_7, char VAR_8, short VAR_9)
{
 struct intsmb_softc *VAR_10 = FUNC_3(VAR_6);
 int VAR_11;

 FUNC_0(VAR_10);
 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11) {
  FUNC_1(VAR_10);
  return (VAR_11);
 }
 FUNC_2(VAR_10->io_res, VAR_1, VAR_7 & ~VAR_0);
 FUNC_2(VAR_10->io_res, VAR_2, VAR_8);
 FUNC_2(VAR_10->io_res, VAR_4, VAR_9 & 0xff);
 FUNC_2(VAR_10->io_res, VAR_5, (VAR_9 >> 8) & 0xff);
 FUNC_5(VAR_10, VAR_3, 0);
 VAR_11 = FUNC_6(VAR_10);
 FUNC_1(VAR_10);
 return (VAR_11);
}
