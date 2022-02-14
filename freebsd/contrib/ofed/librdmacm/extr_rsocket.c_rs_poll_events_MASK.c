
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ type; int cq_wait_lock; } ;
struct pollfd {scalar_t__ revents; int events; int fd; } ;
typedef int nfds_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rsocket*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct rsocket* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct rsocket*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct rsocket*,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct pollfd *VAR_3, struct pollfd *VAR_4, nfds_t VAR_5)
{
 struct rsocket *VAR_6;
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (!VAR_3[VAR_7].revents)
   continue;

  VAR_6 = FUNC_3(&VAR_1, VAR_4[VAR_7].fd);
  if (VAR_6) {
   FUNC_1(&VAR_6->cq_wait_lock);
   if (VAR_6->type == VAR_0)
    FUNC_4(VAR_6);
   else
    FUNC_0(VAR_6);
   FUNC_2(&VAR_6->cq_wait_lock);
   VAR_4[VAR_7].revents = FUNC_5(VAR_6, VAR_4[VAR_7].events, 1, VAR_2);
  } else {
   VAR_4[VAR_7].revents = VAR_3[VAR_7].revents;
  }
  if (VAR_4[VAR_7].revents)
   VAR_8++;
 }
 return VAR_8;
}
