
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int args; struct event_format* format; } ;
struct event_format {TYPE_1__ print_fmt; int format; struct event_format* system; struct event_format* name; } ;


 int FUNC_0 (struct event_format*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct event_format *VAR_0)
{
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->system);

 FUNC_2(&VAR_0->format);

 FUNC_0(VAR_0->print_fmt.format);
 FUNC_1(VAR_0->print_fmt.args);

 FUNC_0(VAR_0);
}
