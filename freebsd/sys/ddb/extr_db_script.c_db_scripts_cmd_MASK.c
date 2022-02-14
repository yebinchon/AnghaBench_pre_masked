
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int db_expr_t ;
struct TYPE_2__ {int ds_script; int ds_scriptname; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(db_expr_t VAR_2, bool VAR_3, db_expr_t VAR_4,
    char *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_1(VAR_1[VAR_6].ds_scriptname) != 0) {
   FUNC_0("%s=%s\n",
       VAR_1[VAR_6].ds_scriptname,
       VAR_1[VAR_6].ds_script);
  }
 }
}
