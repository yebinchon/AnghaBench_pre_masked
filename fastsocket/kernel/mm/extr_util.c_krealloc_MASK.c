
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 void* VAR_0 ;
 void* FUNC_0 (void const*,size_t,int ) ;
 int FUNC_1 (void const*) ;
 scalar_t__ FUNC_2 (int) ;

void *FUNC_3(const void *VAR_1, size_t VAR_2, gfp_t VAR_3)
{
 void *VAR_4;

 if (FUNC_2(!VAR_2)) {
  FUNC_1(VAR_1);
  return VAR_0;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 && VAR_1 != VAR_4)
  FUNC_1(VAR_1);

 return VAR_4;
}
