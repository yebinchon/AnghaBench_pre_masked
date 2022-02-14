
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_1, unsigned int *VAR_2)
{
 char *VAR_3 = ((void*)0);
 FUNC_0(VAR_1 == ((void*)0));
 if (*VAR_1 == '\0') {
  *VAR_2 = 0;
  return 0;
 }
 *VAR_2 = FUNC_1(VAR_1, &VAR_3, 10);
 return VAR_3 == ((void*)0) || VAR_3 == VAR_1 || *VAR_3 != '\0' ? -VAR_0 : 0;
}
