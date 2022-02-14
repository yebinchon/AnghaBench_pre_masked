
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_5, int VAR_6, char *VAR_7)
{
 switch (VAR_6) {
 case 1:
  VAR_4 = FUNC_0(VAR_7);
  break;
 case 'm':
  VAR_3++;
  VAR_2 = FUNC_1(VAR_7, 0, 0);
  break;
 case 'f':
  VAR_1++;
  break;
 case 'n':
  VAR_0 = 1;
  break;
 default:
  return -1;
 }
 return 0;
}
