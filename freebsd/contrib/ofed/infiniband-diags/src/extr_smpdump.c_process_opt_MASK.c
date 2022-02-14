
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(void *VAR_4, int VAR_5, char *VAR_6)
{
 switch (VAR_5) {
 case 's':
  VAR_2++;
  break;
 case 'D':
  VAR_3 = VAR_1;
  break;
 case 'L':
  VAR_3 = VAR_0;
  break;
 default:
  return -1;
 }
 return 0;
}
