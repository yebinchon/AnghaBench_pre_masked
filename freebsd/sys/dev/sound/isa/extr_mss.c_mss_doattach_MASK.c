
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int bd_id; int bufsize; int irq; int io_base; int parent_dmat; int ih; int drq2; int drq1; int lock; } ;
typedef int device_t ;


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
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int,int ,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct mss_info*,int) ;
 int FUNC_6 (struct mss_info*,int ,char) ;
 int FUNC_7 (int ,int *,struct mss_info*) ;
 int FUNC_8 (struct mss_info*,int ) ;
 int FUNC_9 (struct mss_info*,int ) ;
 int VAR_12 ;
 int FUNC_10 (struct mss_info*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (int ,int ,int *,struct mss_info*) ;
 int FUNC_12 (int ,int,int ,int) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,struct mss_info*,int,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (char*,int,...) ;
 size_t FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,int ,int ,int ,struct mss_info*,int *) ;
 int FUNC_21 (char*,int,char*,size_t,...) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_22(device_t VAR_17, struct mss_info *VAR_18)
{
     int VAR_19, VAR_20, VAR_21 = FUNC_2(VAR_17);
     char VAR_22[VAR_10], VAR_23[VAR_10];

 VAR_18->lock = FUNC_19(FUNC_3(VAR_17), "snd_mss softc");
 VAR_18->bufsize = FUNC_12(VAR_17, 4096, VAR_6, 65536);
     if (!FUNC_8(VAR_18, VAR_17)) goto no;
     FUNC_9(VAR_18, VAR_17);
 VAR_19 = FUNC_18(VAR_18->drq1);
 VAR_20 = FUNC_18(VAR_18->drq2);
     if (VAR_21 & VAR_2) {

  static char VAR_24[12] =
      {-1, -1, -1, -1, -1, 0x28, -1, 0x08, -1, 0x10, 0x18, 0x20};
  static char VAR_25[4] = {1, 2, -1, 3};
  static char VAR_26[4] = {1, 0, -1, 0};
  char VAR_27;

  if (!VAR_18->irq || (VAR_27 = VAR_24[FUNC_18(VAR_18->irq)]) == -1)
   goto no;
  FUNC_6(VAR_18, 0, VAR_27 | 0x40);
  if ((FUNC_5(VAR_18, 3) & 0x40) == 0) FUNC_4(VAR_17, "IRQ Conflict?\n");

  if (VAR_25[VAR_19] == -1) goto no;
  VAR_27 |= VAR_25[VAR_19];
  if (VAR_19 != VAR_20) {
       if (VAR_20 == VAR_26[VAR_19]) VAR_27 |= 4;
       else {
    FUNC_17("invalid dual dma config %d:%d\n", VAR_19, VAR_20);
    goto no;
       }
  }
  FUNC_6(VAR_18, 0, VAR_27);
  FUNC_17("drq/irq conf %x\n", FUNC_5(VAR_18, 0));
     }
     FUNC_7(VAR_17, (VAR_18->bd_id == VAR_5)? &VAR_16 : &VAR_14, VAR_18);
     switch (VAR_18->bd_id) {
     case 128:
  FUNC_20(VAR_17, VAR_18->irq, 0, VAR_15, VAR_18, &VAR_18->ih);
  break;
     default:
  FUNC_20(VAR_17, VAR_18->irq, 0, VAR_12, VAR_18, &VAR_18->ih);
     }
     if (VAR_19 == VAR_20)
  FUNC_15(VAR_17, FUNC_13(VAR_17) | VAR_9);
     if (FUNC_0( FUNC_1(VAR_17), 2,
               0,
              VAR_1,
               VAR_0,
             ((void*)0), ((void*)0),
              VAR_18->bufsize, 1,
              0x3ffff, 0,
               VAR_11, &VAR_4,
   &VAR_18->parent_dmat) != 0) {
  FUNC_4(VAR_17, "unable to create dma tag\n");
  goto no;
     }

     if (VAR_19 != VAR_20)
  FUNC_21(VAR_23, VAR_10, ":%d", VAR_20);
 else
  VAR_23[0] = '\0';

     FUNC_21(VAR_22, VAR_10, "at io 0x%jx irq %jd drq %d%s bufsz %u",
           FUNC_18(VAR_18->io_base), FUNC_18(VAR_18->irq), VAR_19, VAR_23, VAR_18->bufsize);

     if (FUNC_14(VAR_17, VAR_18, 1, 1)) goto no;
     FUNC_11(VAR_17, VAR_8, &VAR_13, VAR_18);
     FUNC_11(VAR_17, VAR_7, &VAR_13, VAR_18);
     FUNC_16(VAR_17, VAR_22);

     return 0;
no:
     FUNC_10(VAR_18, VAR_17);
     return VAR_3;
}
