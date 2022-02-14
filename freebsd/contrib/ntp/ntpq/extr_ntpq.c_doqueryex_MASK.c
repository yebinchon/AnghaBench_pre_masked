
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int associd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ,int *,size_t*,char const**,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int,size_t,char const*) ;
 int VAR_3 ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;

int
FUNC_4(
 int VAR_5,
 associd_t VAR_6,
 int VAR_7,
 size_t VAR_8,
 const char *VAR_9,
 u_short *VAR_10,
 size_t *VAR_11,
 const char **VAR_12,
 int VAR_13
 )
{
 int VAR_14;
 int VAR_15;




 if (!VAR_2) {
  FUNC_0(VAR_4, "***No host open, use `host' command\n");
  return -1;
 }

 VAR_15 = 0;
 VAR_3++;

    again:



 VAR_14 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_14 != 0)
  return VAR_14;




 VAR_14 = FUNC_1(VAR_5, VAR_6, VAR_10, VAR_11, VAR_12, VAR_15);

 if (VAR_14 > 0) {
  if (!VAR_15 && (VAR_14 == VAR_1 || VAR_14 == VAR_0)) {
   if (VAR_14 == VAR_0) {




    VAR_3++;
   }
   VAR_15 = 1;
   goto again;
  }
  if (!VAR_13)
   FUNC_3(VAR_14, VAR_6);

 }
 return VAR_14;
}
