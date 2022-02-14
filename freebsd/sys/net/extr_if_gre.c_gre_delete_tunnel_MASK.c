
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gre_softc {scalar_t__ gre_family; struct gre_softc* gre_so; int epoch_ctx; int so; int list; int gre_hdr; } ;
struct gre_socket {scalar_t__ gre_family; struct gre_socket* gre_so; int epoch_ctx; int so; int list; int gre_hdr; } ;
struct TYPE_3__ {int if_drv_flags; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct gre_softc*,int ) ;
 TYPE_1__* FUNC_2 (struct gre_softc*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void
FUNC_9(struct gre_softc *VAR_9)
{
 struct gre_socket *VAR_10;

 FUNC_8(&VAR_5, VAR_3);
 if (VAR_9->gre_family != 0) {
  FUNC_1(VAR_9, VAR_4);
  FUNC_1(VAR_9, VAR_8);
  FUNC_3();
  FUNC_5(VAR_9->gre_hdr, VAR_2);
  VAR_9->gre_family = 0;
 }




 if ((VAR_10 = VAR_9->gre_so) != ((void*)0) && FUNC_0(&VAR_10->list)) {
  FUNC_1(VAR_10, VAR_4);
  FUNC_7(VAR_10->so);
  FUNC_4(VAR_7, &VAR_10->epoch_ctx, VAR_6);
  VAR_9->gre_so = ((void*)0);
 }
 FUNC_2(VAR_9)->if_drv_flags &= ~VAR_0;
 FUNC_6(FUNC_2(VAR_9), VAR_1);
}
