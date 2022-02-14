
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCKET ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(SOCKET VAR_1, char *VAR_2, int VAR_3)
{





 if (FUNC_1(VAR_1, VAR_0))
 {
  FUNC_2("shutdown(): ", VAR_2, VAR_3);

  FUNC_0(VAR_1);
  return -1;
 }

 FUNC_0(VAR_1);
 return 0;
}
