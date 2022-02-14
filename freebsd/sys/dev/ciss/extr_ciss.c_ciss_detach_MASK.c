
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_flags; int ciss_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ciss_softc*) ;
 int FUNC_1 (struct ciss_softc*) ;
 int FUNC_2 (int) ;
 struct ciss_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
    struct ciss_softc *VAR_3 = FUNC_3(VAR_2);

    FUNC_2(1);

    FUNC_4(&VAR_3->ciss_mtx);
    if (VAR_3->ciss_flags & VAR_0) {
 FUNC_5(&VAR_3->ciss_mtx);
 return (VAR_1);
    }


    FUNC_0(VAR_3);


    FUNC_1(VAR_3);

    return(0);
}
