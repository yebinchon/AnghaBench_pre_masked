
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct archive_string {int dummy; } ;
typedef int strtime ;


 int FUNC_0 (struct tm*,int *) ;
 int FUNC_1 (struct archive_string*,char*,size_t) ;
 struct tm* FUNC_2 (int *) ;
 struct tm* FUNC_3 (int *,struct tm*) ;
 size_t FUNC_4 (char*,int,char const*,struct tm*) ;

__attribute__((used)) static void
FUNC_5(struct archive_string *VAR_0, const char *VAR_1, time_t VAR_2)
{

 struct tm *VAR_3;



 char VAR_4[100];
 size_t VAR_5;







 if ((VAR_3 = FUNC_2(&VAR_2)) == ((void*)0))
  return;


 VAR_5 = FUNC_4(VAR_4, sizeof(VAR_4)-1, VAR_1, VAR_3);
 FUNC_1(VAR_0, VAR_4, VAR_5);
}
