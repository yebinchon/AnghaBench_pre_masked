
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bitmap ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_1 (bitmap VAR_0, bitmap VAR_1)
{
  return (VAR_0 == VAR_1
   || (VAR_0 && VAR_1
       && FUNC_0 (VAR_0, VAR_1)));
}
