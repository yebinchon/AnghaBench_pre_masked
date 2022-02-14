
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;
struct event_filter {struct pevent* pevent; } ;


 struct event_filter* FUNC_0 (int) ;
 int FUNC_1 (struct event_filter*,int ,int) ;
 int FUNC_2 (struct pevent*) ;

struct event_filter *FUNC_3(struct pevent *VAR_0)
{
 struct event_filter *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->pevent = VAR_0;
 FUNC_2(VAR_0);

 return VAR_1;
}
