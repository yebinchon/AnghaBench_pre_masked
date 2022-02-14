
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct scsi_rw_6 {int length; scalar_t__ control; int addr; int opcode; } ;
struct scsi_rw_16 {scalar_t__ control; int length; scalar_t__ reserved; int addr; scalar_t__ byte2; int opcode; } ;
struct scsi_rw_12 {scalar_t__ control; int length; scalar_t__ reserved; int addr; scalar_t__ byte2; int opcode; } ;
struct scsi_rw_10 {scalar_t__ control; int length; scalar_t__ reserved; int addr; scalar_t__ byte2; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

int
FUNC_4(int VAR_8, uint8_t VAR_9, u_int64_t VAR_10, u_int32_t VAR_11, uint8_t *VAR_12)
{
 int VAR_13;

 if (((VAR_10 & 0x1fffff) == VAR_10)
         && ((VAR_11 & 0xff) == VAR_11)
         && (VAR_9 == 0)) {

  struct scsi_rw_6 *VAR_14;

  VAR_14 = (struct scsi_rw_6 *)VAR_12;
  VAR_14->opcode = VAR_8 ? VAR_3 : VAR_7;
  FUNC_2(VAR_10, VAR_14->addr);
  VAR_14->length = VAR_11 & 0xff;
  VAR_14->control = 0;
  VAR_13 = sizeof(*VAR_14);
 } else if (((VAR_11 & 0xffff) == VAR_11) && ((VAR_10 & 0xffffffff) == VAR_10)) {

  struct scsi_rw_10 *VAR_15;

  VAR_15 = (struct scsi_rw_10 *)VAR_12;
  VAR_15->opcode = VAR_8 ? VAR_0 : VAR_4;
  VAR_15->byte2 = VAR_9;
  FUNC_3(VAR_10, VAR_15->addr);
  VAR_15->reserved = 0;
  FUNC_1(VAR_11, VAR_15->length);
  VAR_15->control = 0;
  VAR_13 = sizeof(*VAR_15);
 } else if (((VAR_11 & 0xffffffff) == VAR_11) &&
     ((VAR_10 & 0xffffffff) == VAR_10)) {

  struct scsi_rw_12 *VAR_16;

  VAR_16 = (struct scsi_rw_12 *)VAR_12;
  VAR_16->opcode = VAR_8 ? VAR_1 : VAR_5;
  VAR_16->byte2 = VAR_9;
  FUNC_3(VAR_10, VAR_16->addr);
  VAR_16->reserved = 0;
  FUNC_3(VAR_11, VAR_16->length);
  VAR_16->control = 0;
  VAR_13 = sizeof(*VAR_16);
 } else {




  struct scsi_rw_16 *VAR_17;

  VAR_17 = (struct scsi_rw_16 *)VAR_12;
  VAR_17->opcode = VAR_8 ? VAR_2 : VAR_6;
  VAR_17->byte2 = VAR_9;
  FUNC_0(VAR_10, VAR_17->addr);
  VAR_17->reserved = 0;
  FUNC_3(VAR_11, VAR_17->length);
  VAR_17->control = 0;
  VAR_13 = sizeof(*VAR_17);
 }

 return VAR_13;
}
