
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (unsigned long,int,int ) ;
 void* FUNC_2 (unsigned long,int) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned long VAR_4 ;

__attribute__((used)) static inline void *FUNC_4(unsigned long VAR_5, gfp_t VAR_6)
{
 if (FUNC_3(VAR_5 <= VAR_2)) {
  FUNC_0(!VAR_5);

  return FUNC_2(VAR_2, VAR_6 & ~VAR_3);

 }
 if (FUNC_3((VAR_5 >> VAR_1) < VAR_4))
  return FUNC_1(VAR_5, VAR_6, VAR_0);
 return ((void*)0);
}
