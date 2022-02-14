
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct listen_struct {struct listen_struct* next; struct net_device* dev; int callsign; } ;
typedef int ax25_address ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct listen_struct*) ;
 struct listen_struct* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(ax25_address *VAR_2, struct net_device *VAR_3)
{
 struct listen_struct *VAR_4, *VAR_5;

 FUNC_2(&VAR_1);
 VAR_5 = VAR_0;
 if (VAR_5 == ((void*)0)) {
  FUNC_3(&VAR_1);
  return;
 }

 if (FUNC_0(&VAR_5->callsign, VAR_2) == 0 && VAR_5->dev == VAR_3) {
  VAR_0 = VAR_5->next;
  FUNC_3(&VAR_1);
  FUNC_1(VAR_5);
  return;
 }

 while (VAR_5 != ((void*)0) && VAR_5->next != ((void*)0)) {
  if (FUNC_0(&VAR_5->next->callsign, VAR_2) == 0 && VAR_5->next->dev == VAR_3) {
   VAR_4 = VAR_5->next;
   VAR_5->next = VAR_5->next->next;
   FUNC_3(&VAR_1);
   FUNC_1(VAR_4);
   return;
  }

  VAR_5 = VAR_5->next;
 }
 FUNC_3(&VAR_1);
}
