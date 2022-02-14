
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_3, int VAR_4, char *VAR_5)
{
 switch (VAR_4) {
 case 'a':
  VAR_0 = FUNC_0(VAR_5, 0, 0);
  break;
 case 's':
  VAR_2 = FUNC_0(VAR_5, 0, 0);
  break;
 case 'p':
  VAR_1 = FUNC_0(VAR_5, 0, 0);
  break;
 default:
  return -1;
 }
 return 0;
}
