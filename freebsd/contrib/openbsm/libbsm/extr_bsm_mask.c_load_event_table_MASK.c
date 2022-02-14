
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_event_map {int ev; } ;
struct au_event_ent {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct audit_event_map*,int ) ;
 struct audit_event_map* FUNC_2 () ;
 int FUNC_3 (struct audit_event_map*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 struct au_event_ent* FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(void)
{
 struct audit_event_map *VAR_2;
 struct au_event_ent *VAR_3;






 FUNC_0(&VAR_0);
 FUNC_6();
 do {
  VAR_2 = FUNC_2();
  if (VAR_2 == ((void*)0)) {
   FUNC_4();
   return (-1);
  }
  VAR_3 = FUNC_5(&VAR_2->ev);
  if (VAR_3 != ((void*)0))
   FUNC_1(&VAR_0, VAR_2, VAR_1);
  else
   FUNC_3(VAR_2);
 } while (VAR_3 != ((void*)0));
 return (1);
}
