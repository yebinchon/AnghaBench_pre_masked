
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct atalk_route {struct atalk_route* next; struct net_device* dev; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 struct atalk_route* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct atalk_route*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 struct atalk_route **VAR_4 = &VAR_0;
 struct atalk_route *VAR_5;

 FUNC_3(&VAR_1);
 while ((VAR_5 = *VAR_4) != ((void*)0)) {
  if (VAR_5->dev == VAR_3) {
   *VAR_4 = VAR_5->next;
   FUNC_1(VAR_3);
   FUNC_2(VAR_5);
  } else
   VAR_4 = &VAR_5->next;
 }
 FUNC_4(&VAR_1);

 if (VAR_2.dev == VAR_3)
  FUNC_0(((void*)0));
}
