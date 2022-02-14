
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* digipeat; struct TYPE_4__* next; struct net_device* dev; } ;
typedef TYPE_1__ ax25_route ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net_device *VAR_2)
{
 ax25_route *VAR_3, *VAR_4, *VAR_5;

 FUNC_1(&VAR_1);
 VAR_5 = VAR_0;
 while (VAR_5 != ((void*)0)) {
  VAR_3 = VAR_5;
  VAR_5 = VAR_5->next;

  if (VAR_3->dev == VAR_2) {
   if (VAR_0 == VAR_3) {
    VAR_0 = VAR_3->next;
    FUNC_0(VAR_3->digipeat);
    FUNC_0(VAR_3);
   } else {
    for (VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
     if (VAR_4->next == VAR_3) {
      VAR_4->next = VAR_3->next;
      FUNC_0(VAR_3->digipeat);
      FUNC_0(VAR_3);
      break;
     }
    }
   }
  }
 }
 FUNC_2(&VAR_1);
}
