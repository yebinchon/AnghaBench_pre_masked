
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int watch ;
struct xs_watch {int node; } ;
struct TYPE_2__ {int registered_watches_lock; int registered_watches; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct xs_watch*,int ) ;
 int FUNC_2 (struct xs_watch*,int ) ;
 int * FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,long) ;
 TYPE_1__ VAR_2 ;
 int FUNC_7 (int ,char*) ;

int
FUNC_8(struct xs_watch *VAR_3)
{

 char VAR_4[sizeof(VAR_3) * 2 + 1];
 int VAR_5;

 FUNC_6(VAR_4, "%lX", (long)VAR_3);

 FUNC_4(&VAR_2.registered_watches_lock);
 FUNC_0(FUNC_3(VAR_4) == ((void*)0), ("watch already registered"));
 FUNC_1(&VAR_2.registered_watches, VAR_3, VAR_1);
 FUNC_5(&VAR_2.registered_watches_lock);

 VAR_5 = FUNC_7(VAR_3->node, VAR_4);


 if (VAR_5 == VAR_0)
  VAR_5 = 0;

 if (VAR_5 != 0) {
  FUNC_4(&VAR_2.registered_watches_lock);
  FUNC_2(VAR_3, VAR_1);
  FUNC_5(&VAR_2.registered_watches_lock);
 }

 return (VAR_5);
}
