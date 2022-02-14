
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ich_func; } ;
struct TYPE_3__ {int (* softc_cleanup ) (struct enc_softc*) ;} ;
struct enc_softc {TYPE_2__ enc_boot_hold_ch; TYPE_1__ enc_vec; } ;
struct cam_periph {struct enc_softc* softc; } ;


 int FUNC_0 (struct enc_softc*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct enc_softc*) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_0)
{
 struct enc_softc *VAR_1;

 VAR_1 = VAR_0->softc;


 if (VAR_1->enc_vec.softc_cleanup != ((void*)0))
  VAR_1->enc_vec.softc_cleanup(VAR_1);

 if (VAR_1->enc_boot_hold_ch.ich_func != ((void*)0)) {
  FUNC_1(&VAR_1->enc_boot_hold_ch);
  VAR_1->enc_boot_hold_ch.ich_func = ((void*)0);
 }

 FUNC_0(VAR_1);
}
