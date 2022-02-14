
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mpt_softc {TYPE_4__* cdev; int dev; } ;
struct TYPE_5__ {int reply_handler; } ;
typedef TYPE_1__ mpt_handler_t ;
struct TYPE_6__ {struct mpt_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int *,int,int ,int ,int,char*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct mpt_softc*,int ,TYPE_1__,int ) ;
 int FUNC_5 (struct mpt_softc*,char*) ;
 int FUNC_6 (struct mpt_softc*,int ,TYPE_1__,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_7)
{
 mpt_handler_t VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(VAR_7);
 VAR_8.reply_handler = VAR_5;
 VAR_9 = FUNC_6(VAR_7, VAR_2, VAR_8,
         &VAR_6);
 FUNC_1(VAR_7);
 if (VAR_9 != 0) {
  FUNC_5(VAR_7, "Unable to register user handler!\n");
  return (VAR_9);
 }
 VAR_10 = FUNC_2(VAR_7->dev);
 VAR_7->cdev = FUNC_3(&VAR_4, VAR_10, VAR_3, VAR_1, 0640,
     "mpt%d", VAR_10);
 if (VAR_7->cdev == ((void*)0)) {
  FUNC_0(VAR_7);
  FUNC_4(VAR_7, VAR_2, VAR_8,
      VAR_6);
  FUNC_1(VAR_7);
  return (VAR_0);
 }
 VAR_7->cdev->si_drv1 = VAR_7;
 return (0);
}
