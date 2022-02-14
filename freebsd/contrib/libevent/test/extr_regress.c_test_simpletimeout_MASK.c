
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct event {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct event*,struct timeval*) ;
 int FUNC_3 (struct event*,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct timeval VAR_4;
 struct event VAR_5;

 FUNC_6("Simple timeout: ");

 VAR_4.tv_usec = 200*1000;
 VAR_4.tv_sec = 0;
 FUNC_5(&VAR_0);
 FUNC_3(&VAR_5, VAR_2, ((void*)0));
 FUNC_2(&VAR_5, &VAR_4);

 FUNC_4(&VAR_3, ((void*)0));
 FUNC_1();
 FUNC_7(&VAR_3, &VAR_0, 200);

 VAR_1 = 1;
end:
 FUNC_0();
}
