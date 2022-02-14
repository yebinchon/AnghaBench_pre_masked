
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char,size_t) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int,int) ;
 long FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(const atf_tc_t *VAR_6, const char *VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10;
 long VAR_11;
 size_t VAR_12;

 if (FUNC_0(VAR_6))
  FUNC_2("rename not supported by file system");

 if (FUNC_6(VAR_7) == -1)
  FUNC_1("chdir mountpoint");

 VAR_11 = FUNC_9(".", VAR_3);
 if (VAR_11 == -1)
  FUNC_1("pathconf");

 VAR_12 = VAR_11 + 1;
 VAR_8 = FUNC_4(VAR_12+1);
 if (VAR_8 == ((void*)0))
  FUNC_1("malloc");

 FUNC_5(VAR_8, 'a', VAR_12);
 *(VAR_8+VAR_12) = '\0';

 VAR_10 = FUNC_8("dummy", VAR_2|VAR_1, 0666);
 if (VAR_10 == -1)
  FUNC_1("open");
 if (FUNC_7(VAR_10) == -1)
  FUNC_1("close");

 VAR_11 = FUNC_9(".", VAR_4);
 if (VAR_11 == -1)
  FUNC_1("pathconf");

 VAR_9 = FUNC_10("dummy", VAR_8);
 if (VAR_11 != 0 && (VAR_9 != -1 || VAR_5 != VAR_0))
  FUNC_1("rename");

 if (VAR_11 == 0 && FUNC_11(VAR_8) == -1)
  FUNC_1("unlink");

 FUNC_3(VAR_8);

 FUNC_6("/");
}
