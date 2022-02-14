
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ipu_softc {int sc_fb_phys; TYPE_1__* sc_mode; } ;
struct ipu_cpmem_ch_param {int dummy; } ;
struct TYPE_2__ {int hdisplay; scalar_t__ vdisplay; } ;


 int FUNC_0 (struct ipu_cpmem_ch_param*) ;
 int FUNC_1 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_2 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_3 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_4 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_5 (struct ipu_cpmem_ch_param*,int ) ;
 int FUNC_6 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_7 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_8 (struct ipu_cpmem_ch_param*,scalar_t__) ;
 int FUNC_9 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_10 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_11 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_12 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_13 (struct ipu_cpmem_ch_param*,int ) ;
 int FUNC_14 (struct ipu_cpmem_ch_param*,int ) ;
 int FUNC_15 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_16 (struct ipu_cpmem_ch_param*,int) ;
 int FUNC_17 (struct ipu_cpmem_ch_param*,int ) ;
 int FUNC_18 (struct ipu_cpmem_ch_param*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_19 (int ) ;
 unsigned long FUNC_20 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_21 (int) ;
 unsigned long FUNC_22 (int) ;
 unsigned long FUNC_23 (int) ;
 unsigned long FUNC_24 (int) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_25 (int) ;
 unsigned long FUNC_26 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_27 (int ) ;
 unsigned long FUNC_28 (int ) ;
 unsigned long FUNC_29 (int) ;
 unsigned long FUNC_30 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 unsigned long FUNC_31 (int) ;
 unsigned long FUNC_32 (int) ;
 unsigned long FUNC_33 (int) ;
 unsigned long FUNC_34 (int) ;
 unsigned long VAR_15 ;
 unsigned long FUNC_35 (int) ;
 unsigned long VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_36 (struct ipu_softc*,int) ;
 int FUNC_37 (struct ipu_softc*,int,unsigned long) ;
 int FUNC_38 (struct ipu_softc*,int,struct ipu_cpmem_ch_param*) ;
 int VAR_23 ;
 int FUNC_39 (struct ipu_cpmem_ch_param*) ;

__attribute__((used)) static void
FUNC_40(struct ipu_softc *VAR_24)
{
 struct ipu_cpmem_ch_param VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27, VAR_28, VAR_29;

 VAR_26 = VAR_24->sc_mode->hdisplay * VAR_23 / 8;


 FUNC_0(&VAR_25);

 FUNC_9(&VAR_25, VAR_24->sc_mode->hdisplay - 1);
 FUNC_8(&VAR_25, VAR_24->sc_mode->vdisplay - 1);
 FUNC_16(&VAR_25, VAR_26 - 1);

 FUNC_6(&VAR_25, (VAR_24->sc_fb_phys >> 3));
 FUNC_7(&VAR_25, (VAR_24->sc_fb_phys >> 3));

 FUNC_5(&VAR_25, VAR_21);
 FUNC_13(&VAR_25, VAR_22);

 FUNC_12(&VAR_25, 16 - 1);

 FUNC_14(&VAR_25, 0);
 FUNC_15(&VAR_25, 5 - 1);
 FUNC_10(&VAR_25, 5);
 FUNC_11(&VAR_25, 6 - 1);
 FUNC_3(&VAR_25, 11);
 FUNC_4(&VAR_25, 5 - 1);
 FUNC_1(&VAR_25, 16);
 FUNC_2(&VAR_25, 8 - 1);

 FUNC_17(&VAR_25, 0);
 FUNC_18(&VAR_25, 0);

 FUNC_38(VAR_24, VAR_0, &VAR_25);





 FUNC_37(VAR_24, VAR_10, VAR_11);

 FUNC_37(VAR_24, VAR_12, VAR_13 |
     VAR_16);
 FUNC_37(VAR_24, VAR_14, FUNC_34(1) |
     FUNC_32(1) |
     FUNC_33(1) |
     FUNC_31(7) |
     FUNC_35(5) |
     VAR_15);

 FUNC_37(VAR_24, VAR_1,
     FUNC_20(VAR_2) |
     FUNC_28(VAR_6) |
     FUNC_30(6) |
     FUNC_19(VAR_2) |
     FUNC_27(VAR_7) |
     FUNC_29(2) );

 FUNC_37(VAR_24, VAR_3, FUNC_24(1) |
     FUNC_23(1) |
     FUNC_22(7) |
     FUNC_26(5) |
     VAR_5 |
     FUNC_21(7) |
     FUNC_25(5) |
     VAR_4);

 VAR_27 = FUNC_36(VAR_24, VAR_8);
 VAR_27 &= ~(VAR_9);
 FUNC_37(VAR_24, VAR_8, VAR_27);




 if (VAR_0 < 32) {
  VAR_28 = VAR_17;
  VAR_29 = VAR_19;
 } else {
  VAR_28 = VAR_18;
  VAR_29 = VAR_20;
 }

 VAR_27 = FUNC_36(VAR_24, VAR_28);
 VAR_27 |= (1UL << (VAR_0 & 0x1f));
 FUNC_37(VAR_24, VAR_28, VAR_27);

 FUNC_37(VAR_24, VAR_29, (1UL << (VAR_0 & 0x1f)));
}
