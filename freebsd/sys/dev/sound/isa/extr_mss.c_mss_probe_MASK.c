
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mss_info {int conf_rid; int drq2_rid; scalar_t__ io_rid; void* io_base; scalar_t__ drq1_rid; scalar_t__ irq_rid; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ,int ,scalar_t__*,int,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct mss_info*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int,int ,int) ;
 int FUNC_13 (int ,struct mss_info*) ;
 int FUNC_14 (struct mss_info*,int ) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (void*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_7)
{
     u_char VAR_8, VAR_9;
     int VAR_10, VAR_11, VAR_12, VAR_13 = VAR_1, VAR_14 = 0;
     struct mss_info *VAR_15;

     if (FUNC_11(VAR_7)) return VAR_1;

     VAR_15 = (struct mss_info *)FUNC_12(sizeof *VAR_15, VAR_2, VAR_3 | VAR_4);
     if (!VAR_15) return VAR_1;

     VAR_15->io_rid = 0;
     VAR_15->conf_rid = -1;
     VAR_15->irq_rid = 0;
     VAR_15->drq1_rid = 0;
     VAR_15->drq2_rid = -1;
     VAR_15->io_base = FUNC_2(VAR_7, VAR_6,
          &VAR_15->io_rid, 8, VAR_5);
     if (!VAR_15->io_base) {
         FUNC_0(FUNC_15("mss_probe: no address given, try 0x%x\n", 0x530));
  VAR_15->io_rid = 0;

  VAR_14 = 1;
  FUNC_3(VAR_7, VAR_6, VAR_15->io_rid,
                0x530, 8);
  VAR_15->io_base = FUNC_2(VAR_7, VAR_6,
       &VAR_15->io_rid,
       8, VAR_5);
     }
     if (!VAR_15->io_base) goto no;


     VAR_10 = FUNC_4(VAR_7);
     VAR_11 = FUNC_10(VAR_7);
     VAR_12 = FUNC_9(VAR_7);

     if (!(FUNC_4(VAR_7) & VAR_0)) goto mss_probe_end;







     FUNC_6(VAR_7, "MSS");
     VAR_9 = VAR_8 = FUNC_8(VAR_15, 3);
     if (VAR_8 == 0xff) {
  FUNC_0(FUNC_15("I/O addr inactive (%x), try pseudo_mss\n", VAR_8));
  FUNC_7(VAR_7, VAR_10 & ~VAR_0);
  goto mss_probe_end;
     }
     VAR_8 &= 0x3f;
     if (!(VAR_8 == 0x04 || VAR_8 == 0x0f || VAR_8 == 0x00 || VAR_8 == 0x05)) {
  FUNC_0(FUNC_15("No MSS signature detected on port 0x%jx (0x%x)\n",
        FUNC_16(VAR_15->io_base), VAR_9));
  goto no;
     }
     if (VAR_11 > 11) {
  FUNC_15("MSS: Bad IRQ %d\n", VAR_11);
  goto no;
     }
     if (!(VAR_12 == 0 || VAR_12 == 1 || VAR_12 == 3)) {
  FUNC_15("MSS: Bad DMA %d\n", VAR_12);
  goto no;
     }
     if (VAR_9 & 0x80) {

  if (VAR_12 == 0) {
       FUNC_15("MSS: Can't use DMA0 with a 8 bit card/slot\n");
       goto no;
  }
  if (!(VAR_11 == 7 || VAR_11 == 9)) {
       FUNC_15("MSS: Can't use IRQ%d with a 8 bit card/slot\n",
          VAR_11);
       goto no;
  }
     }
 mss_probe_end:
     VAR_13 = FUNC_13(VAR_7, VAR_15);
 no:
     FUNC_14(VAR_15, VAR_7);




     return VAR_13;
}
