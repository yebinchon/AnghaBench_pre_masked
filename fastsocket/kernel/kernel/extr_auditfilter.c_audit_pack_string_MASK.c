
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static inline size_t FUNC_2(void **VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_1(VAR_1);

 FUNC_0(*VAR_0, VAR_1, VAR_2);
 *VAR_0 += VAR_2;

 return VAR_2;
}
