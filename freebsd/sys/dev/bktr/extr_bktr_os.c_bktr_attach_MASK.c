
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct bktr_softc {int * res_mem; scalar_t__ mem_rid; int * res_irq; scalar_t__ irq_rid; void* vbidev; void* vbidev_alias; void* tunerdev; void* tunerdev_alias; void* bktrdev; void* bktrdev_alias; int res_ih; int memh; int memt; int bktr_xname; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bktr_softc*,int ,int ) ;
 int FUNC_1 (struct bktr_softc*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ,int ,scalar_t__*,int) ;
 int FUNC_5 (int ,int ,scalar_t__,int *) ;
 int FUNC_6 (int ,int *,int ,int *,int ,struct bktr_softc*,int *) ;
 int FUNC_7 (struct bktr_softc*,unsigned int,int,unsigned int) ;
 struct bktr_softc* FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 void* FUNC_11 (int *,unsigned int,int ,int ,int,char*,unsigned int) ;
 void* FUNC_12 (void*,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 unsigned int FUNC_17 (int ) ;
 int FUNC_18 (int ,int,int) ;
 int FUNC_19 (int ,int,int,int) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int,char*,unsigned int) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_24( device_t VAR_18 )
{
 u_long VAR_19;
 u_long VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 int VAR_23 = 0;




        struct bktr_softc *VAR_24 = FUNC_8(VAR_18);

 VAR_22 = FUNC_9(VAR_18);


 FUNC_23(VAR_24->bktr_xname, sizeof(VAR_24->bktr_xname), "bktr%d",VAR_22);




 FUNC_15(VAR_18);




 VAR_24->mem_rid = FUNC_2(0);
 VAR_24->res_mem = FUNC_4(VAR_18, VAR_13,
     &VAR_24->mem_rid, VAR_10);

 if (!VAR_24->res_mem) {
  FUNC_10(VAR_18, "could not map memory\n");
  VAR_23 = VAR_5;
  goto fail;
 }
 VAR_24->memt = FUNC_22(VAR_24->res_mem);
 VAR_24->memh = FUNC_21(VAR_24->res_mem);





 FUNC_0(VAR_24, VAR_2, VAR_0);
 FUNC_1(VAR_24, VAR_1, VAR_6);
 VAR_24->irq_rid = 0;
 VAR_24->res_irq = FUNC_4(VAR_18, VAR_12,
    &VAR_24->irq_rid, VAR_11 | VAR_10);
 if (VAR_24->res_irq == ((void*)0)) {
  FUNC_10(VAR_18, "could not map interrupt\n");
  VAR_23 = VAR_5;
  goto fail;
 }

 VAR_23 = FUNC_6(VAR_18, VAR_24->res_irq, VAR_7,
                               ((void*)0), VAR_15, VAR_24, &VAR_24->res_ih);
 if (VAR_23) {
  FUNC_10(VAR_18, "could not setup irq\n");
  goto fail;

 }




 VAR_20 = FUNC_18( VAR_18, 0x40, 2);
        VAR_20 = VAR_20 | 1;
 FUNC_19(VAR_18, 0x40, VAR_20, 2);
 VAR_19 = FUNC_18(VAR_18, VAR_9, 4);
 VAR_19 = (VAR_19 >> 8) & 0xff;
 if ( VAR_16 ) {
  if (VAR_19)
   FUNC_20("brooktree%d: PCI bus latency is", VAR_22);
  else
   FUNC_20("brooktree%d: PCI bus latency was 0 changing to",
    VAR_22);
 }
 if ( !VAR_19 ) {
  VAR_19 = 10;
  FUNC_19(VAR_18, VAR_9, VAR_19<<8, 4);
 }
 if ( VAR_16 ) {
  FUNC_20(" %d.\n", (int) VAR_19);
 }


 VAR_20 = FUNC_16(VAR_18);
        VAR_21 = FUNC_17(VAR_18);


 FUNC_7( VAR_24, VAR_22, VAR_20, VAR_21 );


 VAR_24->bktrdev = FUNC_11(&VAR_14, VAR_22,
    0, 0, 0444, "bktr%d", VAR_22);
 VAR_24->tunerdev= FUNC_11(&VAR_14, VAR_22+16,
    0, 0, 0444, "tuner%d", VAR_22);
 VAR_24->vbidev = FUNC_11(&VAR_14, VAR_22+32,
    0, 0, 0444, "vbi%d" , VAR_22);
 return 0;

fail:
 if (VAR_24->res_irq)
  FUNC_5(VAR_18, VAR_12, VAR_24->irq_rid, VAR_24->res_irq);
 if (VAR_24->res_mem)
  FUNC_5(VAR_18, VAR_13, VAR_24->mem_rid, VAR_24->res_mem);
 return VAR_23;

}
