
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int *,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, char *VAR_1, size_t VAR_2)
{

 char *VAR_3;

 if (VAR_0[0] == '_' && VAR_0[1] == 'Z' && VAR_0[2]) {
  VAR_3 = FUNC_0(VAR_0, ((void*)0), ((void*)0), ((void*)0));
  if (!VAR_3)
   goto fail;
  FUNC_2(VAR_1, VAR_3, VAR_2);
  FUNC_1(VAR_3);
  return;
 }
fail:

 FUNC_2(VAR_1, VAR_0, VAR_2);
}
