
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e {int principal; struct e* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct e*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (struct e *VAR_1)
{
    while (VAR_1 != ((void*)0)) {
 struct e *VAR_2 = VAR_1->next;
 FUNC_1 (VAR_0, VAR_1->principal);
 FUNC_0 (VAR_1);
 VAR_1 = VAR_2;
    }
}
