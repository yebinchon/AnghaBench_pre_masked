
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int * member_10; } ;


 int FUNC_0 (int ,char*,char const*,char const*) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int * FUNC_2 (char const*,char const*,struct tm*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 struct tm VAR_2 = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, ((void*)0) };





 FUNC_1(FUNC_2(VAR_0, VAR_1, &VAR_2) == ((void*)0), "strptime(\"%s\", "
     "\"%s\", &tm) should fail, but it didn't", VAR_0, VAR_1);

}
