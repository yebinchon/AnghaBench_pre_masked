
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3(void)
{
 int VAR_3;

 (void)FUNC_2(VAR_2, VAR_1[1]);

 for (VAR_3 = 2; VAR_3 < VAR_0; ++VAR_3)
  if (FUNC_1(VAR_1[1], VAR_1[VAR_3])) {
   for (VAR_3 = 2; VAR_3 < VAR_0; ++VAR_3) {
    (void)FUNC_0(VAR_2, "/");
    (void)FUNC_0(VAR_2,
        VAR_1[VAR_3]);
   }
   break;
  }
 return (VAR_2);
}
