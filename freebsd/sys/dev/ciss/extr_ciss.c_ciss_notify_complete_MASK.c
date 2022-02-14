
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_flags; int * ciss_notify; int * ciss_periodic_notify; } ;
struct ciss_request {struct ciss_softc* cr_sc; scalar_t__ cr_data; struct ciss_command* cr_cc; } ;
struct ciss_notify {scalar_t__* message; scalar_t__ class; scalar_t__ subclass; int detail; } ;
struct ciss_command {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ciss_request*) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (struct ciss_softc*) ;
 int FUNC_3 (struct ciss_softc*,char*,scalar_t__*) ;
 int FUNC_4 (struct ciss_request*) ;
 int FUNC_5 (struct ciss_request*,int*,int*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int **) ;

__attribute__((used)) static void
FUNC_9(struct ciss_request *VAR_7)
{
    struct ciss_command *VAR_8;
    struct ciss_notify *VAR_9;
    struct ciss_softc *VAR_10;
    int VAR_11;
    int VAR_12;
    FUNC_7(1);

    VAR_8 = VAR_7->cr_cc;
    VAR_9 = (struct ciss_notify *)VAR_7->cr_data;
    VAR_10 = VAR_7->cr_sc;




    FUNC_5(VAR_7, &VAR_12, &VAR_11);






    if ((VAR_12 != VAR_0) &&
 (VAR_12 != VAR_1) &&
 (VAR_12 != VAR_2)) {
 FUNC_3(VAR_10, "fatal error in Notify Event request (%s)\n",
      FUNC_1(VAR_12));
 FUNC_4(VAR_7);
 VAR_10->ciss_flags &= ~VAR_4;
 return;
    }




    if (VAR_9->message[0] != 0)
 FUNC_3(VAR_10, "*** %.80s\n", VAR_9->message);

    FUNC_6(0, "notify event class %d subclass %d detail %d",
  VAR_9->class, VAR_9->subclass, VAR_9->detail);





    if ((VAR_9->class == VAR_5) &&
 (VAR_9->subclass == VAR_6) &&
 (VAR_9->detail == 1)) {
 FUNC_6(0, "notifier exiting");
 VAR_10->ciss_flags &= ~VAR_4;
 FUNC_4(VAR_7);
 VAR_10->ciss_periodic_notify = ((void*)0);
 FUNC_8(&VAR_10->ciss_periodic_notify);
    } else {

 FUNC_0(VAR_7);
 VAR_10->ciss_periodic_notify = ((void*)0);
 FUNC_8(&VAR_10->ciss_periodic_notify);
 FUNC_8(&VAR_10->ciss_notify);
    }



    if (!(VAR_10->ciss_flags & VAR_3)) {
 FUNC_2(VAR_10);
    }
}
