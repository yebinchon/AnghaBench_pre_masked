
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 int VAR_4;

 if (!VAR_0 && VAR_1)
  return -1;
 if (VAR_0 && !VAR_1)
  return 1;
 if (!VAR_0 && !VAR_1)
  return 0;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_2(VAR_1);

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  FUNC_0(VAR_2);
  FUNC_0(VAR_3);
  return FUNC_1(VAR_0, VAR_1);
 }

 FUNC_3(VAR_2);
 FUNC_3(VAR_3);

 VAR_4 = FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 return VAR_4;
}
