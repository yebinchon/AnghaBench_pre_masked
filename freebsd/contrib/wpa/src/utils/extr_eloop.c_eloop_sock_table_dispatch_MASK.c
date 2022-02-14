
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eloop_sock_table {int count; scalar_t__ changed; TYPE_1__* table; } ;
typedef int fd_set ;
struct TYPE_2__ {int user_data; int eloop_data; int sock; int (* handler ) (int ,int ,int ) ;} ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct eloop_sock_table *VAR_0,
          fd_set *VAR_1)
{
 int VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->table == ((void*)0))
  return;

 VAR_0->changed = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  if (FUNC_0(VAR_0->table[VAR_2].sock, VAR_1)) {
   VAR_0->table[VAR_2].handler(VAR_0->table[VAR_2].sock,
      VAR_0->table[VAR_2].eloop_data,
      VAR_0->table[VAR_2].user_data);
   if (VAR_0->changed)
    break;
  }
 }
}
