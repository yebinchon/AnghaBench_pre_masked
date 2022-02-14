
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(int VAR_1)
{
 char VAR_2[16];
 int VAR_3;

 VAR_3 = FUNC_3(FUNC_2(VAR_1));
 if (VAR_3 == 0)
  FUNC_0 ("invalid tid");
 FUNC_4(VAR_2, sizeof(VAR_2), "%d", VAR_3);
 FUNC_1(VAR_0, VAR_2);
}
