
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_11, int VAR_12, char *VAR_13)
{
 switch (VAR_12) {
 case 'p':
  VAR_3 = FUNC_1(VAR_13, ((void*)0), 0);
  break;
 case 'S':
  VAR_8 = FUNC_1(VAR_13, ((void*)0), 0);
  break;
 case 'l':
  VAR_5 = FUNC_1(VAR_13, ((void*)0), 0);
  break;
 case 'L':
  VAR_2 = FUNC_1(VAR_13, ((void*)0), 0);
  break;
 case 'R':
  VAR_9 = 1;
  if (-1 == FUNC_0(VAR_13, VAR_6))
   return -1;
  break;
 case 'T':
  VAR_10 = 1;
  if (-1 == FUNC_0(VAR_13, VAR_7))
   return -1;
  break;
 case 'D':
  VAR_1 = 1;
  break;
 case 'Q':
  VAR_4 = 1;
  break;
 case 'y':
  VAR_0 = 1;
  break;
 default:
  return -1;
 }
 return 0;
}
