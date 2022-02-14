
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int dummy; } ;
struct ciss_request {int cr_flags; int (* cr_complete ) (struct ciss_request*) ;} ;
typedef int cr_qhead_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ciss_request* FUNC_0 (struct ciss_softc*,int *) ;
 int FUNC_1 (struct ciss_request*) ;
 int FUNC_2 (struct ciss_softc*,char*) ;
 int FUNC_3 (struct ciss_request*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ciss_request*) ;
 int FUNC_6 (struct ciss_request*) ;

__attribute__((used)) static void
FUNC_7(struct ciss_softc *VAR_3, cr_qhead_t *VAR_4)
{
    struct ciss_request *VAR_5;

    FUNC_4(2);





    for (;;) {
 if ((VAR_5 = FUNC_0(VAR_3, VAR_4)) == ((void*)0))
     break;
 FUNC_3(VAR_5);

 if ((VAR_5->cr_flags & VAR_0) == 0)
     FUNC_2(VAR_3, "WARNING: completing non-busy request\n");
 VAR_5->cr_flags &= ~VAR_0;




 if (VAR_5->cr_complete != ((void*)0)) {
     VAR_5->cr_complete(VAR_5);
     continue;
 }




 if (VAR_5->cr_flags & VAR_2) {
     VAR_5->cr_flags &= ~VAR_2;
     FUNC_6(VAR_5);
     continue;
 }




 if (VAR_5->cr_flags & VAR_1) {
     VAR_5->cr_flags &= ~VAR_1;
     continue;
 }





 FUNC_2(VAR_3, "WARNING: completed command with no submitter\n");
 FUNC_1(VAR_5);
    }
}
