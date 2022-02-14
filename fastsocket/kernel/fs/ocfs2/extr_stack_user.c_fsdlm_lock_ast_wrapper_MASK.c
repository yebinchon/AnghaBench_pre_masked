
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlm_lksb {int sb_status; } ;
struct TYPE_4__ {TYPE_1__* sp_proto; } ;
struct TYPE_3__ {int (* lp_lock_ast ) (void*) ;int (* lp_unlock_ast ) (void*,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dlm_lksb* FUNC_1 (void*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 struct dlm_lksb *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = VAR_4->sb_status;

 FUNC_0(VAR_2.sp_proto == ((void*)0));
 if (VAR_5 == -VAR_1 || VAR_5 == -VAR_0)
  VAR_2.sp_proto->lp_unlock_ast(VAR_3, 0);
 else
  VAR_2.sp_proto->lp_lock_ast(VAR_3);
}
