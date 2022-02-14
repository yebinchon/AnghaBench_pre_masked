
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char,size_t) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,int) ;
 long FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(const atf_tc_t *VAR_6, const char *VAR_7)
{
 char *VAR_8;
 int VAR_9;
 long VAR_10;
 size_t VAR_11;

 if (FUNC_4(VAR_7) == -1)
  FUNC_0("chdir mountpoint");

 VAR_10 = FUNC_7(".", VAR_3);
 if (VAR_10 == -1)
  FUNC_0("pathconf");

 VAR_11 = VAR_10 + 1;
 VAR_8 = FUNC_2(VAR_11+1);
 if (VAR_8 == ((void*)0))
  FUNC_0("malloc");

 FUNC_3(VAR_8, 'a', VAR_11);
 *(VAR_8+VAR_11) = '\0';

 VAR_10 = FUNC_7(".", VAR_4);
 if (VAR_10 == -1)
  FUNC_0("pathconf");

 VAR_9 = FUNC_6(VAR_8, VAR_2|VAR_1, 0666);
 if (VAR_10 != 0 && (VAR_9 != -1 || VAR_5 != VAR_0))
  FUNC_0("open");

 if (VAR_10 == 0 && FUNC_5(VAR_9) == -1)
  FUNC_0("close");
 if (VAR_10 == 0 && FUNC_8(VAR_8) == -1)
  FUNC_0("unlink");

 FUNC_1(VAR_8);

 FUNC_4("/");
}
