
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int kb_flags; } ;
typedef TYPE_1__ keyboard_t ;
typedef int device_t ;
struct TYPE_9__ {int intr; } ;
typedef TYPE_2__ atkbd_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,TYPE_1__**,int*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 atkbd_softc_t *VAR_3;
 keyboard_t *VAR_4;
 int VAR_5[2];

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_5(FUNC_4(VAR_0,
       FUNC_3(VAR_2)));
 if (VAR_4) {
  VAR_4->kb_flags &= ~VAR_1;
  VAR_5[0] = FUNC_3(FUNC_1(VAR_2));
  VAR_5[1] = FUNC_8(VAR_3->intr);
  FUNC_7(VAR_4, FUNC_3(VAR_2), &VAR_4, VAR_5,
      FUNC_0(VAR_2));
  FUNC_6(VAR_4);
 }
 return 0;
}
