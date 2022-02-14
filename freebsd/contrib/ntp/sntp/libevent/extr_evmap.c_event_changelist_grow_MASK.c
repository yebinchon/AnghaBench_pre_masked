
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_changelist {int changes_size; struct event_change* changes; } ;
struct event_change {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct event_change* FUNC_1 (struct event_change*,int) ;

__attribute__((used)) static int
FUNC_2(struct event_changelist *VAR_0)
{
 int VAR_1;
 struct event_change *VAR_2;
 if (VAR_0->changes_size < 64)
  VAR_1 = 64;
 else
  VAR_1 = VAR_0->changes_size * 2;

 VAR_2 = FUNC_1(VAR_0->changes,
     VAR_1 * sizeof(struct event_change));

 if (FUNC_0(VAR_2 == ((void*)0)))
  return (-1);

 VAR_0->changes = VAR_2;
 VAR_0->changes_size = VAR_1;

 return (0);
}
