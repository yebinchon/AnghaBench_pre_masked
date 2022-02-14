
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_field {struct acl_field* next; } ;


 int FUNC_0 (struct acl_field*) ;
 int FUNC_1 (struct acl_field*) ;

__attribute__((used)) static void
FUNC_2(struct acl_field *VAR_0, int VAR_1)
{
    struct acl_field *VAR_2;
    if (VAR_1)
 FUNC_1(VAR_0);
    while(VAR_0 != ((void*)0)) {
 VAR_2 = VAR_0->next;
 FUNC_0(VAR_0);
 VAR_0 = VAR_2;
    }
}
