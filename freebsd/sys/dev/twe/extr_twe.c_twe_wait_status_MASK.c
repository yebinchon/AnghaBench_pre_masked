
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ time_t ;
struct twe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct twe_softc*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct twe_softc *VAR_1, u_int32_t VAR_2, int VAR_3)
{
    time_t VAR_4;
    u_int32_t VAR_5;

    FUNC_2(4);

    VAR_4 = VAR_0 + VAR_3;

    do {
 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 & VAR_2)
     return(0);
 FUNC_0(100000);
    } while (VAR_0 <= VAR_4);

    return(1);
}
