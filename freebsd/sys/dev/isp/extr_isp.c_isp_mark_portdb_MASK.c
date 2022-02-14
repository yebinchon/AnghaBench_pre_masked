
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ portid; int probational; } ;
typedef TYPE_1__ fcportdb_t ;
struct TYPE_5__ {TYPE_1__* portdb; } ;
typedef TYPE_2__ fcparam ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(ispsoftc_t *VAR_4, int VAR_5)
{
 fcparam *VAR_6 = FUNC_0(VAR_4, VAR_5);
 fcportdb_t *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = &VAR_6->portdb[VAR_8];
  if (VAR_7->state == VAR_2)
   continue;
  if (VAR_7->portid >= VAR_0 &&
      VAR_7->portid <= VAR_1)
   continue;
  VAR_6->portdb[VAR_8].probational = 1;
 }
}
