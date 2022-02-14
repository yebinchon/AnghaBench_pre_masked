
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct _citrus_mapper_std_linear_zone {scalar_t__ width; scalar_t__ end; scalar_t__ begin; } ;


 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(struct _citrus_mapper_std_linear_zone *VAR_1,
    uint32_t VAR_2, uint32_t VAR_3)
{

 if (VAR_2 > VAR_3)
  return (VAR_0);

 VAR_1->begin = VAR_2;
 VAR_1->end = VAR_3;
 VAR_1->width= VAR_3 - VAR_2 + 1;

 return (0);
}
