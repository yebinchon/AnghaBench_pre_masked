
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int associd_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (int ,int ,int ,int ,int *,size_t*,char const**) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_2(
 associd_t VAR_3,
 char * VAR_4,
 int VAR_5
 )
{
 const char *VAR_6;
 int VAR_7;
 size_t VAR_8;
 u_short VAR_9;

 VAR_7 = FUNC_1(VAR_1, VAR_0, VAR_3,
          0, &VAR_9, &VAR_8, &VAR_6);
 if (VAR_7 != 0)
  return 0;

 if (VAR_8 == 0) {
  if (VAR_2 > 1)
   return 0;
 } else {
  if (VAR_8 > VAR_5)
   VAR_8 = VAR_5;
  FUNC_0(VAR_4, VAR_6, VAR_8);
 }

 return VAR_8;
}
