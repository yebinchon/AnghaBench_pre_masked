
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2, int VAR_3, char *VAR_4)
{
 switch (VAR_3) {
 case 'g':
  VAR_0 = 1;
  break;
 case 'l':
  VAR_1++;
  break;
 case 'L':
  VAR_1 = -100;
  break;
 default:
  return -1;
 }
 return 0;
}
