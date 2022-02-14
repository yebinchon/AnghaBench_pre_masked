
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef scalar_t__ tipc_mode_event ;
struct tipc_user {size_t next; int ports; void* usr_handle; scalar_t__ callback; } ;
typedef int Handler ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,unsigned long) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct tipc_user* VAR_8 ;

int FUNC_6(u32 *VAR_9, tipc_mode_event VAR_10, void *VAR_11)
{
 struct tipc_user *VAR_12;

 if ((VAR_6 == VAR_2) && !VAR_10)
  return -VAR_1;
 if (!VAR_8)
  FUNC_2();

 FUNC_3(&VAR_5);
 if (!VAR_3) {
  FUNC_4(&VAR_5);
  return -VAR_0;
 }
 VAR_12 = &VAR_8[VAR_3];
 *VAR_9 = VAR_3;
 VAR_3 = VAR_12->next;
 VAR_12->next = -1;
 FUNC_4(&VAR_5);

 VAR_12->callback = VAR_10;
 VAR_12->usr_handle = VAR_11;
 FUNC_0(&VAR_12->ports);
 FUNC_1(&VAR_7);

 if (VAR_10 && (VAR_6 != VAR_2))
  FUNC_5((Handler)VAR_4, (unsigned long)VAR_12);
 return 0;
}
