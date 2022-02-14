
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int *,size_t*,char const**) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;
 int VAR_2 ;
 int VAR_3 ;

size_t
FUNC_4(
 char * VAR_4,
 size_t VAR_5
 )
{
 const char * VAR_6;
 int VAR_7;
 size_t VAR_8;
 u_short VAR_9;

 VAR_7 = FUNC_0(VAR_0, 0, 0, 0, ((void*)0), &VAR_9,
        &VAR_8, &VAR_6);

 if (VAR_7 != 0)
  return 0;

 if (VAR_8 == 0) {
  if (VAR_2 > 1)
   FUNC_1(VAR_3, "server=%s ", VAR_1);
  FUNC_1(VAR_3, "***No sysvar information returned\n");

  return 0;
 } else {
  VAR_8 = FUNC_3(VAR_8, VAR_5);
  FUNC_2(VAR_4, VAR_6, VAR_8);
 }

 return VAR_8;
}
