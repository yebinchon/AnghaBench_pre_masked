
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ time_t ;
struct twe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int FUNC_2 (struct twe_softc*,char*) ;
 int FUNC_3 (struct twe_softc*,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct twe_softc *VAR_7, u_int32_t VAR_8)
{
    int VAR_9;
    static time_t VAR_10[2] = {0, 0};





    if ((VAR_8 & VAR_2) != 0) {
 FUNC_3(VAR_7, "FATAL STATUS BIT(S) %b\n", VAR_8 & VAR_2,
     VAR_0);
 FUNC_2(VAR_7, "fatal status bits");
    }

    VAR_9 = 0;
    if ((VAR_8 & VAR_1) != VAR_1) {
 if (VAR_6 > (VAR_10[0] + 5)) {
     FUNC_3(VAR_7, "missing expected status bit(s) %b\n", ~VAR_8 & VAR_1,
         VAR_0);
     VAR_10[0] = VAR_6;
 }
 VAR_9 = 1;
    }

    if ((VAR_8 & VAR_5) != 0) {
 if (VAR_6 > (VAR_10[1] + 5)) {
     FUNC_3(VAR_7, "unexpected status bit(s) %b\n", VAR_8 & VAR_5,
         VAR_0);
     VAR_10[1] = VAR_6;
 }
 VAR_9 = 1;
 if (VAR_8 & VAR_4) {
     FUNC_3(VAR_7, "PCI parity error: Reseat card, move card or buggy device present.\n");
     FUNC_1(VAR_7);
 }
 if (VAR_8 & VAR_3) {
     FUNC_3(VAR_7, "PCI abort, clearing.\n");
     FUNC_0(VAR_7);
 }
    }

    return(VAR_9);
}
