
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pb2 ;
typedef int pb ;
typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char const*) ;

__attribute__((used)) static void
FUNC_8(const atf_tc_t *VAR_6, const char *VAR_7)
{
 char VAR_8[VAR_1], VAR_9[VAR_1];
 int VAR_10, VAR_11;

 VAR_4;


 FUNC_7(VAR_8, sizeof(VAR_8), "%s/dir", VAR_7);
 if (FUNC_3(VAR_8, 0777) == -1)
  FUNC_1("mkdir");

 FUNC_7(VAR_9, sizeof(VAR_9), "%s/dir/file", VAR_7);
 VAR_10 = FUNC_4(VAR_9, VAR_3 | VAR_2, 0777);
 if (VAR_10 == -1)
  FUNC_1("create file");
 FUNC_2(VAR_10);

 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11 != -1 || VAR_5 != VAR_0)
  FUNC_0("non-empty directory removed succesfully");

 if (FUNC_6(VAR_9) == -1)
  FUNC_1("cannot remove dir/file");

 if (FUNC_5(VAR_8) == -1)
  FUNC_1("remove directory");
}
