
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(void *VAR_6, int VAR_7, char *VAR_8)
{
 switch (VAR_7) {
 case 'o':
  VAR_2 = FUNC_3(VAR_8, 0, 0);
  break;
 case 'S':
  VAR_3++;
  break;
 case 25:
  if (!FUNC_2(VAR_0, VAR_8, &VAR_1)) {
   FUNC_0(VAR_4, "dgid format is wrong!\n");
   FUNC_1();
   return 1;
  }
  VAR_5 = 1;
  break;
 default:
  return -1;
 }
 return 0;
}
