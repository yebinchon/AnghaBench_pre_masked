
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct scsi_rw_6 {int length; int addr; } ;
struct scsi_rw_16 {int length; int addr; } ;
struct scsi_rw_12 {int length; int addr; } ;
struct scsi_rw_10 {int length; int addr; } ;
struct ccb_accept_tio {int dummy; } ;
 int* FUNC_0 (struct ccb_accept_tio*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int
FUNC_9(struct ccb_accept_tio *VAR_0, uint32_t VAR_1)
{
 uint64_t VAR_2;
 uint32_t VAR_3, VAR_4;
 uint8_t *VAR_5 = FUNC_0(VAR_0);

 VAR_4 = VAR_1 >> 9;

 switch (VAR_5[0]) {
 case 132:
 case 128:
 {
  struct scsi_rw_6 *VAR_6 = (struct scsi_rw_6 *)VAR_5;
  VAR_2 = FUNC_2(VAR_6->addr);
  VAR_2 &= 0x1fffff;
  VAR_3 = VAR_6->length;
  if (VAR_3 == 0)
   VAR_3 = 256;
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  FUNC_7(VAR_2, VAR_6->addr);
  VAR_6->length = VAR_3;
  break;
 }
 case 135:
 case 131:
 {
  struct scsi_rw_10 *VAR_7 = (struct scsi_rw_10 *)VAR_5;
  VAR_2 = FUNC_3(VAR_7->addr);
  VAR_3 = FUNC_1(VAR_7->length);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  FUNC_8(VAR_2, VAR_7->addr);
  FUNC_6(VAR_3, VAR_7->length);
  break;
 }
 case 134:
 case 130:
 {
  struct scsi_rw_12 *VAR_8 = (struct scsi_rw_12 *)VAR_5;
  VAR_2 = FUNC_3(VAR_8->addr);
  VAR_3 = FUNC_3(VAR_8->length);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  FUNC_8(VAR_2, VAR_8->addr);
  FUNC_8(VAR_3, VAR_8->length);
  break;
 }
 case 133:
 case 129:
 {
  struct scsi_rw_16 *VAR_9 = (struct scsi_rw_16 *)VAR_5;
  VAR_2 = FUNC_4(VAR_9->addr);
  VAR_3 = FUNC_3(VAR_9->length);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  FUNC_5(VAR_2, VAR_9->addr);
  FUNC_8(VAR_3, VAR_9->length);
  break;
 }
 default:
  return -1;
 }
 return (0);
}
