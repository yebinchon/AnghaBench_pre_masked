
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mss_info {int conf_rid; int optibase; int io_rid; int bd_id; int bd_flags; int drq1_rid; int drq2_rid; void* io_base; void* conf_base; } ;
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
 void* FUNC_0 (int ,int ,int*,int,int,int,int ) ;
 void* FUNC_1 (int ,int ,int*,int,int ) ;
 int FUNC_2 (int ,int ,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mss_info*,int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9, struct mss_info *VAR_10)
{
 int VAR_11 = FUNC_3(VAR_9);
 int VAR_12 = 0;

 if (!VAR_10->conf_base) {
  FUNC_2(VAR_9, VAR_7, VAR_10->conf_rid,
   VAR_10->optibase, 0x9);

  VAR_10->conf_base = FUNC_0(VAR_9, VAR_7,
   &VAR_10->conf_rid, VAR_10->optibase, VAR_10->optibase+0x9,
   0x9, VAR_5);
 }

 if (!VAR_10->conf_base)
  return VAR_4;

 if (!VAR_10->io_base)
  VAR_10->io_base = FUNC_1(VAR_9, VAR_7,
   &VAR_10->io_rid, 8, VAR_5);

 if (!VAR_10->io_base)
  VAR_10->io_base = FUNC_0(VAR_9, VAR_7,
   &VAR_10->io_rid, 0x530, 0x537, 8, VAR_5);

 if (!VAR_10->io_base)
  return VAR_4;

 switch (FUNC_9(VAR_10->io_base)) {
  case 0x530:
   VAR_12 = 0x0;
   break;
  case 0xe80:
   VAR_12 = 0x10;
   break;
  case 0xf40:
   VAR_12 = 0x20;
   break;
  case 0x604:
   VAR_12 = 0x30;
   break;
  default:
   FUNC_8("opti_init: invalid MSS base address!\n");
   return VAR_4;
 }


 switch (VAR_10->bd_id) {
 case 129:
  FUNC_7(VAR_10, 1, 0x80 | VAR_12);
  FUNC_7(VAR_10, 2, 0x00);
  FUNC_7(VAR_10, 3, 0xf0);
  FUNC_7(VAR_10, 4, 0xf0);
  FUNC_7(VAR_10, 5, 0x00);
  FUNC_7(VAR_10, 6, 0x02);
  break;

 case 128:
  FUNC_7(VAR_10, 1, 0x00 | VAR_12);
  FUNC_7(VAR_10, 3, 0x00);
  FUNC_7(VAR_10, 4, 0x52);
  FUNC_7(VAR_10, 5, 0x3c);
  FUNC_7(VAR_10, 6, 0x02);
  break;
 }

 if (VAR_10->bd_flags & VAR_0) {
  u_int32_t VAR_13 = FUNC_6(VAR_9);
  u_int32_t VAR_14 = FUNC_5(VAR_9);
  FUNC_2(VAR_9, VAR_8, 0, VAR_13, 1);
  FUNC_2(VAR_9, VAR_6, VAR_10->drq1_rid, VAR_14, 1);
  if (VAR_11 & VAR_2) {
   FUNC_2(VAR_9, VAR_6, 1,
    VAR_11 & VAR_1, 1);
   VAR_10->drq2_rid = 1;
  }
 }



 FUNC_4(VAR_9, FUNC_3(VAR_9) | VAR_3);

 return 0;
}
