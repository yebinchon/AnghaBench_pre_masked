
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int output; int input; int ev_write; int ev_read; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bufferevent*) ;

void
FUNC_3(struct bufferevent *VAR_0)
{
 FUNC_1(&VAR_0->ev_read);
 FUNC_1(&VAR_0->ev_write);

 FUNC_0(VAR_0->input);
 FUNC_0(VAR_0->output);

 FUNC_2(VAR_0);
}
