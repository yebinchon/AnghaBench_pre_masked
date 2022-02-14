
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
struct TYPE_4__ {TYPE_1__* sp_proto; } ;
struct TYPE_3__ {int (* lp_unlock_ast ) (void*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, enum dlm_status VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_1.sp_proto == ((void*)0));
 if (VAR_3 == VAR_0)
  return;

 VAR_1.sp_proto->lp_unlock_ast(VAR_2, VAR_4);
}
