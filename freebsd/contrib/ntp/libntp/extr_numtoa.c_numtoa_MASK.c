
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_int32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,char*,int,int,int,int) ;

char *
FUNC_3(
 u_int32 VAR_1
 )
{
 register u_int32 VAR_2;
 register char *VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_0, "%lu.%lu.%lu.%lu",
   ((u_long)VAR_2 >> 24) & 0xff,
   ((u_long)VAR_2 >> 16) & 0xff,
   ((u_long)VAR_2 >> 8) & 0xff,
   (u_long)VAR_2 & 0xff);
 return VAR_3;
}
