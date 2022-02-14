
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int dummy; } ;
struct basic_test_data {int base; } ;


 scalar_t__ FUNC_0 (struct evhttp*,char*,int) ;
 int FUNC_1 (struct evhttp*) ;
 struct evhttp* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct basic_test_data *VAR_2 = VAR_1;
 int VAR_3 = -1;
 struct evhttp *VAR_4 = ((void*)0);


 for (VAR_3 = 0; VAR_3 < 50; ++VAR_3) {
  VAR_4 = FUNC_2(VAR_2->base);
  if (FUNC_0(VAR_4, "127.0.0.1", 65535 - VAR_3) == 0) {
   VAR_0 = 1;
   FUNC_1(VAR_4);
   return;
  }
  FUNC_1(VAR_4);
 }

 FUNC_3("Couldn't get a high port");
}
