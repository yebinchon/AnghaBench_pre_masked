
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int options; int p_LowQmPortal; int pullMode; } ;
typedef TYPE_1__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
typedef TYPE_1__ t_DpaaFD ;
struct qman_fq {int dummy; } ;
struct qm_dqrr_entry {int stat; int fd; TYPE_1__* fqid; int contextB; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;
 struct qman_fq* FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,struct qm_dqrr_entry*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct qm_dqrr_entry* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static t_Error FUNC_15(t_Handle VAR_7, uint32_t VAR_8, t_DpaaFD *VAR_9)
{
    t_QmPortal *VAR_10 = (t_QmPortal *)VAR_7;
    struct qm_dqrr_entry *VAR_11;
    struct qman_fq *VAR_12;
    int VAR_13;
    uint32_t *VAR_14, *VAR_15;

    FUNC_0(VAR_10);
    FUNC_0(VAR_9);
    FUNC_4(VAR_10->pullMode, VAR_1);

    FUNC_2(VAR_10);

    FUNC_14(VAR_10->p_LowQmPortal, VAR_8);
    FUNC_5();
    while (FUNC_13(VAR_10->p_LowQmPortal)) ;

    VAR_13 = !(VAR_10->options & VAR_4);
    while(VAR_6)
    {
        if (VAR_13)
            FUNC_9(VAR_10->p_LowQmPortal);
        FUNC_10(VAR_10->p_LowQmPortal);
        VAR_11 = FUNC_11(VAR_10->p_LowQmPortal);
        if (!VAR_11)
            continue;
        VAR_12 = FUNC_6(VAR_11->contextB);
        FUNC_0(VAR_11->fqid);
        VAR_14 = (uint32_t *)VAR_9;
        VAR_15 = (uint32_t *)&VAR_11->fd;
        VAR_14[0] = VAR_15[0];
        VAR_14[1] = VAR_15[1];
        VAR_14[2] = VAR_15[2];
        VAR_14[3] = VAR_15[3];
        if (VAR_10->options & VAR_3)
        {
            FUNC_8(VAR_10->p_LowQmPortal,
                                       VAR_11,
                                       0);
            FUNC_12(VAR_10->p_LowQmPortal);
        }
        else
        {
            FUNC_12(VAR_10->p_LowQmPortal);
            FUNC_7(VAR_10->p_LowQmPortal, 1);
        }
        break;
    }

    FUNC_3(VAR_10);

    if (!(VAR_11->stat & VAR_5))
        return FUNC_1(VAR_0);

    return VAR_2;
}
