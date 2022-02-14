
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct vtscsi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vtscsi_softc*,int ,char*,int,union ccb*,int ) ;
 int FUNC_1 (struct vtscsi_softc*) ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static void
FUNC_3(struct vtscsi_softc *VAR_3, union ccb *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == 0)
  VAR_4->ccb_h.status = VAR_0;
 else
  VAR_4->ccb_h.status = VAR_1;

 FUNC_0(VAR_3, VAR_2, "error=%d ccb=%p status=%#x\n",
     VAR_5, VAR_4, VAR_4->ccb_h.status);

 FUNC_2(VAR_4);
}
