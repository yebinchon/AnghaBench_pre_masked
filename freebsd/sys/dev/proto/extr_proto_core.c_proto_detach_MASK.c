
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct proto_softc {int sc_opencnt; scalar_t__ sc_rescnt; int sc_mtx; struct proto_res* sc_res; } ;
struct TYPE_4__ {int busdma; int res; } ;
struct TYPE_3__ {int cdev; } ;
struct proto_res {int r_type; TYPE_2__ r_d; TYPE_1__ r_u; int r_rid; } ;
typedef int device_t ;


 int VAR_0 ;


 int VAR_1 ;




 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ) ;
 struct proto_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct proto_softc*,int ) ;

int
FUNC_7(device_t VAR_2)
{
 struct proto_softc *VAR_3;
 struct proto_res *VAR_4;
 u_int VAR_5;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_4(&VAR_3->sc_mtx);
 if (VAR_3->sc_opencnt == 0)
  VAR_3->sc_opencnt = -1;
 FUNC_5(&VAR_3->sc_mtx);
 if (VAR_3->sc_opencnt > 0)
  return (VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3->sc_rescnt; VAR_5++) {
  VAR_4 = VAR_3->sc_res + VAR_5;

  switch (VAR_4->r_type) {
  case 129:

   FUNC_0(VAR_2, VAR_4->r_type, VAR_4->r_rid,
       VAR_4->r_d.res);
   break;
  case 131:
   FUNC_0(VAR_2, VAR_4->r_type, VAR_4->r_rid,
       VAR_4->r_d.res);
   break;
  case 128:
  case 130:
   FUNC_1(VAR_4->r_u.cdev);
   FUNC_0(VAR_2, VAR_4->r_type, VAR_4->r_rid,
       VAR_4->r_d.res);
   break;
  case 132:
   FUNC_1(VAR_4->r_u.cdev);
   break;
  case 133:
   FUNC_1(VAR_4->r_u.cdev);
   FUNC_6(VAR_3, VAR_4->r_d.busdma);
   break;
  }
  VAR_4->r_type = VAR_1;
 }
 FUNC_4(&VAR_3->sc_mtx);
 VAR_3->sc_rescnt = 0;
 VAR_3->sc_opencnt = 0;
 FUNC_5(&VAR_3->sc_mtx);
 FUNC_3(&VAR_3->sc_mtx);
 return (0);
}
