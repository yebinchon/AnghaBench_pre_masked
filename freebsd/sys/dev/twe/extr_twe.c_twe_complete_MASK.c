
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int dummy; } ;
struct twe_request {int tr_flags; int (* tr_complete ) (struct twe_request*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct twe_request*) ;
 struct twe_request* FUNC_3 (struct twe_softc*) ;
 int FUNC_4 (struct twe_request*) ;
 int FUNC_5 (struct twe_request*) ;

__attribute__((used)) static void
FUNC_6(struct twe_softc *VAR_1)
{
    struct twe_request *VAR_2;

    FUNC_1(5);




    while ((VAR_2 = FUNC_3(VAR_1)) != ((void*)0)) {

 FUNC_4(VAR_2);


 if (VAR_2->tr_complete != ((void*)0)) {
     FUNC_0(2, "call completion handler %p", VAR_2->tr_complete);
     VAR_2->tr_complete(VAR_2);

 } else if (VAR_2->tr_flags & VAR_0) {
     FUNC_0(2, "wake up command owner on %p", VAR_2);
     FUNC_5(VAR_2);

 } else {
     FUNC_0(2, "command left for owner");
 }
    }
}
