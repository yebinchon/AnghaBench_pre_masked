
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpet_timer {scalar_t__ pcpu_master; size_t* pcpu_slaves; int caps; int num; int mode; struct hpet_softc* sc; } ;
struct hpet_softc {int mem_res; struct hpet_timer* t; } ;
struct eventtimer {scalar_t__ et_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 size_t VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct eventtimer *VAR_4)
{
 struct hpet_timer *VAR_5 = (struct hpet_timer *)VAR_4->et_priv;
 struct hpet_timer *VAR_6;
 struct hpet_softc *VAR_7 = VAR_5->sc;

 VAR_6 = (VAR_5->pcpu_master < 0) ? VAR_5 : &VAR_7->t[VAR_5->pcpu_slaves[VAR_3]];
 VAR_6->mode = VAR_2;
 VAR_6->caps &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_7->mem_res, FUNC_0(VAR_6->num), VAR_6->caps);
 return (0);
}
