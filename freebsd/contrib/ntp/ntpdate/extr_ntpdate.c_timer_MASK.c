
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {scalar_t__ event_time; struct server* next_server; } ;


 scalar_t__ VAR_0 ;
 struct server* VAR_1 ;
 int FUNC_0 (struct server*) ;

void
FUNC_1(void)
{
 struct server *VAR_2;




 VAR_0++;






 for (VAR_2 = VAR_1; VAR_2 != ((void*)0);
      VAR_2 = VAR_2->next_server) {
  if (VAR_2->event_time != 0
      && VAR_2->event_time <= VAR_0)
   FUNC_0(VAR_2);
 }
}
