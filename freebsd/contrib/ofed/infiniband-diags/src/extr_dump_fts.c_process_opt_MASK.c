
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_4, int VAR_5, char *VAR_6)
{
 switch (VAR_5) {
 case 'a':
  VAR_1++;
  break;
 case 'M':
  VAR_2++;
  break;
 case 'n':
  VAR_0++;
  break;
 case 1:
  VAR_3 = FUNC_0(VAR_6);
  break;
 default:
  return -1;
 }
 return 0;
}
