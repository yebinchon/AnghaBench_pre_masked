
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int
FUNC_0(gfp_t VAR_4, unsigned int VAR_5,
    unsigned long VAR_6)
{

 if (VAR_4 & VAR_2)
  return 0;






 if (VAR_5 <= VAR_0)
  return 1;
 if (VAR_4 & VAR_3 && VAR_6 < (1 << VAR_5))
  return 1;





 if (VAR_4 & VAR_1)
  return 1;

 return 0;
}
