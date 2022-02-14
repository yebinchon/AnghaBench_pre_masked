
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char**,int,int *,int ,int **,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,...) ;
 int VAR_3 ;
 int FUNC_6 (int *,char*,int ,int) ;

__attribute__((used)) static void
FUNC_7(char *VAR_4, char *VAR_5, int VAR_6)
{
 tdata_t *VAR_7;

 if (FUNC_2(&VAR_4, 1, ((void*)0), VAR_2, &VAR_7, 1) == 0)
  FUNC_5("No CTF data found in source file %s\n", VAR_4);

 VAR_3 = FUNC_1(VAR_5, ".ctf");
 FUNC_6(VAR_7, VAR_5, VAR_3, VAR_0 | VAR_1 | VAR_6);
 if (FUNC_3(VAR_3, VAR_5) != 0) {
  FUNC_5("Couldn't rename temp file %s to %s", VAR_3,
      VAR_5);
 }
 FUNC_0(VAR_3);
 FUNC_4(VAR_7);
}
