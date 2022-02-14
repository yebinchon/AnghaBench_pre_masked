
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_evq {scalar_t__ init_state; int stats; int common; scalar_t__ stats_update_time; } ;
typedef scalar_t__ clock_t ;


 int FUNC_0 (struct sfxge_evq*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sfxge_evq*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct sfxge_evq *VAR_3)
{
 clock_t VAR_4;

 FUNC_0(VAR_3);

 if (FUNC_2(VAR_3->init_state != VAR_0))
  goto out;

 VAR_4 = VAR_2;
 if ((unsigned int)(VAR_4 - VAR_3->stats_update_time) < (unsigned int)VAR_1)
  goto out;

 VAR_3->stats_update_time = VAR_4;
 FUNC_3(VAR_3->common, VAR_3->stats);

out:
 FUNC_1(VAR_3);
}
