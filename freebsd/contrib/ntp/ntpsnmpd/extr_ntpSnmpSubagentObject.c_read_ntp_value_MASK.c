
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sv_data ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 size_t FUNC_1 (char*,size_t,char const*,char*,size_t) ;
 size_t FUNC_2 (char*,int) ;

size_t
FUNC_3(
 const char * VAR_1,
 char * VAR_2,
 size_t VAR_3
 )
{
 size_t VAR_4;
 char VAR_5[VAR_0];

 FUNC_0(VAR_5, 0, sizeof(VAR_5));
 VAR_4 = FUNC_2(VAR_5, sizeof(VAR_5));

 if (0 == VAR_4)
  return 0;
 else
  return FUNC_1(VAR_5, VAR_4, VAR_1, VAR_2,
       VAR_3);
}
