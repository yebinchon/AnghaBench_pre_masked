
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_fq {int flags; int h_QmPortal; scalar_t__ h_QmFqr; } ;
typedef struct qman_fq t_QmFqr ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (struct qman_fq*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (struct qman_fq*) ;
 scalar_t__ FUNC_3 (int ,struct qman_fq*,int) ;

__attribute__((used)) static t_Error FUNC_4(struct qman_fq *VAR_6)
{
    t_QmFqr *VAR_7;

    FUNC_0(VAR_6);
    VAR_7 = (t_QmFqr *)VAR_6->h_QmFqr;
    FUNC_0(VAR_7);

    if (VAR_6->flags & VAR_3)
    {
        if (FUNC_3(VAR_7->h_QmPortal, VAR_6,
                                (VAR_5 | VAR_4)) != VAR_1)

            FUNC_1(VAR_2, VAR_0, ("drain with volatile failed"));
        return VAR_1;
    }
    else
        return FUNC_2(VAR_6);
}
