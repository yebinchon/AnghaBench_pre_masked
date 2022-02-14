
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct env_var {char* ev_name; char* ev_value; struct env_var* ev_next; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 struct env_var* VAR_1 ;
 int FUNC_1 (char*) ;

vm_offset_t
FUNC_2(vm_offset_t VAR_2)
{
    struct env_var *VAR_3;


    for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->ev_next) {
        FUNC_0(VAR_0, VAR_3->ev_name, VAR_2, FUNC_1(VAR_3->ev_name));
 VAR_2 += FUNC_1(VAR_3->ev_name);
 FUNC_0(VAR_0, "=", VAR_2, 1);
 VAR_2++;
 if (VAR_3->ev_value != ((void*)0)) {
            FUNC_0(VAR_0, VAR_3->ev_value, VAR_2, FUNC_1(VAR_3->ev_value));
     VAR_2 += FUNC_1(VAR_3->ev_value);
 }
 FUNC_0(VAR_0, "", VAR_2, 1);
 VAR_2++;
    }
    FUNC_0(VAR_0, "", VAR_2, 1);
    VAR_2++;
    return(VAR_2);
}
