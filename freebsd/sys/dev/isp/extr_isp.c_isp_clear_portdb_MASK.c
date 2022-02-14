
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_5__ {int state; } ;
typedef TYPE_1__ fcportdb_t ;
struct TYPE_6__ {TYPE_1__* portdb; } ;
typedef TYPE_2__ fcparam ;


 TYPE_2__* FUNC_0 (int *,int) ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,TYPE_1__*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(ispsoftc_t *VAR_2, int VAR_3)
{
 fcparam *VAR_4 = FUNC_0(VAR_2, VAR_3);
 fcportdb_t *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = &VAR_4->portdb[VAR_6];
  switch (VAR_5->state) {
  case 132:
  case 133:
  case 129:
   VAR_5->state = 130;
   FUNC_1(VAR_2, VAR_0, VAR_3, VAR_5);
   break;
  case 130:
  case 131:
   VAR_5->state = 130;
   break;
  case 128:
   break;
  default:
   FUNC_2("Don't know how to clear state %d\n", VAR_5->state);
  }
 }
}
