
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pal_buf; int adp; int * state_buf; } ;
typedef TYPE_1__ vga_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1)
{
 vga_softc_t *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->state_buf != ((void*)0)) {
  if (FUNC_4(VAR_2->adp, VAR_2->state_buf) != 0)
   FUNC_1(VAR_1, "failed to reload state\n");
  FUNC_2(VAR_2->state_buf, VAR_0);
  VAR_2->state_buf = ((void*)0);
 }
 if (VAR_2->pal_buf != ((void*)0)) {
  if (FUNC_3(VAR_2->adp, VAR_2->pal_buf) != 0)
   FUNC_1(VAR_1, "failed to reload palette\n");
  FUNC_2(VAR_2->pal_buf, VAR_0);
  VAR_2->pal_buf = ((void*)0);
 }
}
