
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t th_p; scalar_t__ data; int event; } ;
struct pthread {TYPE_1__ event_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 struct pthread* VAR_2 ;

void
FUNC_3(struct pthread *VAR_3, struct pthread *VAR_4)
{
 VAR_3->event_buf.event = VAR_0;
 VAR_3->event_buf.th_p = (uintptr_t)VAR_4;
 VAR_3->event_buf.data = 0;
 FUNC_0(VAR_3, &VAR_1);
 VAR_2 = VAR_3;
 FUNC_2();
 VAR_2 = ((void*)0);
 FUNC_1(VAR_3, &VAR_1);
}
