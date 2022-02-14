
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* tipc_mode_event ) (void*,int ,int ) ;
struct tipc_user {void* usr_handle; int (* callback ) (void*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct tipc_user *VAR_3)
{
 tipc_mode_event VAR_4;
 void *VAR_5;

 FUNC_0(&VAR_0);
 VAR_4 = VAR_3->callback;
 VAR_5 = VAR_3->usr_handle;
 FUNC_1(&VAR_0);

 if (VAR_4)
  VAR_4(VAR_5, VAR_1, VAR_2);
}
