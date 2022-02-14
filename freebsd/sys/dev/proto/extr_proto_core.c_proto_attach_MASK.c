
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct proto_softc {scalar_t__ sc_rescnt; struct proto_res* sc_res; int sc_mtx; int sc_dev; } ;
struct TYPE_6__ {TYPE_2__* cdev; } ;
struct TYPE_4__ {int busdma; int res; } ;
struct proto_res {int r_type; int r_size; TYPE_3__ r_u; TYPE_1__ r_d; int r_rid; } ;
typedef int device_t ;
struct TYPE_5__ {struct proto_res* si_drv2; struct proto_softc* si_drv1; } ;


 int VAR_0 ;






 int FUNC_0 (int ) ;
 struct proto_softc* FUNC_1 (int ) ;
 void* FUNC_2 (int *,scalar_t__,int ,int ,int,char*,int ,...) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (struct proto_softc*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

int
FUNC_6(device_t VAR_2)
{
 struct proto_softc *VAR_3;
 struct proto_res *VAR_4;
 u_int VAR_5;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3->sc_dev = VAR_2;
 FUNC_3(&VAR_3->sc_mtx, "proto-softc", ((void*)0), VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3->sc_rescnt; VAR_5++) {
  VAR_4 = VAR_3->sc_res + VAR_5;
  switch (VAR_4->r_type) {
  case 129:

   break;
  case 131:
   break;
  case 128:
  case 130:
   VAR_4->r_size = FUNC_5(VAR_4->r_d.res);
   VAR_4->r_u.cdev = FUNC_2(&VAR_1, VAR_5, 0, 0, 0600,
       "proto/%s/%02x.%s", FUNC_0(VAR_2), VAR_4->r_rid,
       (VAR_4->r_type == 130) ? "io" : "mem");
   VAR_4->r_u.cdev->si_drv1 = VAR_3;
   VAR_4->r_u.cdev->si_drv2 = VAR_4;
   break;
  case 132:
   VAR_4->r_size = 4096;
   VAR_4->r_u.cdev = FUNC_2(&VAR_1, VAR_5, 0, 0, 0600,
       "proto/%s/pcicfg", FUNC_0(VAR_2));
   VAR_4->r_u.cdev->si_drv1 = VAR_3;
   VAR_4->r_u.cdev->si_drv2 = VAR_4;
   break;
  case 133:
   VAR_4->r_d.busdma = FUNC_4(VAR_3);
   VAR_4->r_size = 0;
   VAR_4->r_u.cdev = FUNC_2(&VAR_1, VAR_5, 0, 0, 0600,
       "proto/%s/busdma", FUNC_0(VAR_2));
   VAR_4->r_u.cdev->si_drv1 = VAR_3;
   VAR_4->r_u.cdev->si_drv2 = VAR_4;
   break;
  }
 }
 return (0);
}
