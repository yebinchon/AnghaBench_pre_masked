
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int os_lock; int os_dnodes; } ;
typedef TYPE_1__ objset_t ;
typedef int dnode_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void
FUNC_12(objset_t *VAR_1)
{
 dnode_t VAR_2;
 dnode_t *VAR_3;

 FUNC_10(&VAR_1->os_lock);
 VAR_3 = FUNC_6(&VAR_1->os_dnodes);
 while (VAR_3 != ((void*)0)) {





  if (FUNC_3(VAR_3, VAR_0)) {
   FUNC_7(&VAR_1->os_dnodes, VAR_3, &VAR_2);
   FUNC_11(&VAR_1->os_lock);

   FUNC_4(VAR_3);
   FUNC_5(VAR_3, VAR_0);

   FUNC_10(&VAR_1->os_lock);
   VAR_3 = FUNC_8(&VAR_1->os_dnodes, &VAR_2);
   FUNC_9(&VAR_1->os_dnodes, &VAR_2);
  } else {
   VAR_3 = FUNC_8(&VAR_1->os_dnodes, VAR_3);
  }
 }
 FUNC_11(&VAR_1->os_lock);

 if (FUNC_2(VAR_1) != ((void*)0)) {
  FUNC_4(FUNC_0(VAR_1));
  FUNC_4(FUNC_2(VAR_1));
 }
 FUNC_4(FUNC_1(VAR_1));
}
