
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zcw_zio_error; int zcw_done; int * zcw_lwb; int zcw_node; int zcw_lock; int zcw_cv; } ;
typedef TYPE_1__ zil_commit_waiter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static zil_commit_waiter_t *
FUNC_4()
{
 zil_commit_waiter_t *VAR_5 = FUNC_1(VAR_4, VAR_2);

 FUNC_0(&VAR_5->zcw_cv, ((void*)0), VAR_1, ((void*)0));
 FUNC_3(&VAR_5->zcw_lock, ((void*)0), VAR_3, ((void*)0));
 FUNC_2(&VAR_5->zcw_node);
 VAR_5->zcw_lwb = ((void*)0);
 VAR_5->zcw_done = VAR_0;
 VAR_5->zcw_zio_error = 0;

 return (VAR_5);
}
