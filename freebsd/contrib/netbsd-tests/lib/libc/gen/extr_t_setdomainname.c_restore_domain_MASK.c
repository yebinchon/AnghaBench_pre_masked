
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int domain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 char VAR_3[VAR_1];
 int VAR_4;
 ssize_t VAR_5, VAR_6 = 0;

 FUNC_2(VAR_3, 0, sizeof(VAR_3));
 if ((VAR_4 = FUNC_3(VAR_0, VAR_2)) < 0)
  FUNC_1(1, "open");
 while ((VAR_5 = FUNC_4(VAR_4, VAR_3 + VAR_6, sizeof(VAR_3) - VAR_6)) > 0)
  VAR_6 += VAR_5;
 if (VAR_5 < 0)
  FUNC_1(1, "read");
 if (FUNC_5(VAR_3, VAR_6) != 0)
  FUNC_1(1, "setdomainname");
 FUNC_0(VAR_4);
}
