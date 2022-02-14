
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qval; void** lval; } ;
typedef TYPE_1__ nfsquad_t ;


 void* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static nfsquad_t
FUNC_3(void)
{
 static nfsquad_t VAR_1;
 nfsquad_t VAR_2;
 static int VAR_3 = 0;

 FUNC_1(&VAR_0);
 if (VAR_3 == 0) {
  VAR_1.lval[0] = FUNC_0();
  VAR_1.lval[1] = FUNC_0();
  VAR_3 = 1;
 } else
  VAR_1.qval++;
 VAR_2 = VAR_1;
 FUNC_2(&VAR_0);

 return (VAR_2);
}
