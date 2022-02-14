
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0)
{
 uint32_t VAR_1;
 char *VAR_2 = FUNC_2(VAR_0, '/');

 if (VAR_2 == ((void*)0))
  return;

 *VAR_2 = '\0';
 if (!FUNC_0(VAR_0, &VAR_1)) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_3(VAR_0);
 }
 *VAR_2 = '/';
}
