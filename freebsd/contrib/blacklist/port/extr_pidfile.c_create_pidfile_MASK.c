
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_6 () ;
 int * FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(const char* VAR_2)
{
 FILE *VAR_3;

 if (FUNC_6() == -1)
  return -1;

 if (FUNC_0(VAR_2) == 0)
  return 0;

 VAR_0 = FUNC_7(VAR_2);
 if (VAR_0 == ((void*)0))
  return -1;

 if ((VAR_3 = FUNC_2(VAR_2, "w")) == ((void*)0)) {
  FUNC_4(VAR_0);
  VAR_0 = ((void*)0);
  return -1;
 }

 VAR_1 = FUNC_5();

 (void) FUNC_3(VAR_3, "%d\n", VAR_1);
 (void) FUNC_1(VAR_3);

 return 0;
}
