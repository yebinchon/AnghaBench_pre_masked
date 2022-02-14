
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ off_t ;
typedef int atf_tc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(const atf_tc_t *VAR_1, const char *VAR_2)
{
 const char *VAR_3, *VAR_4;
 int VAR_5;
 struct stat VAR_6;

 VAR_0;

 FUNC_2();

 VAR_3 = "source";
 VAR_4 = "destination";

 VAR_5 = FUNC_6(VAR_3, VAR_4);
 FUNC_1(VAR_5 != -1);
 VAR_5 = FUNC_5(VAR_4, &VAR_6);
 FUNC_1(VAR_5 != -1);

 FUNC_0(FUNC_4(VAR_6.st_mode) != 0);
 FUNC_0(VAR_6.st_size == (off_t)FUNC_7(VAR_3));

 FUNC_3();
}
