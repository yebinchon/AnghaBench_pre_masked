
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long long FUNC_0 (char const*,int ,int ,char const**) ;

const char *
FUNC_1(const char *VAR_1, int *VAR_2)
{
 const char *VAR_3 = ((void*)0);
 long long VAR_4;

 if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
  return "missing";
 VAR_4 = FUNC_0(VAR_1, 0, VAR_0, &VAR_3);
 if (VAR_3 == ((void*)0))
  *VAR_2 = (int)VAR_4;
 return VAR_3;
}
