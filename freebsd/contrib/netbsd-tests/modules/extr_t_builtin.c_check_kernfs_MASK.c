
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static bool
FUNC_4(void)
{
 char VAR_2[16];
 bool VAR_3 = 1;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 == -1)
  return 0;
 if (FUNC_3(VAR_4, VAR_2, sizeof(VAR_2)) < 1)
  VAR_3 = 0;
 FUNC_0(FUNC_1(VAR_4));

 return VAR_3;
}
