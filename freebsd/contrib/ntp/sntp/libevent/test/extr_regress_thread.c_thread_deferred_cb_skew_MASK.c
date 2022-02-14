
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int member_0; int tv_sec; scalar_t__ tv_usec; int member_1; } ;
struct event_config {int dummy; } ;
struct event_base {int dummy; } ;
struct TYPE_2__ {struct event_base* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct event_base*) ;
 int FUNC_3 (struct event_base*) ;
 struct event_base* FUNC_4 (struct event_config*) ;
 int FUNC_5 (struct event_base*,int,int ,int ,int *,struct timeval*) ;
 int FUNC_6 (struct event_config*) ;
 struct event_config* FUNC_7 () ;
 int FUNC_8 (struct event_config*,int *,int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,struct timeval*) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(void *VAR_9)
{
 struct timeval VAR_10 = {1, 0};
 struct event_base *VAR_11 = ((void*)0);
 struct event_config *VAR_12 = ((void*)0);
 struct timeval VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_7();
 FUNC_11(VAR_12);
 FUNC_8(VAR_12, ((void*)0), 16, 0);

 VAR_11 = FUNC_4(VAR_12);
 FUNC_11(VAR_11);

 for (VAR_15 = 0; VAR_15 < VAR_1; ++VAR_15)
  VAR_3[VAR_15].queue = VAR_11;

 FUNC_9(&VAR_8, ((void*)0));
 FUNC_5(VAR_11, -1, VAR_0, VAR_6, ((void*)0),
   &VAR_10);
 FUNC_5(VAR_11, -1, VAR_0, VAR_5,
   ((void*)0), ((void*)0));
 FUNC_2(VAR_11);

 FUNC_10(&VAR_7, &VAR_8, &VAR_13);
 FUNC_1(("callback count, %u", VAR_2));
 VAR_14 =
     (unsigned)(VAR_13.tv_sec*1000000 + VAR_13.tv_usec);
 FUNC_1(("elapsed time, %u usec", VAR_14));



 FUNC_11(VAR_14 >= 600000 && VAR_14 <= 1400000);

end:
 for (VAR_15 = 0; VAR_15 < VAR_1; ++VAR_15)
  FUNC_0(VAR_4[VAR_15]);
 if (VAR_11)
  FUNC_3(VAR_11);
 if (VAR_12)
  FUNC_6(VAR_12);
}
