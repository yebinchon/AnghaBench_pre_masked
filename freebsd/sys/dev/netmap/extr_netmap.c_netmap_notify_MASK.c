
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_kring {int tx; int si; struct netmap_adapter* notify_na; } ;
struct netmap_adapter {scalar_t__* si_users; int * si; } ;
typedef enum txrx { ____Placeholder_txrx } txrx ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct netmap_kring *VAR_1, int VAR_2)
{
 struct netmap_adapter *VAR_3 = VAR_1->notify_na;
 enum txrx VAR_4 = VAR_1->tx;

 FUNC_0(&VAR_1->si);




 if (VAR_3->si_users[VAR_4] > 0)
  FUNC_0(&VAR_3->si[VAR_4]);

 return VAR_0;
}
