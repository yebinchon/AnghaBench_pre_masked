
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t u_int8_t ;
struct txschedule {size_t r1; size_t r2; size_t r3; int t3; int t2; int t1; } ;
struct sample_node {struct txschedule* sched; } ;
struct ath_softc {int sc_ah; TYPE_2__* sc_currates; } ;
struct ath_node {int dummy; } ;
struct ath_desc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {size_t rateCode; size_t shortPreamble; } ;
typedef TYPE_2__ HAL_RATE_TABLE ;


 struct sample_node* FUNC_0 (struct ath_node*) ;
 int FUNC_1 (int ,struct ath_desc*,size_t,int ,size_t,int ,size_t,int ) ;

void
FUNC_2(struct ath_softc *VAR_0, struct ath_node *VAR_1,
        struct ath_desc *VAR_2, int VAR_3, u_int8_t VAR_4)
{
 struct sample_node *VAR_5 = FUNC_0(VAR_1);
 const struct txschedule *VAR_6 = &VAR_5->sched[VAR_4];
 const HAL_RATE_TABLE *VAR_7 = VAR_0->sc_currates;
 uint8_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;


 VAR_8 = VAR_6->r1;
 VAR_9 = VAR_7->info[VAR_8].rateCode
        | (VAR_3 ? VAR_7->info[VAR_8].shortPreamble : 0);
 VAR_10 = VAR_6->r2;
 VAR_11 = VAR_7->info[VAR_10].rateCode
        | (VAR_3 ? VAR_7->info[VAR_10].shortPreamble : 0);
 VAR_12 = VAR_6->r3;
 VAR_13 = VAR_7->info[VAR_12].rateCode
        | (VAR_3 ? VAR_7->info[VAR_12].shortPreamble : 0);
 FUNC_1(VAR_0->sc_ah, VAR_2,
     VAR_9, VAR_6->t1,
     VAR_11, VAR_6->t2,
     VAR_13, VAR_6->t3);
}
