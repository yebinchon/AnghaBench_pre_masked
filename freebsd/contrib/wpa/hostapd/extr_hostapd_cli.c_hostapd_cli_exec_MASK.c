
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,char*,char const*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1,
       const char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_1) + FUNC_4(VAR_2) + 2;
 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3 == ((void*)0))
  return -1;
 FUNC_3(VAR_3, VAR_4, "%s %s", VAR_1, VAR_2);
 VAR_5 = FUNC_0(VAR_0, VAR_3, 1);
 FUNC_1(VAR_3);

 return VAR_5;
}
