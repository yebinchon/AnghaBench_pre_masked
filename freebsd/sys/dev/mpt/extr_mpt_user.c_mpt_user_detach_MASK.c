
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpt_softc {int cdev; } ;
struct TYPE_3__ {int reply_handler; } ;
typedef TYPE_1__ mpt_handler_t ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mpt_softc*,int ,TYPE_1__,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct mpt_softc *VAR_3)
{
 mpt_handler_t VAR_4;


 FUNC_2(VAR_3->cdev);

 FUNC_0(VAR_3);
 VAR_4.reply_handler = VAR_1;
 FUNC_3(VAR_3, VAR_0, VAR_4,
     VAR_2);
 FUNC_1(VAR_3);
}
