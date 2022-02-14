
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct twe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct twe_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct twe_softc*) ;
 int FUNC_2 (struct twe_softc*) ;
 int FUNC_3 (struct twe_softc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct twe_softc*,int ) ;
 scalar_t__ FUNC_7 (struct twe_softc*) ;
 scalar_t__ FUNC_8 (struct twe_softc*) ;
 scalar_t__ FUNC_9 (struct twe_softc*,int ) ;
 int FUNC_10 (struct twe_softc*,char*) ;
 scalar_t__ FUNC_11 (struct twe_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_12(struct twe_softc *VAR_3)
{
    u_int32_t VAR_4;

    FUNC_5(2);

    FUNC_1(VAR_3);
    FUNC_2(VAR_3);

    if (FUNC_11(VAR_3, VAR_2, 30)) {
 FUNC_10(VAR_3, "no attention interrupt\n");
 return(1);
    }
    FUNC_0(VAR_3, VAR_1);
    if (FUNC_7(VAR_3)) {
 FUNC_10(VAR_3, "can't drain AEN queue\n");
 return(1);
    }
    if (FUNC_9(VAR_3, VAR_0)) {
 FUNC_10(VAR_3, "reset not reported\n");
 return(1);
    }
    VAR_4 = FUNC_3(VAR_3);
    if (FUNC_4(VAR_4) || FUNC_6(VAR_3, VAR_4)) {
 FUNC_10(VAR_3, "controller errors detected\n");
 return(1);
    }
    if (FUNC_8(VAR_3)) {
 FUNC_10(VAR_3, "can't drain response queue\n");
 return(1);
    }
    return(0);
}
