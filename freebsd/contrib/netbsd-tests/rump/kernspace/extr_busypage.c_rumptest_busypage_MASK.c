
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lwp {int dummy; } ;
struct TYPE_4__ {int vmobjlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int,int *,int ,int *,struct lwp**,char*) ;
 int FUNC_3 (struct lwp*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_7 (int,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_8 (int **,int) ;
 int * FUNC_9 (TYPE_1__*,int ,int *,int ) ;

void
FUNC_10()
{
 struct lwp *VAR_8;
 int VAR_9;

 FUNC_0(&VAR_3, "napina");

 VAR_7 = FUNC_7(1, 0);
 FUNC_4(VAR_7->vmobjlock);
 VAR_4 = FUNC_9(VAR_7, 0, ((void*)0), 0);
 FUNC_5(VAR_7->vmobjlock);
 if (VAR_4 == ((void*)0))
  FUNC_6("couldn't create vm page");

 VAR_9 = FUNC_2(VAR_2, VAR_1 | VAR_0, ((void*)0),
     VAR_5, ((void*)0), &VAR_8, "jointest");
 if (VAR_9)
  FUNC_6("thread creation failed: %d", VAR_9);

 FUNC_4(VAR_7->vmobjlock);
 while (!VAR_6)
  FUNC_1(&VAR_3, VAR_7->vmobjlock);

 FUNC_8(&VAR_4, 1);
 FUNC_5(VAR_7->vmobjlock);

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  FUNC_6("thread join failed: %d", VAR_9);

}
