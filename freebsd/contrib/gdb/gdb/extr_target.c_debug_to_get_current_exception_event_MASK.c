
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exception_event_record {int dummy; } ;
struct TYPE_2__ {struct exception_event_record* (* to_get_current_exception_event ) () ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 struct exception_event_record* FUNC_1 () ;

__attribute__((used)) static struct exception_event_record *
FUNC_2 (void)
{
  struct exception_event_record *VAR_2;
  VAR_2 = VAR_0.to_get_current_exception_event ();
  FUNC_0 (VAR_1, "target get_current_exception_event ()\n");
  return VAR_2;
}
