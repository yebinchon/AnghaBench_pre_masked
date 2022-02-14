
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_flags; int ciss_mtx; int * ciss_notify_thread; int ciss_notify; } ;
struct ciss_request {scalar_t__ cr_data; } ;
struct ciss_notify {int class; } ;


 int VAR_0 ;



 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ciss_request* FUNC_1 (struct ciss_softc*) ;
 int FUNC_2 (struct ciss_softc*,struct ciss_notify*) ;
 int FUNC_3 (struct ciss_softc*,struct ciss_notify*) ;
 int FUNC_4 (struct ciss_softc*,struct ciss_notify*) ;
 int FUNC_5 (struct ciss_request*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int ,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int **) ;

__attribute__((used)) static void
FUNC_12(void *VAR_2)
{
    struct ciss_softc *VAR_3;
    struct ciss_request *VAR_4;
    struct ciss_notify *VAR_5;

    VAR_3 = (struct ciss_softc *)VAR_2;
    FUNC_8(&VAR_3->ciss_mtx);

    for (;;) {
 if (FUNC_0(&VAR_3->ciss_notify) != 0 &&
     (VAR_3->ciss_flags & VAR_0) == 0) {
     FUNC_7(&VAR_3->ciss_notify, &VAR_3->ciss_mtx, VAR_1, "idle", 0);
 }

 if (VAR_3->ciss_flags & VAR_0)
     break;

 VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 == ((void*)0))
  FUNC_10("cr null");
 VAR_5 = (struct ciss_notify *)VAR_4->cr_data;

 switch (VAR_5->class) {
 case 130:
     FUNC_2(VAR_3, VAR_5);
     break;
 case 129:
     FUNC_3(VAR_3, VAR_5);
     break;
 case 128:
     FUNC_4(VAR_3, VAR_5);
     break;
 }

 FUNC_5(VAR_4);

    }
    VAR_3->ciss_notify_thread = ((void*)0);
    FUNC_11(&VAR_3->ciss_notify_thread);

    FUNC_9(&VAR_3->ciss_mtx);
    FUNC_6(0);
}
