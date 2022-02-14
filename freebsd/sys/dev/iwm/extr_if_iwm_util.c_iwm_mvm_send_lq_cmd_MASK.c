
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_lq_cmd {scalar_t__ sta_id; } ;
struct iwm_host_cmd {int data; int flags; int len; int id; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct iwm_softc*,struct iwm_host_cmd*) ;

int
FUNC_1(struct iwm_softc *VAR_4, struct iwm_lq_cmd *VAR_5, boolean_t VAR_6)
{
 struct iwm_host_cmd VAR_7 = {
  .id = VAR_2,
  .len = sizeof(struct iwm_lq_cmd), 
  .flags = VAR_6 ? 0 : VAR_1,
  .data = VAR_5, 
 };

 if (VAR_5->sta_id == VAR_3)
  return VAR_0;

 return FUNC_0(VAR_4, &VAR_7);
}
