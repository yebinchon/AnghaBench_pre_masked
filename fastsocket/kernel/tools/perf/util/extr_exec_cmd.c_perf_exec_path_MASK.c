
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 char* FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;

const char *FUNC_2(void)
{
 const char *VAR_3;

 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 && *VAR_3) {
  return VAR_3;
 }

 return FUNC_1(VAR_1);
}
