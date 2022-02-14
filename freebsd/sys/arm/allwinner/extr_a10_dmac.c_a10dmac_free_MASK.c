
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10dmac_softc {int sc_mtx; } ;
struct a10dmac_channel {scalar_t__ ch_type; int * ch_callbackarg; int * ch_callback; int ch_index; struct a10dmac_softc* ch_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct a10dmac_softc*,int ) ;
 int FUNC_3 (struct a10dmac_softc*,int ,int ) ;
 int FUNC_4 (struct a10dmac_channel*) ;
 int FUNC_5 (struct a10dmac_channel*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_5, void *VAR_6)
{
 struct a10dmac_channel *VAR_7 = VAR_6;
 struct a10dmac_softc *VAR_8 = VAR_7->ch_sc;
 uint32_t VAR_9, VAR_10, VAR_11;

 FUNC_6(&VAR_8->sc_mtx);

 VAR_9 = FUNC_2(VAR_8, VAR_1);
 VAR_11 = FUNC_4(VAR_7);
 if (VAR_7->ch_type == VAR_4) {
  VAR_10 = FUNC_1(VAR_7->ch_index);
  VAR_11 &= ~VAR_3;
 } else {
  VAR_10 = FUNC_0(VAR_7->ch_index);
  VAR_11 &= ~VAR_0;
 }
 VAR_9 &= ~VAR_10;
 FUNC_5(VAR_7, VAR_11);
 FUNC_3(VAR_8, VAR_1, VAR_9);
 FUNC_3(VAR_8, VAR_2, VAR_10);

 VAR_7->ch_callback = ((void*)0);
 VAR_7->ch_callbackarg = ((void*)0);

 FUNC_7(&VAR_8->sc_mtx);
}
