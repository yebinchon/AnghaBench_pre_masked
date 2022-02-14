
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int alloc_type ;


 size_t VAR_0 ;

__attribute__((used)) static inline unsigned int
FUNC_0 (const void *VAR_1)
{
  return (((size_t) VAR_1 / VAR_0)
   % (8 * sizeof (alloc_type)));
}
