
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int alloc_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned int
FUNC_0 (const void *VAR_2)
{
  return (((size_t) VAR_2 & (VAR_1 - 1))
   / (8 * sizeof (alloc_type) * VAR_0));
}
