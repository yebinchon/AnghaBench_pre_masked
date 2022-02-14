
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ztest_shared_t ;
struct TYPE_2__ {int zo_init; int zo_verbose; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_5(void)
{
 ztest_shared_t *VAR_3 = VAR_2;

 FUNC_0(VAR_1.zo_init != 0);




 (void) FUNC_3(VAR_0);




 for (int VAR_4 = 1; VAR_4 <= VAR_1.zo_init; VAR_4++) {
  FUNC_1(VAR_3, sizeof (ztest_shared_t));
  if (VAR_1.zo_verbose >= 3 &&
      VAR_1.zo_init != 1) {
   (void) FUNC_2("ztest_init(), pass %d\n", VAR_4);
  }
  FUNC_4(VAR_3);
 }
}
