
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int state; int bufev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct evhttp_connection*,int ,int *) ;
 int VAR_3 ;

void
FUNC_3(struct evhttp_connection *VAR_4)
{
 FUNC_0(VAR_4->bufev, VAR_2);
 FUNC_1(VAR_4->bufev, VAR_1);

 VAR_4->state = VAR_0;
 FUNC_2(VAR_4, VAR_3, ((void*)0));
}
