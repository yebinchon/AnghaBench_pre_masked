
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ciss_request {int cr_flags; TYPE_1__* cr_sc; } ;
struct TYPE_2__ {int ciss_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ciss_request*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ciss_request*,int *,int ,char*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ciss_request *VAR_4, int VAR_5)
{
    int VAR_6;

    FUNC_1(2);

    VAR_4->cr_flags |= VAR_0;
    if ((VAR_6 = FUNC_0(VAR_4)) != 0)
 return(VAR_6);

    while ((VAR_4->cr_flags & VAR_0) && (VAR_6 != VAR_1)) {
 VAR_6 = FUNC_2(VAR_4, &VAR_4->cr_sc->ciss_mtx, VAR_2, "cissREQ",
     VAR_3 * VAR_5, 0, 0);
    }
    return(VAR_6);
}
