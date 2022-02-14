
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ciss_softc*,int ) ;
 int FUNC_1 (struct ciss_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct ciss_softc *VAR_2)
{
    int VAR_3;

    FUNC_3(1);

    FUNC_1(VAR_2, VAR_0, VAR_1);
    for (VAR_3 = 0; VAR_3 < 1000; VAR_3++) {
 if (!(FUNC_0(VAR_2, VAR_0) &
       VAR_1)) {
     return(0);
 }
 FUNC_2(1000);
    }
    return(1);
}
