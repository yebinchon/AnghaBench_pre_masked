
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int8_t ;
struct scsi_inquiry_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct scsi_inquiry_data const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct scsi_inquiry_data const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_2(const struct scsi_inquiry_data *VAR_2)
{
 u_int8_t VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == VAR_1)
  return (0);
 if (FUNC_0(VAR_2) == VAR_0)
  return (0);
 return (1);
}
