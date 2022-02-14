
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;


 int FUNC_0 (char*,int *,int) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static char *
FUNC_2(
 u_int32 VAR_0,
 int VAR_1
 )
{
 if (VAR_1 <= 1) {
  static char VAR_2[5];
  VAR_2[4] = 0;
  FUNC_0(VAR_2, &VAR_0, 4);
  return VAR_2;
 }

 return FUNC_1(VAR_0);
}
