
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (char*,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_2(void *VAR_13, int VAR_14, char *VAR_15)
{
 switch (VAR_14) {
 case 1:
  if (FUNC_0(VAR_15,
          &VAR_8,
          &VAR_7) < 0)
   return -1;
  VAR_9++;
  break;
 case 2:
  if (FUNC_0(VAR_15,
          &VAR_1,
          &VAR_0) < 0)
   return -1;
  VAR_2++;
  break;
 case 3:
  if (FUNC_0(VAR_15,
          &VAR_11,
          &VAR_10) < 0)
   return -1;
  VAR_12++;
  break;
 case 4:
  if (FUNC_1(VAR_15,
       &VAR_6,
       &VAR_4,
       &VAR_3) < 0)
   return -1;
  VAR_5++;
  break;
 default:
  return -1;
 }

 return 0;
}
