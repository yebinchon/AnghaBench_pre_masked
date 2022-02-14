
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct twe_softc {int dummy; } ;
typedef int TWE_Response_Queue ;


 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct twe_softc*,int) ;

__attribute__((used)) static int
FUNC_4(struct twe_softc *VAR_1)
{
    TWE_Response_Queue VAR_2;
    u_int32_t VAR_3;

    FUNC_2(4);

    for (;;) {
 VAR_3 = FUNC_1(VAR_1);
 if (FUNC_3(VAR_1, VAR_3))
     return(1);
 if (VAR_3 & VAR_0)
     return(0);
 VAR_2 = FUNC_0(VAR_1);
    }
}
