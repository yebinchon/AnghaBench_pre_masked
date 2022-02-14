
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct cpu_usage_timer {int dummy; } ;
typedef int evutil_socket_t ;
typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct event*,int *) ;
 int FUNC_3 (struct event_base*) ;
 int FUNC_4 (struct event_base*) ;
 struct event_base* FUNC_5 () ;
 int FUNC_6 (struct event*) ;
 struct event* FUNC_7 (struct event_base*,int ,int,int ,struct event**) ;
 int FUNC_8 (struct event*,struct timeval*) ;
 struct event* FUNC_9 (struct event_base*,int ,struct event**) ;
 int FUNC_10 (int ,int ,int ,int *) ;
 int FUNC_11 (struct cpu_usage_timer*,double*,double*,double*) ;
 int FUNC_12 (char*,int,int,double) ;
 int FUNC_13 (struct cpu_usage_timer*) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_14(int VAR_6, char **VAR_7)
{
 struct event* VAR_8;
 struct event* VAR_9;
 struct event_base* VAR_10;

 evutil_socket_t VAR_11[2];
 struct timeval VAR_12;
 struct cpu_usage_timer VAR_13;

 double VAR_14, VAR_15, VAR_16;
 if (FUNC_10(VAR_0, VAR_3, 0, VAR_11) == -1)
  return (1);


 if (!(VAR_10 = FUNC_5()))
  return (1);


 VAR_9 = FUNC_9(VAR_10,VAR_4,&VAR_9);

 VAR_8 = FUNC_7(VAR_10,VAR_11[1],VAR_2 | VAR_1, VAR_5, &VAR_8);

 VAR_12.tv_sec = 1;
 VAR_12.tv_usec = 500*1000;

 FUNC_8(VAR_9, &VAR_12);

 FUNC_2(VAR_8, ((void*)0));

 FUNC_13(&VAR_13);

 FUNC_3(VAR_10);

 FUNC_6(VAR_8);
 FUNC_6(VAR_9);
 FUNC_4(VAR_10);

 FUNC_11(&VAR_13, &VAR_15, &VAR_16, &VAR_14);




 FUNC_12("usec used=%d, usec passed=%d, cpu usage=%.2f%%\n",
     (int)(VAR_16*1e6),
     (int)(VAR_15*1e6),
     VAR_14*100);

 if (VAR_14 > 50.0)
   return 1;

 return 0;
}
