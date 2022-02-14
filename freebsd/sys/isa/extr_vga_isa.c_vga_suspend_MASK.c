
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pal_buf; int adp; int * state_buf; } ;
typedef TYPE_1__ vga_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_3)
{
 vga_softc_t *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3);


 if (VAR_4->state_buf != ((void*)0))
  goto save_palette;
 VAR_5 = FUNC_5(VAR_4->adp, ((void*)0), 0);
 if (VAR_5 <= 0)
  goto save_palette;
 VAR_4->state_buf = FUNC_3(VAR_5, VAR_1, VAR_0);
 if (VAR_4->state_buf == ((void*)0))
  goto save_palette;
 if (VAR_2)
  FUNC_1(VAR_3, "saving %d bytes of video state\n", VAR_5);
 if (FUNC_5(VAR_4->adp, VAR_4->state_buf, VAR_5) != 0) {
  FUNC_1(VAR_3, "failed to save state (nbytes=%d)\n",
      VAR_5);
  FUNC_2(VAR_4->state_buf, VAR_1);
  VAR_4->state_buf = ((void*)0);
 }

save_palette:

 if (VAR_4->pal_buf != ((void*)0))
  return;
 VAR_4->pal_buf = FUNC_3(256 * 3, VAR_1, VAR_0);
 if (VAR_4->pal_buf == ((void*)0))
  return;
 if (VAR_2)
  FUNC_1(VAR_3, "saving color palette\n");
 if (FUNC_4(VAR_4->adp, VAR_4->pal_buf) != 0) {
  FUNC_1(VAR_3, "failed to save palette\n");
  FUNC_2(VAR_4->pal_buf, VAR_1);
  VAR_4->pal_buf = ((void*)0);
 }
}
