
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_signal {int events; } ;
struct eventop {int (* add ) (struct event_base*,int,int ,int ,int *) ;} ;
struct event_base {struct eventop* evsigsel; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct event_base*,int,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct event_base *VAR_1,
    int VAR_2, struct evmap_signal *VAR_3, void *VAR_4)
{
 const struct eventop *VAR_5 = VAR_1->evsigsel;
 int *VAR_6 = VAR_4;

 if (!FUNC_0(&VAR_3->events)) {
  if (VAR_5->add(VAR_1, VAR_2, 0, VAR_0, ((void*)0)) == -1)
   *VAR_6 = -1;
 }
 return 0;
}
