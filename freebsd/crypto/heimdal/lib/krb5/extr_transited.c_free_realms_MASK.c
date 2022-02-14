
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_realm {struct tr_realm* realm; struct tr_realm* next; } ;


 int FUNC_0 (struct tr_realm*) ;

__attribute__((used)) static void
FUNC_1(struct tr_realm *VAR_0)
{
    struct tr_realm *VAR_1;
    while(VAR_0){
 VAR_1 = VAR_0;
 VAR_0 = VAR_0->next;
 FUNC_0(VAR_1->realm);
 FUNC_0(VAR_1);
    }
}
