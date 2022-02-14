
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int associd_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,int *,int *,size_t*,char const**) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(
 associd_t VAR_4,
 char * VAR_5,
 int VAR_6
 )
{
 const char * VAR_7;
 int VAR_8;
 size_t VAR_9;
 u_short VAR_10;

 VAR_8 = FUNC_0(VAR_0, VAR_4, 0, 0, ((void*)0), &VAR_10,
        &VAR_9, &VAR_7);
 if (VAR_8 != 0)
  return 0;
 if (VAR_9 <= 0) {
  if (VAR_2 > 1)
   FUNC_1(VAR_3, "server=%s ", VAR_1);
  FUNC_1(VAR_3,
   "***No information returned for association %d\n",
   VAR_4);

  return 0;
 }
 if (VAR_9 > VAR_6)
  VAR_9 = VAR_6;
 FUNC_2(VAR_5, VAR_7, VAR_9);

 return VAR_9;
}
