
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mib ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int*,size_t,char*,size_t*,int *,int ) ;
 scalar_t__ FUNC_5 (char*,int*,size_t*) ;

char *
FUNC_6(void)
{
 char *VAR_4;
 size_t VAR_5 = 0;
 int VAR_6[3];
 size_t VAR_7;
 int VAR_8;

 VAR_7 = sizeof(VAR_6) / sizeof(*VAR_6);
 if (FUNC_5("kern.geom.confxml", VAR_6, &VAR_7) != 0)
  return (((void*)0));
 if (FUNC_4(VAR_6, VAR_7, ((void*)0), &VAR_5, ((void*)0), 0) != 0)
  return (((void*)0));
 VAR_5 += VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_4 = FUNC_1(VAR_5);
  if (VAR_4 == ((void*)0))
   return (((void*)0));
  if (FUNC_4(VAR_6, VAR_7, VAR_4, &VAR_5, ((void*)0), 0) == 0)
   return (FUNC_2(VAR_4, FUNC_3(VAR_4) + 1));

  FUNC_0(VAR_4);

  if (VAR_3 != VAR_0)
   return (((void*)0));





  VAR_5 *= 2;
 }

 return (((void*)0));
}
