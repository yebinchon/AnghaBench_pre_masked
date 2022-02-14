
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct txschedule {size_t r0; size_t r1; size_t r2; size_t r3; int t3; int t2; int t1; int t0; } ;
struct sample_node {struct txschedule* sched; } ;
struct ath_softc {int dummy; } ;
struct ath_rc_series {size_t rix; int tries; scalar_t__ flags; } ;
struct ath_node {int dummy; } ;


 struct sample_node* FUNC_0 (struct ath_node*) ;
 int FUNC_1 (int,char*) ;

void
FUNC_2(struct ath_softc *VAR_0, struct ath_node *VAR_1,
    uint8_t VAR_2, struct ath_rc_series *VAR_3)
{
 struct sample_node *VAR_4 = FUNC_0(VAR_1);
 const struct txschedule *VAR_5 = &VAR_4->sched[VAR_2];

 FUNC_1(VAR_2 == VAR_5->r0, ("rix0 (%x) != sched->r0 (%x)!\n",
     VAR_2, VAR_5->r0));

 VAR_3[0].flags = VAR_3[1].flags = VAR_3[2].flags = VAR_3[3].flags = 0;

 VAR_3[0].rix = VAR_5->r0;
 VAR_3[1].rix = VAR_5->r1;
 VAR_3[2].rix = VAR_5->r2;
 VAR_3[3].rix = VAR_5->r3;

 VAR_3[0].tries = VAR_5->t0;
 VAR_3[1].tries = VAR_5->t1;
 VAR_3[2].tries = VAR_5->t2;
 VAR_3[3].tries = VAR_5->t3;
}
