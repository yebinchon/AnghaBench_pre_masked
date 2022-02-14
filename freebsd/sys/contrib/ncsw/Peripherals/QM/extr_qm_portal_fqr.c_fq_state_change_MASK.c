
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct qman_fq {int flags; int state; } ;
struct TYPE_2__ {int fqs; } ;
struct qm_mr_entry {TYPE_1__ fq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qman_fq*) ;
 int FUNC_2 (struct qman_fq*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static __inline__ void FUNC_3(struct qman_fq *VAR_8,
                                       struct qm_mr_entry *VAR_9,
                                       uint8_t VAR_10)
{
    FUNC_1(VAR_8);
    switch(VAR_10) {
        case 129:
            FUNC_0(VAR_8->flags & VAR_2);
            VAR_8->flags &= ~VAR_2;
            break;
        case 128:
            FUNC_0((VAR_8->state == VAR_5) ||
                (VAR_8->state == VAR_7));
            FUNC_0(VAR_8->flags & VAR_0);
            VAR_8->flags &= ~VAR_0;
            if (VAR_9->fq.fqs & VAR_3)
                VAR_8->flags |= VAR_1;
            if (VAR_9->fq.fqs & VAR_4)
                VAR_8->flags |= VAR_2;
            VAR_8->state = VAR_6;
            break;
        case 130:
            FUNC_0(VAR_8->state == VAR_7);
            FUNC_0(VAR_8->flags & VAR_0);
            VAR_8->state = VAR_5;
    }
    FUNC_2(VAR_8);
}
