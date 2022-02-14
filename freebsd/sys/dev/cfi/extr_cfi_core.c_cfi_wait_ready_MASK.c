
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct cfi_softc {int sc_cmdset; scalar_t__* sc_typical_timeouts; scalar_t__* sc_max_timeouts; int sc_dev; int * sc_mto_counts; int * sc_tto_counts; } ;
typedef scalar_t__ sbintime_t ;
typedef enum cfi_wait_cmd { ____Placeholder_cfi_wait_cmd } cfi_wait_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct cfi_softc*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int,int,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct cfi_softc *VAR_11, u_int VAR_12, sbintime_t VAR_13,
    enum cfi_wait_cmd VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18 = 0, VAR_19 = 0;
 sbintime_t VAR_20;

 VAR_15 = 0;
 VAR_16 = 0;
 VAR_17 = 0;
 while (!VAR_15 && !VAR_16) {




  VAR_20 = FUNC_3();

  switch (VAR_11->sc_cmdset) {
  case 129:
  case 128:
   VAR_19 = FUNC_0(VAR_11, VAR_12);
   VAR_15 = (VAR_19 & VAR_4);
   if (VAR_15) {

    VAR_19 &= ~(VAR_5 |
     VAR_4 |
     VAR_3);
    if (VAR_19 & VAR_0)
     VAR_16 = VAR_9;
    else if (VAR_19 & VAR_2)
     VAR_16 = VAR_7;
    else if (VAR_19 & VAR_1)
     VAR_16 = VAR_8;
    else if (VAR_19)
     VAR_16 = VAR_6;
   }
   break;
  case 130:
  case 131:
   VAR_18 = FUNC_0(VAR_11, VAR_12);
   VAR_19 = FUNC_0(VAR_11, VAR_12);
   VAR_15 = ((VAR_19 & 0x40) == (VAR_18 & 0x40)) ? 1 : 0;
   break;
  }

  if (VAR_17 ||
      VAR_20 > VAR_13 + VAR_11->sc_typical_timeouts[VAR_14]) {
   if (!VAR_17) {
    VAR_17 = 1;
    VAR_11->sc_tto_counts[VAR_14]++;




   }
   if (VAR_20 > VAR_13 + VAR_11->sc_max_timeouts[VAR_14]) {
    VAR_11->sc_mto_counts[VAR_14]++;




   }
  }
 }
 if (!VAR_15 && !VAR_16)
  VAR_16 = VAR_10;
 if (VAR_16)
  FUNC_2("\nerror=%d (st 0x%x st0 0x%x)\n", VAR_16, VAR_19, VAR_18);
 return (VAR_16);
}
