
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int,int ,int ,int*,int) ;
 char* FUNC_2 (int ) ;

int
FUNC_3(int VAR_3)
{
 int VAR_4 = 1;

 if (FUNC_1(VAR_3, VAR_0, VAR_1, &VAR_4, sizeof(VAR_4)) == -1) {
  FUNC_0("setsockopt SO_REUSEADDR fd %d: %s", VAR_3, FUNC_2(VAR_2));
  return -1;
 }
 return 0;
}
