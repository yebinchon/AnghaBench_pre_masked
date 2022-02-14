
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token_key ;
typedef int token_dir ;
typedef int key_t ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;

key_t FUNC_10(int VAR_4)
{
 int VAR_5;
 char VAR_6[64], VAR_7[64];
 char *VAR_8;
 key_t VAR_9;

 FUNC_8(VAR_6, "/tmp/t_sysv.XXXXXX", sizeof(VAR_6));
 VAR_8 = FUNC_4(VAR_6);
 FUNC_0(VAR_8 != ((void*)0), "mkdtemp() failed: %d", VAR_3);

 FUNC_8(VAR_7, VAR_8, sizeof(VAR_7));
 FUNC_8(VAR_6, VAR_8, sizeof(VAR_6));
 FUNC_7(VAR_6, "/token_key", sizeof(VAR_6));



 VAR_5 = FUNC_5(VAR_6, VAR_2 | VAR_0 | VAR_1, 0600);
 if (VAR_5 == -1) {
  FUNC_6(VAR_8);
  FUNC_1("open() of temp file failed: %d", VAR_3);
  return (key_t)-1;
 } else
  FUNC_2(VAR_5);

 VAR_9 = FUNC_3(VAR_6, VAR_4);

 FUNC_0(FUNC_9(VAR_6) != -1, "unlink() failed: %d", VAR_3);
 FUNC_0(FUNC_6(VAR_7) != -1, "rmdir() failed: %d", VAR_3);

 return VAR_9;
}
