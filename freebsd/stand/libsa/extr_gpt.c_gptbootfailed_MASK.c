
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dsk {int dummy; } ;
struct TYPE_6__ {int ent_attr; } ;
struct TYPE_5__ {int ent_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (char*,struct dsk*,int *,TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;

void
FUNC_1(struct dsk *VAR_10)
{

 if (!(VAR_3[VAR_2].ent_attr & VAR_1))
  return;

 if (VAR_7 > 0) {
  VAR_9[VAR_2].ent_attr &= ~VAR_1;
  VAR_9[VAR_2].ent_attr |= VAR_0;
  FUNC_0("primary", VAR_10, &VAR_6, VAR_9);
 }
 if (VAR_5 > 0) {
  VAR_8[VAR_2].ent_attr &= ~VAR_1;
  VAR_8[VAR_2].ent_attr |= VAR_0;
  FUNC_0("backup", VAR_10, &VAR_4, VAR_8);
 }
}
