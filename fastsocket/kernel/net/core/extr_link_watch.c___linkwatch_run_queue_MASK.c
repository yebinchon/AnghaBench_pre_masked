
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int state; struct net_device* link_watch_next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct net_device*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 struct net_device* VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_14(int VAR_9)
{
 struct net_device *VAR_10;
 if (!VAR_9)
  VAR_6 = VAR_4 + VAR_0;

 else if (FUNC_13(VAR_6, VAR_4 + VAR_0))
  VAR_6 = VAR_4;

 FUNC_0(VAR_2, &VAR_5);

 FUNC_11(&VAR_8);
 VAR_10 = VAR_7;
 VAR_7 = ((void*)0);
 FUNC_12(&VAR_8);

 while (VAR_10) {
  struct net_device *VAR_11 = VAR_10;

  VAR_10 = VAR_11->link_watch_next;

  if (VAR_9 && !FUNC_6(VAR_11)) {
   FUNC_4(VAR_11);
   continue;
  }





  FUNC_10();




  FUNC_0(VAR_3, &VAR_11->state);

  FUNC_9(VAR_11);
  if (VAR_11->flags & VAR_1) {
   if (FUNC_8(VAR_11))
    FUNC_1(VAR_11);
   else
    FUNC_2(VAR_11);

   FUNC_7(VAR_11);
  }

  FUNC_3(VAR_11);
 }

 if (VAR_7)
  FUNC_5(0);
}
