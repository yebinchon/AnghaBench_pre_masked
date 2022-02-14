
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_xact_ctx {int xc_flags; int xc_lock; int * xc_orphan; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vmbus_xact_ctx*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct vmbus_xact_ctx *VAR_2)
{
 FUNC_0(VAR_2->xc_flags & VAR_1,
     ("xact ctx was not orphaned"));
 FUNC_0(VAR_2->xc_orphan != ((void*)0), ("no orphaned xact"));

 FUNC_3(VAR_2->xc_orphan);
 FUNC_2(&VAR_2->xc_lock);
 FUNC_1(VAR_2, VAR_0);
}
