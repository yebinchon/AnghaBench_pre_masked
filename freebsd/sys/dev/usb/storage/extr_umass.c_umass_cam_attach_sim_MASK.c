
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umass_softc {int sc_mtx; int sc_unit; int sc_dev; int * sc_sim; } ;
struct cam_devq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int *,int ,struct umass_softc*,int ,int *,int,int ,struct cam_devq*) ;
 struct cam_devq* FUNC_1 (int) ;
 int FUNC_2 (struct cam_devq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct umass_softc *VAR_5)
{
 struct cam_devq *VAR_6;
 VAR_6 = FUNC_1(1 );
 if (VAR_6 == ((void*)0)) {
  return (VAR_2);
 }
 VAR_5->sc_sim = FUNC_0
     (&VAR_3, &VAR_4,
     VAR_1,
     VAR_5 ,
     VAR_5->sc_unit ,
     &VAR_5->sc_mtx ,
     1 ,
     0 ,
     VAR_6);

 if (VAR_5->sc_sim == ((void*)0)) {
  FUNC_2(VAR_6);
  return (VAR_2);
 }

 FUNC_3(&VAR_5->sc_mtx);

 if (FUNC_5(VAR_5->sc_sim, VAR_5->sc_dev,
     VAR_5->sc_unit) != VAR_0) {
  FUNC_4(&VAR_5->sc_mtx);
  return (VAR_2);
 }
 FUNC_4(&VAR_5->sc_mtx);

 return (0);
}
