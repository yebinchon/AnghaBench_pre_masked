
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gif_softc {scalar_t__ gif_family; int gif_hdr; } ;
struct TYPE_3__ {int if_drv_flags; } ;


 int FUNC_0 (struct gif_softc*,int ) ;
 TYPE_1__* FUNC_1 (struct gif_softc*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct gif_softc *VAR_7)
{

 FUNC_5(&VAR_5, VAR_3);
 if (VAR_7->gif_family != 0) {
  FUNC_0(VAR_7, VAR_6);
  FUNC_0(VAR_7, VAR_4);

  FUNC_2();
  FUNC_3(VAR_7->gif_hdr, VAR_2);
 }
 VAR_7->gif_family = 0;
 FUNC_1(VAR_7)->if_drv_flags &= ~VAR_0;
 FUNC_4(FUNC_1(VAR_7), VAR_1);
}
