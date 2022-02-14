
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_ratectrl {int arc_space; } ;
struct sample_softc {int smoothing_rate; int smoothing_minpackets; int sample_rate; int max_successive_failures; int stale_failure_timeout; int min_switch; struct ath_ratectrl arc; } ;
struct sample_node {int dummy; } ;
struct ath_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_softc*,struct sample_softc*) ;
 int VAR_3 ;
 struct sample_softc* FUNC_1 (int,int ,int) ;

struct ath_ratectrl *
FUNC_2(struct ath_softc *VAR_4)
{
 struct sample_softc *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct sample_softc), VAR_0, VAR_1|VAR_2);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->arc.arc_space = sizeof(struct sample_node);
 VAR_5->smoothing_rate = 75;
 VAR_5->smoothing_minpackets = 100 / (100 - VAR_5->smoothing_rate);
 VAR_5->sample_rate = 10;
 VAR_5->max_successive_failures = 3;
 VAR_5->stale_failure_timeout = 10 * VAR_3;
 VAR_5->min_switch = VAR_3;
 FUNC_0(VAR_4, VAR_5);
 return &VAR_5->arc;
}
