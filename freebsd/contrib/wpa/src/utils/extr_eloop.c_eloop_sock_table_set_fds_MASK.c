
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eloop_sock_table {int count; TYPE_1__* table; } ;
typedef int fd_set ;
struct TYPE_2__ {scalar_t__ sock; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct eloop_sock_table *VAR_0,
         fd_set *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);

 if (VAR_0->table == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  FUNC_2(VAR_0->table[VAR_2].sock >= 0);
  FUNC_0(VAR_0->table[VAR_2].sock, VAR_1);
 }
}
