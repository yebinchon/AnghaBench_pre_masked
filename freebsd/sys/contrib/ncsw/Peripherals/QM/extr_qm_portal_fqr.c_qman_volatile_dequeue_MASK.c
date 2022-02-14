
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int p_LowQmPortal; } ;
typedef TYPE_1__ t_QmPortal ;
typedef int t_Error ;
struct qman_fq {scalar_t__ state; int flags; int fqid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct qman_fq*) ;
 int FUNC_2 (struct qman_fq*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static t_Error FUNC_6(t_QmPortal *VAR_5,
                                     struct qman_fq *VAR_6,
                                     uint32_t VAR_7)
{
    FUNC_0((VAR_6->state == VAR_3) ||
                (VAR_6->state == VAR_4));
    FUNC_0(!(VAR_7 & VAR_2));
    FUNC_0(!(VAR_6->flags & VAR_1));

    VAR_7 = (VAR_7 & ~VAR_2) | VAR_6->fqid;
    FUNC_3(VAR_5);
    FUNC_1(VAR_6);
    VAR_6->flags |= VAR_1;
    FUNC_5(VAR_5->p_LowQmPortal, VAR_7);
    FUNC_2(VAR_6);
    FUNC_4(VAR_5);

    return VAR_0;
}
