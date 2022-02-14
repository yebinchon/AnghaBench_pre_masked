
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 size_t FUNC_0 (size_t) ;

__attribute__((used)) static inline size_t FUNC_1(size_t VAR_0,
     size_t VAR_1,
     ssize_t *VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_0(VAR_0 + VAR_1 +
        (*VAR_2 >= 0 ? *VAR_2 : 0));
 if (*VAR_2 != 0)
  *VAR_2 = VAR_3 - VAR_0 - VAR_1;

 return VAR_3;
}
