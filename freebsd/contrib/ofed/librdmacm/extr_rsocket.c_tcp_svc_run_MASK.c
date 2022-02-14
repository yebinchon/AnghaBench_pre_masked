
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rs_svc_msg {int status; } ;
struct rs_svc {int cnt; TYPE_1__** rss; int * sock; scalar_t__* contexts; } ;
struct pollfd {scalar_t__ revents; int events; int fd; } ;
struct TYPE_2__ {scalar_t__ keepalive_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct rs_svc*,int) ;
 int FUNC_3 (struct rs_svc*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__* VAR_1 ;
 int FUNC_5 (int ,struct rs_svc_msg*,int) ;

__attribute__((used)) static void *FUNC_6(void *VAR_2)
{
 struct rs_svc *VAR_3 = VAR_2;
 struct rs_svc_msg VAR_4;
 struct pollfd VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_3, 16);
 if (VAR_9) {
  VAR_4.status = VAR_9;
  FUNC_5(VAR_3->sock[1], &VAR_4, sizeof VAR_4);
  return (void *) (uintptr_t) VAR_9;
 }

 VAR_1 = VAR_3->contexts;
 VAR_5.fd = VAR_3->sock[1];
 VAR_5.events = VAR_0;
 VAR_10 = -1;
 do {
  FUNC_0(&VAR_5, 1, VAR_10 * 1000);
  if (VAR_5.revents)
   FUNC_3(VAR_3);

  VAR_6 = FUNC_1();
  VAR_7 = ~0;
  for (VAR_8 = 1; VAR_8 <= VAR_3->cnt; VAR_8++) {
   if (VAR_1[VAR_8] <= VAR_6) {
    FUNC_4(VAR_3->rss[VAR_8]);
    VAR_1[VAR_8] =
     VAR_6 + VAR_3->rss[VAR_8]->keepalive_time;
   }
   if (VAR_1[VAR_8] < VAR_7)
    VAR_7 = VAR_1[VAR_8];
  }
  VAR_10 = (int) (VAR_7 - VAR_6);
 } while (VAR_3->cnt >= 1);

 return ((void*)0);
}
