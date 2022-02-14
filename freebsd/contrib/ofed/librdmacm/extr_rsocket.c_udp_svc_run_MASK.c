
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rs_svc_msg {int status; } ;
struct rs_svc {int cnt; int * rss; int * sock; TYPE_1__* contexts; } ;
struct TYPE_3__ {scalar_t__ revents; int events; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (struct rs_svc*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rs_svc*) ;
 int FUNC_4 (int ,struct rs_svc_msg*,int) ;

__attribute__((used)) static void *FUNC_5(void *VAR_2)
{
 struct rs_svc *VAR_3 = VAR_2;
 struct rs_svc_msg VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_3, 4);
 if (VAR_6) {
  VAR_4.status = VAR_6;
  FUNC_4(VAR_3->sock[1], &VAR_4, sizeof VAR_4);
  return (void *) (uintptr_t) VAR_6;
 }

 VAR_1 = VAR_3->contexts;
 VAR_1[0].fd = VAR_3->sock[1];
 VAR_1[0].events = VAR_0;
 do {
  for (VAR_5 = 0; VAR_5 <= VAR_3->cnt; VAR_5++)
   VAR_1[VAR_5].revents = 0;

  FUNC_0(VAR_1, VAR_3->cnt + 1, -1);
  if (VAR_1[0].revents)
   FUNC_3(VAR_3);

  for (VAR_5 = 1; VAR_5 <= VAR_3->cnt; VAR_5++) {
   if (VAR_1[VAR_5].revents)
    FUNC_2(VAR_3->rss[VAR_5]);
  }
 } while (VAR_3->cnt >= 1);

 return ((void*)0);
}
