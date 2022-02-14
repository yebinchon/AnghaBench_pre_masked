
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int acl_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char*,size_t,int,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_8 (char const*,char*) ;

acl_t
FUNC_9(const char *VAR_3)
{
 FILE *VAR_4;
 size_t VAR_5;
 char VAR_6[VAR_0+1];

 if (VAR_3 == ((void*)0))
  FUNC_1(1, "(null) filename in get_acl_from_file()");

 if (FUNC_8(VAR_3, "-") == 0) {
  if (VAR_1)
   FUNC_1(1, "cannot specify more than one stdin");
  VAR_4 = VAR_2;
  VAR_1 = 1;
 } else {
  VAR_4 = FUNC_6(VAR_3, "r");
  if (VAR_4 == ((void*)0))
   FUNC_1(1, "fopen() %s failed", VAR_3);
 }

 VAR_5 = FUNC_7(VAR_6, (size_t)1, sizeof(VAR_6) - 1, VAR_4);
 VAR_6[VAR_5] = '\0';
 if (FUNC_5(VAR_4) != 0) {
  FUNC_3(VAR_4);
  FUNC_1(1, "error reading from %s", VAR_3);
 } else if (FUNC_4(VAR_4) == 0) {
  FUNC_3(VAR_4);
  FUNC_2(1, "line too long in %s", VAR_3);
 }

 FUNC_3(VAR_4);

 return (FUNC_0(VAR_6));
}
