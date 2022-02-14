
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iscsi_outstanding {int dummy; } ;
struct TYPE_6__ {TYPE_1__* si_drv1; } ;
struct TYPE_5__ {void* sc_shutdown_post_eh; void* sc_shutdown_pre_eh; TYPE_3__* sc_cdev; int sc_cv; int sc_sessions; int sc_lock; } ;


 void* FUNC_0 (int ,int ,TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,TYPE_3__**,int *,int *,int ,int ,int,char*) ;
 TYPE_1__* FUNC_5 (int,int ,int) ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_8(void)
{
 int VAR_16;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_2, VAR_4 | VAR_3);
 FUNC_6(&VAR_13->sc_lock, "iscsi");
 FUNC_2(&VAR_13->sc_sessions);
 FUNC_3(&VAR_13->sc_cv, "iscsi_cv");

 VAR_10 = FUNC_7("iscsi_outstanding",
     sizeof(struct iscsi_outstanding), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_8, 0);

 VAR_16 = FUNC_4(VAR_1, &VAR_13->sc_cdev, &VAR_9,
     ((void*)0), VAR_7, VAR_0, 0600, "iscsi");
 if (VAR_16 != 0) {
  FUNC_1("failed to create device node, error %d", VAR_16);
  return (VAR_16);
 }
 VAR_13->sc_cdev->si_drv1 = VAR_13;

 VAR_13->sc_shutdown_pre_eh = FUNC_0(VAR_15,
     VAR_12, VAR_13, VAR_6);






 VAR_13->sc_shutdown_post_eh = FUNC_0(VAR_14,
     VAR_11, VAR_13, VAR_5 - 1);

 return (0);
}
