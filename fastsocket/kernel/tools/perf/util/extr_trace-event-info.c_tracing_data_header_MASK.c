
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 char VAR_2 ;
 int FUNC_2 (char,char) ;
 int FUNC_3 (char*) ;
 char FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
 char VAR_3[20];


 VAR_3[0] = 23;
 VAR_3[1] = 8;
 VAR_3[2] = 68;
 FUNC_1(VAR_3 + 3, "tracing", 7);

 FUNC_5(VAR_3, 10);

 FUNC_5(VAR_0, FUNC_3(VAR_0) + 1);


 if (FUNC_0())
  VAR_3[0] = 1;
 else
  VAR_3[0] = 0;

 FUNC_2(VAR_3[0], VAR_3[0]);

 FUNC_5(VAR_3, 1);


 VAR_3[0] = sizeof(long);
 FUNC_5(VAR_3, 1);


 VAR_2 = FUNC_4(VAR_1);
 FUNC_5(&VAR_2, 4);
}
