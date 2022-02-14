
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* utrap_handler_t ;
typedef int utrap_entry_t ;
struct sparc_utrap_install_args {int num; struct sparc_utrap_args* handlers; } ;
struct sparc_utrap_args {void** old_precise; void** old_deferred; void* new_deferred; void* new_precise; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sparc_utrap_install_args*) ;

int
FUNC_1(utrap_entry_t VAR_1, utrap_handler_t VAR_2,
    utrap_handler_t VAR_3, utrap_handler_t *VAR_4,
    utrap_handler_t *VAR_5)
{
 struct sparc_utrap_install_args VAR_6;
 struct sparc_utrap_args VAR_7[1];

 VAR_7[0].type = VAR_1;
 VAR_7[0].new_precise = VAR_2;
 VAR_7[0].new_deferred = VAR_3;
 VAR_7[0].old_precise = VAR_4;
 VAR_7[0].old_deferred = VAR_5;
 VAR_6.num = 1;
 VAR_6.handlers = VAR_7;
 return (FUNC_0(VAR_0, &VAR_6));
}
