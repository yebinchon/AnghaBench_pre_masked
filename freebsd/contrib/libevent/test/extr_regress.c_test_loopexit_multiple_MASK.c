
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct event_base {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct event_base*) ;
 int FUNC_2 (struct event_base*) ;
 int FUNC_3 (struct event_base*) ;
 int FUNC_4 (struct event_base*) ;
 int FUNC_5 (struct event_base*,struct timeval*) ;
 struct event_base* FUNC_6 () ;
 int FUNC_7 (struct timeval*,int *) ;
 int FUNC_8 (char*) ;
 int VAR_0 ;
 int FUNC_9 (struct timeval*,struct timeval*,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(void)
{
 struct timeval VAR_1, VAR_2, VAR_3;
 struct event_base *VAR_4;

 FUNC_8("Loop Multiple exit: ");

 VAR_4 = FUNC_6();

 VAR_1.tv_usec = 200*1000;
 VAR_1.tv_sec = 0;
 FUNC_5(VAR_4, &VAR_1);

 VAR_1.tv_usec = 0;
 VAR_1.tv_sec = 3;
 FUNC_5(VAR_4, &VAR_1);

 FUNC_7(&VAR_2, ((void*)0));
 FUNC_1(VAR_4);
 FUNC_7(&VAR_3, ((void*)0));

 FUNC_10(FUNC_4(VAR_4));
 FUNC_10(!FUNC_3(VAR_4));

 FUNC_2(VAR_4);

 FUNC_9(&VAR_2, &VAR_3, 200);

 VAR_0 = 1;

end:
 FUNC_0();
}
