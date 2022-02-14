
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int dummy; } ;


 int FUNC_0 (struct twe_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct twe_softc*) ;
 int FUNC_3 (struct twe_softc*,char*) ;

__attribute__((used)) static void
FUNC_4(struct twe_softc *VAR_1)
{
    FUNC_1(4);


    if (FUNC_2(VAR_1)) {
 FUNC_3(VAR_1, "error polling for signalled AEN\n");
    } else {
 FUNC_0(VAR_1, VAR_0);
    }
}
