
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eloop_sock_table {int dummy; } ;
typedef int eloop_sock_handler ;
typedef int eloop_event_type ;


 int FUNC_0 (int) ;
 struct eloop_sock_table* FUNC_1 (int ) ;
 int FUNC_2 (struct eloop_sock_table*,int,int ,void*,void*) ;

int FUNC_3(int VAR_0, eloop_event_type VAR_1,
   eloop_sock_handler VAR_2,
   void *VAR_3, void *VAR_4)
{
 struct eloop_sock_table *VAR_5;

 FUNC_0(VAR_0 >= 0);
 VAR_5 = FUNC_1(VAR_1);
 return FUNC_2(VAR_5, VAR_0, VAR_2,
      VAR_3, VAR_4);
}
