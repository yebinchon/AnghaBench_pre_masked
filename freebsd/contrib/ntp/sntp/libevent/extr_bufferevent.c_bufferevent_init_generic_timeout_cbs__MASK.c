
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int ev_base; int ev_write; int ev_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,int ,int ,struct bufferevent*) ;

void
FUNC_1(struct bufferevent *VAR_3)
{
 FUNC_0(&VAR_3->ev_read, VAR_3->ev_base, -1, VAR_0,
     VAR_1, VAR_3);
 FUNC_0(&VAR_3->ev_write, VAR_3->ev_base, -1, VAR_0,
     VAR_2, VAR_3);
}
