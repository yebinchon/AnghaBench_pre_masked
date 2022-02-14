
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_1__ it_value; } ;
struct event {int dummy; } ;
typedef int itv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct event*,int *) ;
 int FUNC_3 (struct event*) ;
 int FUNC_4 (struct event*,int ,int ,struct event*) ;
 int FUNC_5 (struct itimerval*,int ,int) ;
 int FUNC_6 (int ,struct itimerval*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(int VAR_4)
{
 struct event VAR_5;
 struct itimerval VAR_6;

 FUNC_4(&VAR_5, VAR_1, VAR_2, &VAR_5);
 FUNC_2(&VAR_5, ((void*)0));

 if (VAR_4) {
  FUNC_3(&VAR_5);
  FUNC_2(&VAR_5, ((void*)0));
 }

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.it_value.tv_sec = 0;
 VAR_6.it_value.tv_usec = 100000;
 if (FUNC_6(VAR_0, &VAR_6, ((void*)0)) == -1)
  goto skip_simplesignal;

 FUNC_1();
 skip_simplesignal:
 if (FUNC_3(&VAR_5) == -1)
  VAR_3 = 0;

 FUNC_0();
}
