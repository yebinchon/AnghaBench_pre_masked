
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {scalar_t__** vec; } ;
struct directory {struct directory* di_prev; struct directory* di_next; scalar_t__ di_count; int di_name; } ;
typedef scalar_t__ Char ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 struct varent* FUNC_1 (int ) ;
 struct directory* VAR_1 ;
 int FUNC_2 (struct directory*) ;
 int FUNC_3 () ;
 struct directory VAR_2 ;
 struct directory* FUNC_4 (int,int) ;

void
FUNC_5(void)
{
    Char **VAR_3;
    struct varent *VAR_4;
    struct directory *VAR_5, *VAR_6;

    if ((VAR_4 = FUNC_1(VAR_0)) == ((void*)0) || VAR_4->vec == ((void*)0))
 return;


    while ((VAR_5 = VAR_2.di_prev) != &VAR_2) {
 VAR_5->di_next->di_prev = VAR_5->di_prev;
 VAR_5->di_prev->di_next = VAR_5->di_next;
 if (VAR_5 != VAR_1)
     FUNC_2(VAR_5);
    }


    VAR_2.di_prev = VAR_2.di_next = VAR_1;
    VAR_1->di_next = VAR_1->di_prev = &VAR_2;


    for (VAR_3 = VAR_4->vec; VAR_3 && *VAR_3 && **VAR_3; VAR_3++) {
 VAR_6 = FUNC_4(sizeof(struct directory), 1);
 VAR_6->di_name = FUNC_0(*VAR_3);
 VAR_6->di_count = 0;
 VAR_6->di_prev = VAR_1;
 VAR_6->di_next = VAR_1->di_next;
 VAR_1->di_next = VAR_6;
 VAR_6->di_next->di_prev = VAR_6;
    }
    FUNC_3();
}
