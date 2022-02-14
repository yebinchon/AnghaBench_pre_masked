
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MINT ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (char*,int,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int * VAR_4 ;
 int FUNC_8 (int *,int *,char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(void)
{
 const char VAR_6[] = "2a";
 MINT *VAR_7;
 char *VAR_8;

 FUNC_0(VAR_1, VAR_0, VAR_4);
 FUNC_8(VAR_2, VAR_4, "madd0");
 FUNC_0(VAR_4, VAR_0, VAR_4);
 FUNC_8(VAR_3, VAR_4, "madd1");
 FUNC_3(VAR_4, VAR_0, VAR_4);
 FUNC_8(VAR_2, VAR_4, "msub0");
 FUNC_3(VAR_4, VAR_0, VAR_4);
 FUNC_8(VAR_1, VAR_4, "msub1");
 FUNC_2(VAR_1, VAR_4);
 FUNC_8(VAR_1, VAR_4, "move0");

 VAR_7 = FUNC_5(VAR_6);
 FUNC_8(VAR_1, VAR_7, "xtom");
 VAR_8 = FUNC_4(VAR_7);
 if (FUNC_7(VAR_6, VAR_8) == 0)
  FUNC_6("ok %d - %s\n", ++VAR_5, "mtox0");
 else
  FUNC_6("not ok %d - %s\n", ++VAR_5, "mtox0");
 FUNC_1(VAR_7);
}
