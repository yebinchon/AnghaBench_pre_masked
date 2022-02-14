
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {scalar_t__ pr_uref; int pr_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct prison*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5, int VAR_6)
{
 struct prison *VAR_7 = VAR_5;

 FUNC_2(&VAR_4);
 FUNC_0(&VAR_7->pr_mtx);
 FUNC_1(VAR_7, VAR_7->pr_uref
     ? VAR_0 | VAR_1 | VAR_3 | VAR_2
     : VAR_3 | VAR_2);
}
