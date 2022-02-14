
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int io_rid; int conf_rid; int drq1_rid; int drq2_rid; int * conf_base; int bd_id; scalar_t__ irq_rid; int bd_flags; } ;
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
 int VAR_11 ;
 int * FUNC_0 (int ,int ,int*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,struct mss_info*) ;
 int FUNC_8 (struct mss_info*,int ) ;
 int FUNC_9 (int *,int,unsigned char) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_12)
{
 device_t VAR_13 = FUNC_2(VAR_12);
 struct mss_info *VAR_14;
 int VAR_15, VAR_16;
 unsigned char VAR_17;

 VAR_14 = (struct mss_info *)FUNC_6(sizeof *VAR_14, VAR_7, VAR_8 | VAR_9);
 if (VAR_14 == ((void*)0))
  return VAR_3;

 VAR_14->bd_flags = VAR_0;
 VAR_14->io_rid = 2;
 VAR_14->conf_rid = 1;
 VAR_14->irq_rid = 0;
 VAR_14->drq1_rid = 1;
 VAR_14->drq2_rid = -1;

 if (FUNC_4(VAR_13) == 0)
  VAR_14->bd_id = VAR_5;
 else {
  VAR_14->bd_id = VAR_6;
  VAR_14->drq2_rid = 0;
  goto skip_setup;
 }

 VAR_16 = FUNC_1(VAR_13);
 if (VAR_16 & VAR_2)
  VAR_14->drq2_rid = 0;

 VAR_14->conf_base = FUNC_0(VAR_12, VAR_11,
           &VAR_14->conf_rid,
           8, VAR_10);

 if (VAR_14->conf_base == ((void*)0)) {
  FUNC_8(VAR_14, VAR_12);
  return VAR_4;
 }

 VAR_15 = FUNC_5(VAR_13);

 VAR_17 = 0x40;
 if (FUNC_3(VAR_12) > 3)
  VAR_17 |= 0x10;
 if ((VAR_16 & VAR_2) != 0 && (VAR_16 & VAR_1) > 3)
  VAR_17 |= 0x20;
 VAR_17 |= (VAR_15 >> 4) & 0x0f;
 FUNC_9(VAR_14->conf_base, 6, VAR_17);

skip_setup:
 return FUNC_7(VAR_12, VAR_14);
}
