
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {int di_name; struct directory* di_prev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct directory* VAR_1 ;
 struct directory VAR_2 ;
 int FUNC_1 (int ) ;

void
FUNC_2(void)
{
    struct directory *VAR_3 = VAR_1;

    do {
 if (VAR_3 == &VAR_2)
     continue;
 VAR_3->di_name = FUNC_0(VAR_3->di_name, VAR_0);
    } while ((VAR_3 = VAR_3->di_prev) != VAR_1);

    FUNC_1(VAR_1->di_name);
}
