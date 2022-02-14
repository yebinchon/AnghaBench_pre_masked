
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int ispsoftc_t ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ port_wwn; } ;
typedef TYPE_1__ fcportdb_t ;
struct TYPE_6__ {TYPE_1__* portdb; } ;
typedef TYPE_2__ fcparam ;


 TYPE_2__* FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_1(ispsoftc_t *VAR_2, int VAR_3, uint64_t VAR_4, fcportdb_t **VAR_5)
{
 fcparam *VAR_6 = FUNC_0(VAR_2, VAR_3);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  fcportdb_t *VAR_8 = &VAR_6->portdb[VAR_7];

  if (VAR_8->state == VAR_0)
   continue;
  if (VAR_8->port_wwn == VAR_4) {
   *VAR_5 = VAR_8;
   return (1);
  }
 }
 return (0);
}
