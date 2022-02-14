
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct dbg_wb_conf {int slot; int type; int access; void* size; void* address; } ;
typedef void* db_expr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dbg_wb_conf*) ;

__attribute__((used)) static int
FUNC_1(db_expr_t VAR_2, db_expr_t VAR_3, u_int VAR_4)
{
 struct dbg_wb_conf VAR_5;

 VAR_5.address = VAR_2;
 VAR_5.size = VAR_3;
 VAR_5.access = VAR_1;
 VAR_5.type = VAR_0;
 VAR_5.slot = VAR_4;

 return (FUNC_0(&VAR_5));
}
