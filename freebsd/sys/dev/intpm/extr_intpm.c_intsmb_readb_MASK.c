
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct intsmb_softc {int io_res; } ;
typedef int device_t ;


 int FUNC_0 (struct intsmb_softc*) ;
 int FUNC_1 (struct intsmb_softc*) ;
 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,char) ;
 struct intsmb_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct intsmb_softc*) ;
 int FUNC_6 (struct intsmb_softc*,int ,int ) ;
 int FUNC_7 (struct intsmb_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, u_char VAR_6, char VAR_7, char *VAR_8)
{
 struct intsmb_softc *VAR_9 = FUNC_4(VAR_5);
 int VAR_10;

 FUNC_0(VAR_9);
 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_9);
  return (VAR_10);
 }
 FUNC_3(VAR_9->io_res, VAR_1, VAR_6 | VAR_0);
 FUNC_3(VAR_9->io_res, VAR_2, VAR_7);
 FUNC_6(VAR_9, VAR_3, 0);
 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10 == 0)
  *VAR_8 = FUNC_2(VAR_9->io_res, VAR_4);
 FUNC_1(VAR_9);
 return (VAR_10);
}
