
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct event*,struct timeval*) ;
 int FUNC_1 (struct event*,int ,int,int,int ,int*) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct timeval*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct timeval VAR_4;
 struct event VAR_5;
 int VAR_6 = 0;

 FUNC_4(&VAR_4);
 VAR_4.tv_usec = 10000;

 FUNC_1(&VAR_5, VAR_2, -1, VAR_1|VAR_0,
     VAR_3, &VAR_6);
 FUNC_0(&VAR_5, &VAR_4);

 FUNC_3();

 FUNC_2(&VAR_5);
}
