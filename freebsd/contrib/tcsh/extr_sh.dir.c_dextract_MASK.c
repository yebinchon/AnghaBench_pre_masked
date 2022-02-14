
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {struct directory* di_next; struct directory* di_prev; } ;


 struct directory* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct directory *VAR_1)
{
    if (VAR_1 == VAR_0)
 return;
    VAR_1->di_next->di_prev = VAR_1->di_prev;
    VAR_1->di_prev->di_next = VAR_1->di_next;
    VAR_1->di_next = VAR_0->di_next;
    VAR_1->di_prev = VAR_0;
    VAR_1->di_next->di_prev = VAR_1;
    VAR_0->di_next = VAR_1;
}
