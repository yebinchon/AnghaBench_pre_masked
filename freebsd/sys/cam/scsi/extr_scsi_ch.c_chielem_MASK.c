
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
struct ch_softc {int device_stats; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union ccb* FUNC_0 (struct cam_periph*,int ) ;
 int FUNC_1 (union ccb*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int,int ,int ,int ,unsigned int) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static int
FUNC_4(struct cam_periph *VAR_8,
 unsigned int VAR_9)
{
 union ccb *VAR_10;
 struct ch_softc *VAR_11;
 int VAR_12;

 if (!VAR_9) {
  VAR_9 = VAR_2;
 } else {
  VAR_9 *= 1000;
 }

 VAR_12 = 0;
 VAR_11 = (struct ch_softc *)VAR_8->softc;

 VAR_10 = FUNC_0(VAR_8, VAR_0);

 FUNC_2(&VAR_10->csio,
                        1,
                       VAR_6,
                           VAR_3,
                          VAR_5,
                        VAR_9);

 VAR_12 = FUNC_1(VAR_10, VAR_7, VAR_1,
                      VAR_4,
      VAR_11->device_stats);

 FUNC_3(VAR_10);

 return(VAR_12);
}
