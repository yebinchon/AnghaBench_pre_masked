
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct a10dmac_softc {TYPE_2__* sc_ddma_channels; TYPE_1__* sc_ndma_channels; } ;
struct TYPE_4__ {int ch_callbackarg; int (* ch_callback ) (int ) ;} ;
struct TYPE_3__ {int ch_callbackarg; int (* ch_callback ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct a10dmac_softc*,int ) ;
 int FUNC_1 (struct a10dmac_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct a10dmac_softc *VAR_4 = VAR_3;
 uint32_t VAR_5, VAR_6, VAR_7;
 uint8_t VAR_8;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_2, VAR_5);

 while ((VAR_6 = FUNC_2(VAR_5 & VAR_0)) != 0) {
  VAR_7 = (1U << (VAR_6 - 1));
  VAR_5 &= ~VAR_7;
  VAR_8 = ((VAR_6 - 1) / 2) & 7;
  if (VAR_7 & VAR_1) {
   if (VAR_4->sc_ndma_channels[VAR_8].ch_callback == ((void*)0))
    continue;
   VAR_4->sc_ndma_channels[VAR_8].ch_callback(
       VAR_4->sc_ndma_channels[VAR_8].ch_callbackarg);
  } else {
   if (VAR_4->sc_ddma_channels[VAR_8].ch_callback == ((void*)0))
    continue;
   VAR_4->sc_ddma_channels[VAR_8].ch_callback(
       VAR_4->sc_ddma_channels[VAR_8].ch_callbackarg);
  }
 }
}
