
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u_long ;
typedef TYPE_1__* res_state ;
struct TYPE_3__ {unsigned int options; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 char* FUNC_1 (unsigned int) ;
 int FUNC_2 (char,int *) ;

void
FUNC_3(const res_state VAR_0, FILE *VAR_1) {
 u_long VAR_2;

 FUNC_0(VAR_1, ";; res options:");
 for (VAR_2 = 1; VAR_2 != 0U; VAR_2 <<= 1)
  if (VAR_0->options & VAR_2)
   FUNC_0(VAR_1, " %s", FUNC_1(VAR_2));
 FUNC_2('\n', VAR_1);
}
