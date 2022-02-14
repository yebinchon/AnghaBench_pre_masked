
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int icode; int * prev_sri; } ;
typedef TYPE_1__ secondary_reload_info ;
typedef int rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
struct TYPE_5__ {int (* secondary_reload ) (int,int ,int,int,TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int,int,TYPE_1__*) ;
 TYPE_2__ VAR_2 ;

enum reg_class
FUNC_2 (bool VAR_3, enum reg_class VAR_4,
   enum machine_mode VAR_5, rtx VAR_6)
{
  enum insn_code VAR_7;
  secondary_reload_info VAR_8;

  VAR_8.icode = VAR_0;
  VAR_8.prev_sri = ((void*)0);
  VAR_4 = VAR_2.secondary_reload (VAR_3, VAR_6, VAR_4, VAR_5, &VAR_8);
  VAR_7 = VAR_8.icode;



  if (VAR_7 == VAR_0 || VAR_4 != VAR_1)
    return VAR_4;



  return FUNC_0 (VAR_7);
}
