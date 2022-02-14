
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* setup ) () ;int (* teardown ) () ;int (* test ) (char*,size_t) ;} ;
typedef TYPE_1__ test_fixture_t ;


 int FUNC_0 (char*,size_t,char*,int) ;
 size_t FUNC_1 (char*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(test_fixture_t const VAR_0[], int VAR_1, char *VAR_2,
           size_t VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  int VAR_7 = VAR_0[VAR_4].setup();
  if (VAR_7 != 0) {
   FUNC_0(VAR_2, VAR_3,
       "Setup failed for test idx %d\n", VAR_4);
   VAR_6++;
  } else {
   size_t VAR_8;

   VAR_0[VAR_4].test(VAR_2, VAR_3);
   VAR_8 = FUNC_1(VAR_2, VAR_3);
   VAR_2 += VAR_8;
   VAR_3 -= VAR_8;

   if (VAR_8 > 0) {
    VAR_6++;
   }
  }
  VAR_0[VAR_4].teardown();
 }

 VAR_5 = VAR_1 - VAR_6;
 if (VAR_5 > 0) {
  FUNC_0(VAR_2, VAR_3, "%d Tests Passed\n", VAR_5);
 }
 if (VAR_6 > 0) {
  FUNC_0(VAR_2, VAR_3, "%d Tests FAILED\n", VAR_6);
 }

 return VAR_6;
}
