
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_adapter_t ;
typedef int uint16_t ;
struct TYPE_5__ {int vtb; TYPE_1__* sc; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_4__ {int * adp; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (int *,int,int *,int) ;

__attribute__((used)) static void
FUNC_5(scr_stat* VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 video_adapter_t* VAR_4 = VAR_0->sc->adp;
 int VAR_5, VAR_6, VAR_7;

 if (!VAR_3) {

  FUNC_4(VAR_4, VAR_1, (uint16_t*)FUNC_2(&VAR_0->vtb, VAR_1), VAR_2);
 } else {

  for (VAR_5 = VAR_2; VAR_5-- > 0; ++VAR_1) {
   VAR_6 = FUNC_1(&VAR_0->vtb, VAR_1);
   VAR_7 = FUNC_0(&VAR_0->vtb, VAR_1) >> 8;
   FUNC_3(VAR_4, VAR_1, VAR_6, (VAR_7 >> 4) | ((VAR_7 & 0xf) << 4));
  }
 }
}
