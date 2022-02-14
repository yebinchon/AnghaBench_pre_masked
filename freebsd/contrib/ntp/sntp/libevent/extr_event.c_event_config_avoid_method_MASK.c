
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_config_entry {int * avoid_method; } ;
struct event_config {int entries; } ;


 int FUNC_0 (int *,struct event_config_entry*,int ) ;
 int FUNC_1 (struct event_config_entry*) ;
 struct event_config_entry* FUNC_2 (int) ;
 int * FUNC_3 (char const*) ;
 int VAR_0 ;

int
FUNC_4(struct event_config *VAR_1, const char *VAR_2)
{
 struct event_config_entry *VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return (-1);

 if ((VAR_3->avoid_method = FUNC_3(VAR_2)) == ((void*)0)) {
  FUNC_1(VAR_3);
  return (-1);
 }

 FUNC_0(&VAR_1->entries, VAR_3, VAR_0);

 return (0);
}
