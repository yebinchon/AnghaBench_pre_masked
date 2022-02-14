
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e {int principal; struct e* next; } ;
typedef int krb5_principal ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static struct e *
FUNC_1 (krb5_principal VAR_1, struct e *VAR_2)
{
    struct e *VAR_3;

    for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
 if (FUNC_0 (VAR_0, VAR_1, VAR_3->principal))
     return VAR_3;
    return ((void*)0);
}
