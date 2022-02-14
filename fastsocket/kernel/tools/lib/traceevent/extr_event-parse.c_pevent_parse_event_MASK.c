
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent {int dummy; } ;
struct TYPE_2__ {scalar_t__ args; } ;
struct event_format {TYPE_1__ print_fmt; } ;
typedef enum pevent_errno { ____Placeholder_pevent_errno } pevent_errno ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct event_format**,struct pevent*,char const*,unsigned long,char const*) ;
 scalar_t__ FUNC_1 (struct pevent*,struct event_format*) ;
 int FUNC_2 (struct event_format*) ;
 int FUNC_3 (scalar_t__) ;

enum pevent_errno FUNC_4(struct pevent *VAR_2, const char *VAR_3,
         unsigned long VAR_4, const char *VAR_5)
{
 struct event_format *VAR_6 = ((void*)0);
 int VAR_7 = FUNC_0(&VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_6 == ((void*)0))
  return VAR_7;

 if (FUNC_1(VAR_2, VAR_6)) {
  VAR_7 = VAR_0;
  goto event_add_failed;
 }


 if (0 && VAR_6->print_fmt.args)
  FUNC_3(VAR_6->print_fmt.args);

 return 0;

event_add_failed:
 FUNC_2(VAR_6);
 return VAR_7;
}
