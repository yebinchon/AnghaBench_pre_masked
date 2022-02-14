
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int *) ;
 void* VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 void* FUNC_3 (char*,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(void *VAR_7, int VAR_8, char *VAR_9)
{
 switch (VAR_8) {
 case 'c':
  VAR_1 = FUNC_3(VAR_9, 0, 0);
  break;
 case 'f':
  VAR_3++;
  break;
 case 'o':
  VAR_4 = FUNC_3(VAR_9, 0, 0);
  break;
 case 'S':
  VAR_5++;
  break;
 case 25:
  if (!FUNC_1(VAR_0, VAR_9, &VAR_2)) {
   FUNC_2("dgid format is wrong!\n");
   FUNC_0();
   return 1;
  }
  VAR_6 = 1;
  break;
 default:
  return -1;
 }
 return 0;
}
