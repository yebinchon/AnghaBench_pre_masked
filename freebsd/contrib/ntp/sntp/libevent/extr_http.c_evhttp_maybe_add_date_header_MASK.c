
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct evkeyvalq {int dummy; } ;
typedef int date ;


 int FUNC_0 (struct evkeyvalq*,char*,char*) ;
 int * FUNC_1 (struct evkeyvalq*,char*) ;
 struct tm* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct tm*) ;
 scalar_t__ FUNC_4 (char*,int,char*,struct tm*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct evkeyvalq *VAR_0)
{
 if (FUNC_1(VAR_0, "Date") == ((void*)0)) {
  char VAR_1[50];

  struct tm VAR_2;

  struct tm *VAR_3;
  time_t VAR_4 = FUNC_5(((void*)0));



  FUNC_3(&VAR_4, &VAR_2);
  VAR_3 = &VAR_2;

  if (FUNC_4(VAR_1, sizeof(VAR_1),
   "%a, %d %b %Y %H:%M:%S GMT", VAR_3) != 0) {
   FUNC_0(VAR_0, "Date", VAR_1);
  }
 }
}
