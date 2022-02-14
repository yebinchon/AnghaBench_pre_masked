
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;
 return VAR_2[FUNC_0(VAR_0)] == '\0';
}
