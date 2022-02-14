
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int read_more_deferred_cb; int bufev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,struct evhttp_connection*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct evhttp_connection*) ;

void
FUNC_7(struct evhttp_connection *VAR_6)
{

 FUNC_0(VAR_6->bufev, VAR_2);
 FUNC_1(VAR_6->bufev, VAR_1);
 VAR_6->state = VAR_0;

 FUNC_3(VAR_6->bufev,
     VAR_4,
     VAR_5,
     VAR_3,
     VAR_6);



 if (FUNC_4(FUNC_2(VAR_6->bufev))) {
  FUNC_5(FUNC_6(VAR_6),
      &VAR_6->read_more_deferred_cb);
 }
}
