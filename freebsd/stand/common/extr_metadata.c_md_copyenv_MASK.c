
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct env_var {char* ev_name; char* ev_value; struct env_var* ev_next; } ;
struct TYPE_2__ {int (* arch_copyin ) (char*,int,int) ;} ;


 TYPE_1__ VAR_0 ;
 struct env_var* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static vm_offset_t
FUNC_6(vm_offset_t VAR_2)
{
    struct env_var *VAR_3;


    for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->ev_next) {
 VAR_0.arch_copyin(VAR_3->ev_name, VAR_2, FUNC_0(VAR_3->ev_name));
 VAR_2 += FUNC_0(VAR_3->ev_name);
 VAR_0.arch_copyin("=", VAR_2, 1);
 VAR_2++;
 if (VAR_3->ev_value != ((void*)0)) {
     VAR_0.arch_copyin(VAR_3->ev_value, VAR_2, FUNC_0(VAR_3->ev_value));
     VAR_2 += FUNC_0(VAR_3->ev_value);
 }
 VAR_0.arch_copyin("", VAR_2, 1);
 VAR_2++;
    }
    VAR_0.arch_copyin("", VAR_2, 1);
    VAR_2++;
    return(VAR_2);
}
