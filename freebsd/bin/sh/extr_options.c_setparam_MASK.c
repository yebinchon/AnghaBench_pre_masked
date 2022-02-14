
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int malloc; int nparam; char** p; int reset; int * optnext; int * optp; } ;


 char** FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(int VAR_1, char **VAR_2)
{
 char **VAR_3;
 char **VAR_4;

 VAR_4 = VAR_3 = FUNC_0((VAR_1 + 1) * sizeof *VAR_4);
 while (*VAR_2) {
  *VAR_4++ = FUNC_2(*VAR_2++);
 }
 *VAR_4 = ((void*)0);
 FUNC_1(&VAR_0);
 VAR_0.malloc = 1;
 VAR_0.nparam = VAR_1;
 VAR_0.p = VAR_3;
 VAR_0.optp = ((void*)0);
 VAR_0.reset = 1;
 VAR_0.optnext = ((void*)0);
}
