
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct pts_softc {scalar_t__ pts_unit; int * pts_cdev; TYPE_1__ pts_outpoll; TYPE_1__ pts_inpoll; TYPE_2__* pts_cred; } ;
struct TYPE_5__ {int cr_ruidinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pts_softc*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3)
{
 struct pts_softc *VAR_4 = VAR_3;


 if (VAR_4->pts_unit >= 0)
  FUNC_4(VAR_2, VAR_4->pts_unit);

 FUNC_0(VAR_4->pts_cred->cr_ruidinfo, -1, 0);
 FUNC_6(VAR_4->pts_cred, VAR_1, 1);
 FUNC_1(VAR_4->pts_cred);

 FUNC_7(&VAR_4->pts_inpoll);
 FUNC_7(&VAR_4->pts_outpoll);
 FUNC_5(&VAR_4->pts_inpoll.si_note);
 FUNC_5(&VAR_4->pts_outpoll.si_note);







 FUNC_3(VAR_4, VAR_0);
}
