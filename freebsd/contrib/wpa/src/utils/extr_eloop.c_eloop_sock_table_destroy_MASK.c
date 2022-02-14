
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct eloop_sock_table {int count; TYPE_1__* table; } ;
struct TYPE_3__ {int handler; int user_data; int eloop_data; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct eloop_sock_table *VAR_1)
{
 if (VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->count && VAR_1->table; VAR_2++) {
   FUNC_1(VAR_0, "ELOOP: remaining socket: "
       "sock=%d eloop_data=%p user_data=%p "
       "handler=%p",
       VAR_1->table[VAR_2].sock,
       VAR_1->table[VAR_2].eloop_data,
       VAR_1->table[VAR_2].user_data,
       VAR_1->table[VAR_2].handler);
   FUNC_3("eloop unregistered socket "
      "handler",
      VAR_1->table[VAR_2].handler);
   FUNC_2("eloop sock", &VAR_1->table[VAR_2]);
  }
  FUNC_0(VAR_1->table);
 }
}
