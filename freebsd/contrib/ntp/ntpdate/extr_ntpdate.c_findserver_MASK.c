
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {scalar_t__ event_time; struct server* next_server; int srcadr; } ;
typedef int sockaddr_u ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 struct server* FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 struct server* VAR_3 ;
 int FUNC_5 (struct server*) ;

__attribute__((used)) static struct server *
FUNC_6(
 sockaddr_u *VAR_4
 )
{
 struct server *VAR_5;
 struct server *VAR_6;

 VAR_6 = ((void*)0);
 if (FUNC_3(VAR_4) != VAR_0)
  return 0;

 for (VAR_5 = VAR_3; VAR_5 != ((void*)0);
      VAR_5 = VAR_5->next_server) {
  if (FUNC_2(VAR_4, &VAR_5->srcadr))
   return VAR_5;

  if (FUNC_0(VAR_4) == FUNC_0(&VAR_5->srcadr)) {
   if (FUNC_1(&VAR_5->srcadr))
    VAR_6 = VAR_5;
  }
 }

 if (VAR_6 != ((void*)0)) {

  struct server *VAR_7;

  if (VAR_6->event_time != 0) {
   VAR_6->event_time = 0;
   VAR_1++;
  }

  VAR_5 = FUNC_4(sizeof(*VAR_5));

  VAR_5->srcadr = *VAR_4;

  VAR_5->event_time = ++VAR_2;

  for (VAR_7 = VAR_3; VAR_7->next_server != ((void*)0);
       VAR_7 = VAR_7->next_server)
              ;
  VAR_7->next_server = VAR_5;
  FUNC_5(VAR_5);
 }
 return ((void*)0);
}
