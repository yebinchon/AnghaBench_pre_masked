
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int) ;

void *FUNC_4(size_t VAR_1, gfp_t VAR_2)
{
 int VAR_3;
 void *VAR_4;

 if (FUNC_0(!VAR_1))
  return ((void*)0);
 if (FUNC_0(!VAR_2))
  return ((void*)0);
 VAR_2 |= VAR_0;
 VAR_3 = FUNC_2(VAR_1);
 if ((VAR_4 = (void *) FUNC_1(VAR_2, VAR_3)) != ((void*)0))
  FUNC_3(VAR_3);
 return VAR_4;
}
