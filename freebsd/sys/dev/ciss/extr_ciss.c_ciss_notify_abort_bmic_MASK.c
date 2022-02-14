
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_flags; } ;
struct ciss_request {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ciss_softc*,struct ciss_request**,int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ciss_softc*,char*,int) ;
 int FUNC_3 (struct ciss_request*) ;
 int FUNC_4 (struct ciss_request*,int*,int *) ;
 int FUNC_5 (struct ciss_request*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct ciss_softc *VAR_3)
{
    struct ciss_request *VAR_4;
    int VAR_5, VAR_6;

    FUNC_6(1);

    VAR_4 = ((void*)0);
    VAR_5 = 0;


    if (!(VAR_3->ciss_flags & VAR_1))
 goto out;






    if ((VAR_5 = FUNC_0(VAR_3, &VAR_4, VAR_0,
           ((void*)0), 0)) != 0)
 goto out;




    if ((VAR_5 = FUNC_5(VAR_4, 60 * 1000)) != 0) {
 FUNC_2(VAR_3, "error sending BMIC Cancel Notify on Event command (%d)\n", VAR_5);
 goto out;
    }




    FUNC_4(VAR_4, &VAR_6, ((void*)0));
    switch(VAR_6) {
    case 128:
 break;
    default:
 FUNC_2(VAR_3, "error cancelling Notify on Event (%s)\n",
      FUNC_1(VAR_6));
 VAR_5 = VAR_2;
 goto out;
    }

out:
    if (VAR_4 != ((void*)0))
 FUNC_3(VAR_4);
    return(VAR_5);
}
