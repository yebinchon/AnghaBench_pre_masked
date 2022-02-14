
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct event*,struct timeval*) ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 (struct event*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct event VAR_3, VAR_4;
 struct timeval VAR_5;

 FUNC_7("Loop break: ");

 VAR_5.tv_sec = 0;
 VAR_5.tv_usec = 0;
 FUNC_6(&VAR_3, VAR_0, ((void*)0));
 FUNC_4(&VAR_3, &VAR_5);
 FUNC_6(&VAR_4, VAR_1, ((void*)0));
 FUNC_4(&VAR_4, &VAR_5);

 FUNC_3();

 FUNC_8(!FUNC_2(VAR_2));
 FUNC_8(FUNC_1(VAR_2));

 FUNC_5(&VAR_3);
 FUNC_5(&VAR_4);

end:
 FUNC_0();
}
