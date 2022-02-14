
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int ev_write; int timeout_write; int ev_read; int timeout_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(struct bufferevent *VAR_2)
{
 int VAR_3 = 0;
 if (FUNC_1(&VAR_2->ev_read, VAR_0, ((void*)0))) {
  if (FUNC_3(&VAR_2->timeout_read)) {
       if (FUNC_0(&VAR_2->ev_read, &VAR_2->timeout_read) < 0)
        VAR_3 = -1;
  } else {
   FUNC_2(&VAR_2->ev_read);
  }
 }
 if (FUNC_1(&VAR_2->ev_write, VAR_1, ((void*)0))) {
  if (FUNC_3(&VAR_2->timeout_write)) {
   if (FUNC_0(&VAR_2->ev_write, &VAR_2->timeout_write) < 0)
    VAR_3 = -1;
  } else {
   FUNC_2(&VAR_2->ev_write);
  }
 }
 return VAR_3;
}
