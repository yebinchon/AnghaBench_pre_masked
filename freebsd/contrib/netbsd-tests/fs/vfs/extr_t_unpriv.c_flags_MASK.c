
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_flags; } ;
typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char const*,int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char const*,struct stat*) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static void
FUNC_14(const atf_tc_t *VAR_7, const char *VAR_8)
{
 const char *VAR_9 = "file.test";
 int VAR_10, VAR_11;
 struct stat VAR_12;

 FUNC_0();

 if ((VAR_10 = FUNC_10(VAR_9, VAR_3|VAR_2, 0666)) == -1)
  FUNC_4("open");
 if (FUNC_9(VAR_10) == -1)
  FUNC_4("close");

 if (FUNC_12(VAR_9, &VAR_12) == -1)
  FUNC_4("stat");
 if (FUNC_2(VAR_7))
  FUNC_3("PR kern/47656: Test known to be broken");
 if (FUNC_8(VAR_9, VAR_12.st_flags) == -1) {
  if (VAR_6 == VAR_0)
   FUNC_5("file flags not supported by file system");
  FUNC_4("chflags");
 }

 VAR_11 = VAR_12.st_flags | VAR_5;

 FUNC_7(VAR_4);
 if (FUNC_11(1) == -1)
  FUNC_4("setuid");
 VAR_11 |= VAR_5;
 if (FUNC_8(VAR_9, VAR_11) != -1 || VAR_6 != VAR_1)
  FUNC_4("chflags");
 FUNC_6();

 if (FUNC_8(VAR_9, VAR_11) == -1)
  FUNC_4("chflags");

 VAR_11 &= ~VAR_5;
 if (FUNC_8(VAR_9, VAR_11) == -1)
  FUNC_4("chflags");

 if (FUNC_13(VAR_9) == -1)
  FUNC_4("unlink");

 FUNC_1();
}
