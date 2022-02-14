
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
struct cd_softc {int flags; } ;
struct cam_periph {scalar_t__ softc; int path; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 union ccb* FUNC_1 (struct cam_periph*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (union ccb*,int ,int ,int) ;
 int FUNC_3 (int *,int ,int *,int ,int,int ,int) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void
FUNC_5(struct cam_periph *VAR_12, int VAR_13)
{
 union ccb *VAR_14;
 struct cd_softc *VAR_15;
 int VAR_16;

 FUNC_0(VAR_12->path, VAR_0, ("entering cdprevent\n"));

 VAR_15 = (struct cd_softc *)VAR_12->softc;

 if (((VAR_13 == VAR_5)
   && (VAR_15->flags & VAR_3) == 0)
  || ((VAR_13 == VAR_6)
   && (VAR_15->flags & VAR_3) != 0)) {
  return;
 }

 VAR_14 = FUNC_1(VAR_12, VAR_1);

 FUNC_3(&VAR_14->csio,
                   VAR_10,
                 ((void*)0),
       VAR_4,
       VAR_13,
       VAR_9,
                    60000);

 VAR_16 = FUNC_2(VAR_14, VAR_11, VAR_2,
                  VAR_8|VAR_7);

 FUNC_4(VAR_14);

 if (VAR_16 == 0) {
  if (VAR_13 == VAR_5)
   VAR_15->flags &= ~VAR_3;
  else
   VAR_15->flags |= VAR_3;
 }
}
