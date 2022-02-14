
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stmt {int code; } ;
struct TYPE_3__ {scalar_t__ done; } ;
typedef TYPE_1__ opt_state_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct stmt*) ;
 int FUNC_1 (struct stmt*) ;

__attribute__((used)) static void
FUNC_2(opt_state_t *VAR_4, register struct stmt *VAR_5, register struct stmt *VAR_6[])
{
 register int VAR_7;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 >= 0) {
  if (VAR_7 == VAR_0) {
   VAR_6[VAR_3] = 0;
   VAR_6[VAR_1] = 0;
  }
  else
   VAR_6[VAR_7] = 0;
 }
 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 >= 0) {
  if (VAR_6[VAR_7]) {
   VAR_4->done = 0;
   VAR_6[VAR_7]->code = VAR_2;
  }
  VAR_6[VAR_7] = VAR_5;
 }
}
