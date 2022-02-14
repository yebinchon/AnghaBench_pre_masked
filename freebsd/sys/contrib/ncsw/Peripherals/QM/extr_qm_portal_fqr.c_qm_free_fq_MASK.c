
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int t_QmPortal ;
typedef scalar_t__ t_Error ;
struct qman_fq {int fqid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct qman_fq*,int ) ;
 scalar_t__ FUNC_2 (int *,struct qman_fq*) ;
 scalar_t__ FUNC_3 (int *,struct qman_fq*,int*,int) ;

__attribute__((used)) static t_Error FUNC_4(t_QmPortal *VAR_5, struct qman_fq *VAR_6)
{
    uint32_t VAR_7=0;

    if (FUNC_3(VAR_5, VAR_6, &VAR_7, 0) != VAR_1)
        FUNC_0(VAR_2, VAR_0, ("qman_retire_fq() failed!"));

    if (VAR_7 & VAR_3)
        FUNC_0(VAR_2, VAR_0, ("fq %d currently in use, will be retired", VAR_6->fqid));

    if (VAR_7 & VAR_4)
        FUNC_0(VAR_2, VAR_0, ("qman_retire_fq() failed;" "Frame Queue Not Empty, Need to dequeue"));


    if (FUNC_2(VAR_5, VAR_6) != VAR_1)
        FUNC_0(VAR_2, VAR_0, ("qman_oos_fq() failed!"));

    FUNC_1(VAR_6,0);

    return VAR_1;
}
