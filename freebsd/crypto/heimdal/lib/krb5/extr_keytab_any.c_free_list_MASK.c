
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct any_data {scalar_t__ kt; struct any_data* name; struct any_data* next; } ;
typedef int krb5_context ;


 int FUNC_0 (struct any_data*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (krb5_context VAR_0, struct any_data *VAR_1)
{
    struct any_data *VAR_2;

    for (; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
 VAR_2 = VAR_1->next;
 FUNC_0 (VAR_1->name);
 if(VAR_1->kt)
     FUNC_1(VAR_0, VAR_1->kt);
 FUNC_0 (VAR_1);
    }
}
