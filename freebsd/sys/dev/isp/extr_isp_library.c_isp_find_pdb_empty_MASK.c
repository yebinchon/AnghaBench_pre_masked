
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_1__ fcportdb_t ;
struct TYPE_6__ {TYPE_1__* portdb; } ;
typedef TYPE_2__ fcparam ;


 TYPE_2__* FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_1(ispsoftc_t *VAR_2, int VAR_3, fcportdb_t **VAR_4)
{
 fcparam *VAR_5 = FUNC_0(VAR_2, VAR_3);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  fcportdb_t *VAR_7 = &VAR_5->portdb[VAR_6];

  if (VAR_7->state == VAR_0) {
   *VAR_4 = VAR_7;
   return (1);
  }
 }
 return (0);
}
