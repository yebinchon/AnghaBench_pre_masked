
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbg_wb_conf {int access; int type; void* size; void* address; } ;
typedef enum dbg_access_t { ____Placeholder_dbg_access_t } dbg_access_t ;
typedef void* db_expr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dbg_wb_conf*) ;

int
FUNC_2(db_expr_t VAR_3, db_expr_t VAR_4, enum dbg_access_t VAR_5)
{
 struct dbg_wb_conf VAR_6;

 if (VAR_5 == VAR_2) {
  FUNC_0("Invalid access type for watchpoint: %d\n", VAR_5);
  return (VAR_1);
 }

 VAR_6.address = VAR_3;
 VAR_6.size = VAR_4;
 VAR_6.access = VAR_5;
 VAR_6.type = VAR_0;

 return (FUNC_1(&VAR_6));
}
