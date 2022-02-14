
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef int refid ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,int) ;
 char const* FUNC_2 (int ) ;
 size_t FUNC_3 (char*) ;

const char *
FUNC_4(
 u_int32 VAR_0,
 int VAR_1
 )
{
 char * VAR_2;
 size_t VAR_3;

 if (VAR_1 > 1)
  return FUNC_2(VAR_0);

 FUNC_0(VAR_2);
 VAR_2[0] = '.';
 FUNC_1(&VAR_2[1], &VAR_0, sizeof(VAR_0));
 VAR_2[1 + sizeof(VAR_0)] = '\0';
 VAR_3 = FUNC_3(VAR_2);
 VAR_2[VAR_3] = '.';
 VAR_2[VAR_3 + 1] = '\0';

 return VAR_2;
}
