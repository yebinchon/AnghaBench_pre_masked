
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_realm {struct tr_realm* next; } ;



__attribute__((used)) static struct tr_realm*
FUNC_0(struct tr_realm *VAR_0, struct tr_realm *VAR_1)
{
    struct tr_realm *VAR_2;
    if(VAR_0 == ((void*)0)){
 VAR_1->next = ((void*)0);
 return VAR_1;
    }
    VAR_2 = VAR_0;
    while(VAR_2->next) VAR_2 = VAR_2->next;
    VAR_2->next = VAR_1;
    return VAR_0;
}
