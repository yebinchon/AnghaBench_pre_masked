
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_max_requests; struct ciss_request* ciss_request; int ciss_flags; int ciss_dev; } ;
struct ciss_request {int cr_flags; int (* cr_complete ) (struct ciss_request*) ;struct ciss_command* cr_cc; } ;
struct ciss_error_info {int command_status; } ;
struct ciss_command {int * sg; } ;
typedef int cr_qhead_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ciss_softc*) ;
 struct ciss_request* FUNC_1 (struct ciss_softc*,int *) ;
 int FUNC_2 (struct ciss_request*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ciss_request*) ;
 int FUNC_5 (struct ciss_request*) ;

__attribute__((used)) static void
FUNC_6(struct ciss_softc *VAR_4)
{
    cr_qhead_t VAR_5;
    struct ciss_request *VAR_6;
    struct ciss_command *VAR_7;
    struct ciss_error_info *VAR_8;
    int VAR_9;

    FUNC_0(VAR_4);
    FUNC_3(VAR_4->ciss_dev);
    VAR_4->ciss_flags &= ~VAR_1;

    for (VAR_9 = 1; VAR_9 < VAR_4->ciss_max_requests; VAR_9++) {
 VAR_6 = &VAR_4->ciss_request[VAR_9];
 if ((VAR_6->cr_flags & VAR_2) == 0)
     continue;

 VAR_7 = VAR_6->cr_cc;
 VAR_8 = (struct ciss_error_info *)&(VAR_7->sg[0]);
 VAR_8->command_status = VAR_0;
 FUNC_2(VAR_6, &VAR_5);
    }

    for (;;) {
 if ((VAR_6 = FUNC_1(VAR_4, &VAR_5)) == ((void*)0))
     break;




 if (VAR_6->cr_complete != ((void*)0)) {
     VAR_6->cr_complete(VAR_6);
     continue;
 }




 if (VAR_6->cr_flags & VAR_3) {
     VAR_6->cr_flags &= ~VAR_3;
     FUNC_5(VAR_6);
     continue;
 }
    }
}
