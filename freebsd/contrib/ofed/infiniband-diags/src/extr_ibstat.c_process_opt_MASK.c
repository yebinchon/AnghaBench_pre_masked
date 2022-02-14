
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(void *VAR_3, int VAR_4, char *VAR_5)
{
 switch (VAR_4) {
 case 'l':
  VAR_0++;
  break;
 case 's':
  VAR_2++;
  break;
 case 'p':
  VAR_1++;
  break;
 default:
  return -1;
 }
 return 0;
}
