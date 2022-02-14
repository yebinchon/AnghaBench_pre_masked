
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;


 int FUNC_0 (struct evbuffer*,char*,int) ;
 int FUNC_1 (struct evbuffer*,char*) ;
 int FUNC_2 (struct evbuffer*,int) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*) ;
 struct evbuffer* FUNC_5 () ;
 scalar_t__ FUNC_6 (struct evbuffer*,int) ;
 int FUNC_7 (struct evbuffer*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(void *VAR_0)
{
 struct evbuffer *VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_5();
 FUNC_0(VAR_1, "1", 1);
 FUNC_7(VAR_1);
 FUNC_2(VAR_1, 2048);
 FUNC_7(VAR_1);
 FUNC_0(VAR_1, "2", 1);
 FUNC_7(VAR_1);
 FUNC_1(VAR_1, "3");
 FUNC_7(VAR_1);

 FUNC_8(FUNC_4(VAR_1) == 3);
 VAR_2 = (char *)FUNC_6(VAR_1, -1);
 FUNC_8(VAR_2[0] == '1');
 FUNC_8(VAR_2[1] == '2');
 FUNC_8(VAR_2[2] == '3');
end:
 FUNC_3(VAR_1);
}
