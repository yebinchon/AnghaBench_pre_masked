
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int64_t ;
struct scsi_rw_6 {int addr; } ;
struct scsi_rw_16 {int addr; } ;
struct scsi_rw_12 {int addr; } ;
struct scsi_rw_10 {int addr; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u_int64_t
FUNC_3(u_int8_t *VAR_0)
{
 u_int64_t VAR_1;

 switch (VAR_0[0]) {
 case 132:
 case 128:
  VAR_1 = FUNC_0(((struct scsi_rw_6 *)VAR_0)->addr);
  break;
 case 135:
 case 131:
  VAR_1 = FUNC_1(((struct scsi_rw_10 *)VAR_0)->addr);
  break;
 case 134:
 case 130:
  VAR_1 = FUNC_1(((struct scsi_rw_12 *)VAR_0)->addr);
  break;
 case 133:
 case 129:
  VAR_1 = FUNC_2(((struct scsi_rw_16 *)VAR_0)->addr);
  break;
 default:
  VAR_1 = 0;
  break;
 }
 return(VAR_1);
}
