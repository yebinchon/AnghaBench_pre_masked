
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int buf ;
typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int) ;
 size_t FUNC_13 (int,char*,int) ;

__attribute__((used)) static void
FUNC_14(const atf_tc_t *VAR_6, const char *VAR_7)
{
 char VAR_8[8192];
 size_t VAR_9;
 ssize_t VAR_10 = 0;
 size_t VAR_11;
 int VAR_12, VAR_13 = 0;

 if (FUNC_1(VAR_6) || FUNC_2(VAR_6) || FUNC_3(VAR_6)) {
  FUNC_8("fs does not support explicit block allocation "
      "(GOP_ALLOC)");
 }

 VAR_11 = 0;
 if (FUNC_0(VAR_6))
  VAR_11 = VAR_2;

 if (FUNC_10(VAR_7) == -1)
  FUNC_7("chdir mountpoint");
 VAR_12 = FUNC_12("afile", VAR_3 | VAR_4);
 if (VAR_12 == -1)
  FUNC_7("create file");

 for (VAR_9 = 0; VAR_9 < VAR_1 + VAR_11; VAR_9 +=VAR_10) {
  FUNC_9(VAR_8, VAR_13++, sizeof(VAR_8));
  VAR_10 = FUNC_13(VAR_12, VAR_8, sizeof(VAR_8));
  if (VAR_10 == -1)
   break;
 }
 if (FUNC_4(VAR_6))
  FUNC_5("PR kern/47656: Test known to be broken");
 if (VAR_10 == -1) {
  if (VAR_5 != VAR_0)
   FUNC_7("write");
 } else {
  FUNC_6("filled file system over size limit");
 }

 FUNC_11(VAR_12);
 FUNC_10("/");
}
