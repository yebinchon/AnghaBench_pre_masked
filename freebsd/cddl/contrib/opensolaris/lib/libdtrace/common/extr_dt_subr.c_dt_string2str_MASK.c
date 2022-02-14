
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0);

 if (VAR_2 == 0) {




  return (VAR_3);
 }

 if (VAR_2 <= VAR_3) {
  (void) FUNC_2(VAR_1, VAR_0, VAR_2 - 1);




  VAR_1[VAR_2 - 1] = '\0';
 } else {
  (void) FUNC_0(VAR_1, VAR_0);
 }

 return (VAR_3);
}
