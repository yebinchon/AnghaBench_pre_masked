
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_7__ {scalar_t__ id_num; } ;
struct TYPE_6__ {TYPE_3__ request; struct TYPE_6__* next; } ;
typedef TYPE_1__ TABLE_ENTRY ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_3__*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 TYPE_1__* VAR_5 ;

int
FUNC_3(u_int32_t VAR_6)
{
 TABLE_ENTRY *VAR_7;

 if (VAR_4)
  FUNC_2(VAR_0, "delete_invite(%d)", VAR_6);
 for (VAR_7 = VAR_5; VAR_7 != VAR_1; VAR_7 = VAR_7->next) {
  if (VAR_7->request.id_num == VAR_6)
   break;
  if (VAR_4)
   FUNC_1("", &VAR_7->request);
 }
 if (VAR_7 != VAR_1) {
  FUNC_0(VAR_7);
  return (VAR_3);
 }
 return (VAR_2);
}
