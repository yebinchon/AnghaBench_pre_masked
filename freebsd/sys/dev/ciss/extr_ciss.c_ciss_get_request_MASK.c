
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int dummy; } ;
struct ciss_request {int cr_sg_tag; int * cr_private; int * cr_complete; scalar_t__ cr_flags; int * cr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ciss_request* FUNC_0 (struct ciss_softc*) ;
 int FUNC_1 (struct ciss_request*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct ciss_softc *VAR_2, struct ciss_request **VAR_3)
{
    struct ciss_request *VAR_4;

    FUNC_2(2);




    if ((VAR_4 = FUNC_0(VAR_2)) == ((void*)0))
 return(VAR_1);

    VAR_4->cr_data = ((void*)0);
    VAR_4->cr_flags = 0;
    VAR_4->cr_complete = ((void*)0);
    VAR_4->cr_private = ((void*)0);
    VAR_4->cr_sg_tag = VAR_0;

    FUNC_1(VAR_4);
    *VAR_3 = VAR_4;
    return(0);
}
