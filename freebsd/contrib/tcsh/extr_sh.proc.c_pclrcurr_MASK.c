
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int dummy; } ;


 struct process* VAR_0 ;
 struct process* FUNC_0 (struct process*) ;
 struct process* VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct process *VAR_2)
{
    if (VAR_2 == VAR_0) {
 if (VAR_1 != ((void*)0)) {
     VAR_0 = VAR_1;
     VAR_1 = FUNC_0(VAR_2);
 }
 else {
     VAR_0 = FUNC_0(VAR_2);
     VAR_1 = FUNC_0(VAR_2);
 }
    }
    else if (VAR_2 == VAR_1)
 VAR_1 = FUNC_0(VAR_2);
}
