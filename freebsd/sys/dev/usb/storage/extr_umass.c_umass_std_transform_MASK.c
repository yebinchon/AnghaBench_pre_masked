
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint8_t ;
struct umass_softc {int (* sc_transform ) (struct umass_softc*,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct umass_softc*,int*,int) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static uint8_t
FUNC_3(struct umass_softc *VAR_3, union ccb *VAR_4,
    uint8_t *VAR_5, uint8_t VAR_6)
{
 uint8_t VAR_7;

 VAR_7 = (VAR_3->sc_transform) (VAR_3, VAR_5, VAR_6);

 if (VAR_7 == 2) {
  VAR_4->ccb_h.status = VAR_1;
  FUNC_1(VAR_4);
  return (0);
 } else if (VAR_7 == 0) {
  FUNC_2(VAR_4->ccb_h.path, 1);
  VAR_4->ccb_h.status = VAR_2 | VAR_0;
  FUNC_1(VAR_4);
  return (0);
 }

 return (1);
}
