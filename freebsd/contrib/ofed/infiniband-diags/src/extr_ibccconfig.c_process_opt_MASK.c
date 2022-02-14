
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(void *VAR_5, int VAR_6, char *VAR_7)
{
 switch (VAR_6) {
 case 'c':
  VAR_1 = (uint64_t) FUNC_3(VAR_7, 0, 0);
  break;
 case 25:
  if (!FUNC_2(VAR_0, VAR_7, &VAR_2)) {
   FUNC_0(VAR_3, "dgid format is wrong!\n");
   FUNC_1();
   return 1;
  }
  VAR_4 = 1;
  break;
 default:
  return -1;
 }
 return 0;
}
