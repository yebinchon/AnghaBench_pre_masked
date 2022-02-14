
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_13__ {int tv_sec; } ;
struct TYPE_12__ {int id_num; } ;
struct TYPE_11__ {int id_num; } ;
struct TYPE_10__ {struct TYPE_10__* last; struct TYPE_10__* next; TYPE_3__ request; int time; } ;
typedef TYPE_1__ TABLE_ENTRY ;
typedef TYPE_2__ CTL_RESPONSE ;
typedef TYPE_3__ CTL_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 TYPE_1__* VAR_3 ;
 TYPE_4__ VAR_4 ;

void
FUNC_6(CTL_MSG *VAR_5, CTL_RESPONSE *VAR_6)
{
 TABLE_ENTRY *VAR_7;
 time_t VAR_8;

 FUNC_1(VAR_0, &VAR_4);
 VAR_8 = VAR_4.tv_sec;
 VAR_5->id_num = FUNC_4();
 VAR_6->id_num = FUNC_2(VAR_5->id_num);

 VAR_7 = (TABLE_ENTRY *)FUNC_3(sizeof(TABLE_ENTRY));
 if (VAR_7 == VAR_2) {
  FUNC_5(VAR_1, "insert_table: Out of memory");
  FUNC_0(1);
 }
 VAR_7->time = VAR_8;
 VAR_7->request = *VAR_5;
 VAR_7->next = VAR_3;
 if (VAR_7->next != VAR_2)
  VAR_7->next->last = VAR_7;
 VAR_7->last = VAR_2;
 VAR_3 = VAR_7;
}
