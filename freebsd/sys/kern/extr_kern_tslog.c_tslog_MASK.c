
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int type; char const* f; char const* s; int tsc; void* td; } ;


 long FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 long FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_3(void * VAR_2, int VAR_3, const char * VAR_4, const char * VAR_5)
{
 uint64_t VAR_6 = FUNC_1();
 long VAR_7;


 VAR_7 = FUNC_0(&VAR_0, 1);


 if (VAR_7 < FUNC_2(VAR_1)) {
  VAR_1[VAR_7].td = VAR_2;
  VAR_1[VAR_7].type = VAR_3;
  VAR_1[VAR_7].f = VAR_4;
  VAR_1[VAR_7].s = VAR_5;
  VAR_1[VAR_7].tsc = VAR_6;
 }
}
