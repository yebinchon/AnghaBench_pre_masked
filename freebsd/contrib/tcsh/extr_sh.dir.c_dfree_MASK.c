
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {scalar_t__ di_count; struct directory* di_name; scalar_t__ di_prev; scalar_t__ di_next; } ;


 int FUNC_0 (struct directory*) ;

void
FUNC_1(struct directory *VAR_0)
{

    if (VAR_0->di_count != 0) {
 VAR_0->di_next = VAR_0->di_prev = 0;
    }
    else {
 FUNC_0(VAR_0->di_name);
 FUNC_0(VAR_0);
    }
}
