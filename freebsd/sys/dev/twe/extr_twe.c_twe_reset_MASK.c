
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_io_lock; } ;
struct twe_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct twe_softc*,int *,int ,char*,int ) ;
 struct twe_request* FUNC_1 (struct twe_softc*) ;
 int FUNC_2 (struct twe_softc*) ;
 int FUNC_3 (struct twe_softc*) ;
 int FUNC_4 (struct twe_request*) ;
 int FUNC_5 (struct twe_softc*,char*,...) ;
 int FUNC_6 (struct twe_softc*) ;
 int FUNC_7 (struct twe_softc*) ;

__attribute__((used)) static void
FUNC_8(struct twe_softc *VAR_3)
{
    struct twe_request *VAR_4;
    int VAR_5;




    FUNC_0(VAR_3, &VAR_3->twe_io_lock, VAR_0, "twereset", VAR_2);





    FUNC_5(VAR_3, "controller reset in progress...\n");
    FUNC_2(VAR_3);




    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

 if (VAR_5 > 0)
     FUNC_5(VAR_3, "reset %d failed, trying again\n", VAR_5);

 if (!FUNC_6(VAR_3))
     break;
    }

    if (VAR_5 >= VAR_1) {
 FUNC_5(VAR_3, "can't reset controller, giving up\n");
 goto out;
    }




    VAR_5 = 0;
    while ((VAR_4 = FUNC_1(VAR_3)) != ((void*)0)) {
 FUNC_4(VAR_4);
 VAR_5++;
    }




    FUNC_7(VAR_3);
    FUNC_5(VAR_3, "controller reset done, %d commands restarted\n", VAR_5);

out:
    FUNC_3(VAR_3);
}
