
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct e {int max_vno; struct e* next; void* timestamp; int principal; } ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 struct e* FUNC_0 (int ,struct e*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,int,char*) ;
 struct e* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (krb5_principal VAR_1, int VAR_2, time_t VAR_3, struct e **VAR_4)
{
    krb5_error_code VAR_5;
    struct e *VAR_6;

    VAR_6 = FUNC_0 (VAR_1, *VAR_4);
    if (VAR_6 != ((void*)0)) {
 if(VAR_6->max_vno < VAR_2) {
     VAR_6->max_vno = VAR_2;
     VAR_6->timestamp = VAR_3;
 }
 return;
    }
    VAR_6 = FUNC_4 (sizeof (*VAR_6));
    if (VAR_6 == ((void*)0))
 FUNC_3 (VAR_0, 1, "malloc: out of memory");
    VAR_5 = FUNC_1 (VAR_0, VAR_1, &VAR_6->principal);
    if (VAR_5)
 FUNC_2 (VAR_0, 1, VAR_5, "krb5_copy_principal");
    VAR_6->max_vno = VAR_2;
    VAR_6->timestamp = VAR_3;
    VAR_6->next = *VAR_4;
    *VAR_4 = VAR_6;
}
