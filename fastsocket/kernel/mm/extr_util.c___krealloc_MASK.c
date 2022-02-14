
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 void* VAR_0 ;
 void* FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (void const*) ;
 int FUNC_2 (void*,void const*,size_t) ;
 scalar_t__ FUNC_3 (int) ;

void *FUNC_4(const void *VAR_1, size_t VAR_2, gfp_t VAR_3)
{
 void *VAR_4;
 size_t VAR_5 = 0;

 if (FUNC_3(!VAR_2))
  return VAR_0;

 if (VAR_1)
  VAR_5 = FUNC_1(VAR_1);

 if (VAR_5 >= VAR_2)
  return (void *)VAR_1;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 && VAR_1)
  FUNC_2(VAR_4, VAR_1, VAR_5);

 return VAR_4;
}
