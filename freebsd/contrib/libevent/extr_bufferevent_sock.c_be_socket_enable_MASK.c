
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int timeout_write; int ev_write; int timeout_read; int ev_read; } ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct bufferevent *VAR_2, short VAR_3)
{
 if (VAR_3 & VAR_0 &&
     FUNC_0(&VAR_2->ev_read, &VAR_2->timeout_read) == -1)
   return -1;
 if (VAR_3 & VAR_1 &&
     FUNC_0(&VAR_2->ev_write, &VAR_2->timeout_write) == -1)
   return -1;
 return 0;
}
