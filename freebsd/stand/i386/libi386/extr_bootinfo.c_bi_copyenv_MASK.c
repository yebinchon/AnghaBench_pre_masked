
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct env_var {char* ev_name; char* ev_value; struct env_var* ev_next; } ;


 struct env_var* VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;

vm_offset_t
FUNC_2(vm_offset_t VAR_1)
{
    struct env_var *VAR_2;


    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->ev_next) {
 FUNC_0(VAR_2->ev_name, VAR_1, FUNC_1(VAR_2->ev_name));
 VAR_1 += FUNC_1(VAR_2->ev_name);
 FUNC_0("=", VAR_1, 1);
 VAR_1++;
 if (VAR_2->ev_value != ((void*)0)) {
     FUNC_0(VAR_2->ev_value, VAR_1, FUNC_1(VAR_2->ev_value));
     VAR_1 += FUNC_1(VAR_2->ev_value);
 }
 FUNC_0("", VAR_1, 1);
 VAR_1++;
    }
    FUNC_0("", VAR_1, 1);
    VAR_1++;
    return(VAR_1);
}
