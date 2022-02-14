
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct twe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct twe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct twe_softc*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct twe_softc*,int ,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct twe_softc *VAR_3)
{
    u_int16_t VAR_4;

    FUNC_0(VAR_3);
    for (;;) {
 if (FUNC_2(VAR_3, VAR_1, VAR_2, &VAR_4))
     return(1);
 if (VAR_4 == VAR_0)
     return(0);
 FUNC_1(VAR_3, VAR_4);
    }
}
