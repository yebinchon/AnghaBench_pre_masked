
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,char*,int) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3)
{
 char VAR_4[4096];
 ssize_t VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_2(VAR_3, VAR_0)) != -1) {
  FUNC_1(VAR_2);
  while ((VAR_5 = FUNC_3(VAR_6, VAR_4, sizeof(VAR_4))) > 0)
   FUNC_4(VAR_1, VAR_4, VAR_5);
  FUNC_0(VAR_6);
 }
}
