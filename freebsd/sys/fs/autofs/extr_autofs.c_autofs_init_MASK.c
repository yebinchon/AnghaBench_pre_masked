
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfsconf {int dummy; } ;
struct autofs_request {int dummy; } ;
struct autofs_node {int dummy; } ;
struct TYPE_6__ {TYPE_1__* si_drv1; } ;
struct TYPE_5__ {TYPE_2__* sc_cdev; int sc_lock; int sc_cv; int sc_requests; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,TYPE_2__**,int *,int *,int ,int ,int,char*) ;
 TYPE_1__* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct vfsconf *VAR_11)
{
 int VAR_12;

 FUNC_1(VAR_10 == ((void*)0),
     ("softc %p, should be NULL", VAR_10));

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2,
     VAR_3 | VAR_4);

 VAR_9 = FUNC_8("autofs_request",
     sizeof(struct autofs_request), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_6, 0);
 VAR_8 = FUNC_8("autofs_node",
     sizeof(struct autofs_node), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_6, 0);

 FUNC_2(&VAR_10->sc_requests);
 FUNC_3(&VAR_10->sc_cv, "autofscv");
 FUNC_7(&VAR_10->sc_lock, "autofslk");

 VAR_12 = FUNC_5(VAR_1, &VAR_10->sc_cdev,
     &VAR_7, ((void*)0), VAR_5, VAR_0, 0600, "autofs");
 if (VAR_12 != 0) {
  FUNC_0("failed to create device node, error %d", VAR_12);
  FUNC_9(VAR_9);
  FUNC_9(VAR_8);
  FUNC_4(VAR_10, VAR_2);

  return (VAR_12);
 }
 VAR_10->sc_cdev->si_drv1 = VAR_10;

 return (0);
}
