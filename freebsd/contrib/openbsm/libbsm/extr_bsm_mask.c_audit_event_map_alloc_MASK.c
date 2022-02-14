
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ae_desc; int ae_name; } ;
struct audit_event_map {int ev_desc; TYPE_1__ ev; int ev_name; } ;


 int FUNC_0 (struct audit_event_map*,int) ;
 struct audit_event_map* FUNC_1 (int) ;

__attribute__((used)) static struct audit_event_map *
FUNC_2(void)
{
 struct audit_event_map *VAR_0;

 VAR_0 = FUNC_1(sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_0, sizeof(*VAR_0));
 VAR_0->ev.ae_name = VAR_0->ev_name;
 VAR_0->ev.ae_desc = VAR_0->ev_desc;
 return (VAR_0);
}
