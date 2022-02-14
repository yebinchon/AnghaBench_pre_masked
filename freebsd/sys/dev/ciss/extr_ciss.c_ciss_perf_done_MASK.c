
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ciss_softc {int* ciss_reply; size_t ciss_rqidx; int ciss_cycle; int ciss_max_requests; struct ciss_request* ciss_request; } ;
struct ciss_request {struct ciss_command* cr_cc; } ;
struct TYPE_2__ {int host_tag; } ;
struct ciss_command {TYPE_1__ header; } ;
typedef int cr_qhead_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ciss_request*,int *) ;
 int FUNC_1 (struct ciss_softc*,char*,int,int) ;
 int FUNC_2 (int,char*,int,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct ciss_softc *VAR_2, cr_qhead_t *VAR_3)
{
    struct ciss_request *VAR_4;
    struct ciss_command *VAR_5;
    u_int32_t VAR_6, VAR_7;

    FUNC_3(3);





    for (;;) {
 VAR_6 = VAR_2->ciss_reply[VAR_2->ciss_rqidx];
 if ((VAR_6 & VAR_0) != VAR_2->ciss_cycle)
     break;
 VAR_7 = VAR_6 >> 2;
 FUNC_2(2, "completed command %d%s\n", VAR_7,
       (VAR_6 & VAR_1) ? " with error" : "");
 if (VAR_7 < VAR_2->ciss_max_requests) {
     VAR_4 = &(VAR_2->ciss_request[VAR_7]);
     VAR_5 = VAR_4->cr_cc;
     VAR_5->header.host_tag = VAR_6;
     FUNC_0(VAR_4, VAR_3);
 } else {
     FUNC_1(VAR_2, "completed invalid request %d (0x%x)\n", VAR_7, VAR_6);
 }
 if (++VAR_2->ciss_rqidx == VAR_2->ciss_max_requests) {
     VAR_2->ciss_rqidx = 0;
     VAR_2->ciss_cycle ^= 1;
 }
    }

}
