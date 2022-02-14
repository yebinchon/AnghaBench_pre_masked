
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t,char*,struct tm*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(u_int64_t VAR_0, char *VAR_1, size_t VAR_2)
{
 time_t VAR_3;
 struct tm *VAR_4;

 VAR_3 = VAR_0;
 VAR_4 = FUNC_0(&VAR_3);
 if (VAR_4 == ((void*)0))
  FUNC_2(VAR_1, "<INVALID>", VAR_2);
 else {
  *VAR_1 = '\0';
  FUNC_1(VAR_1, VAR_2, "%Y%m%dT%H%M%S", VAR_4);
 }
}
