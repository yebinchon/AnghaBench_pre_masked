
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(qla_host_t *VAR_1, uint32_t VAR_2)
{
 if ((VAR_2 == VAR_0) ||
  (VAR_2 == 0x00112040) ||
  (VAR_2 == 0x00112048) ||
  ((VAR_2 & 0xFFFF0FFF) == 0x001100C4) ||
  ((VAR_2 & 0xFFFF0FFF) == 0x001100C8) ||
  ((VAR_2 & 0x0FF00000) == 0x00200000) ||
  (VAR_2 == 0x022021FC) ||
  (VAR_2 == 0x0330001C) ||
  (VAR_2 == 0x03300024) ||
  (VAR_2 == 0x033000A8) ||
  (VAR_2 == 0x033000C8) ||
  (VAR_2 == 0x033000BC) ||
  ((VAR_2 & 0x0FF00000) == 0x03A00000) ||
  (VAR_2 == 0x03B0001C))
  return (VAR_0);
 else
  return (VAR_2);
}
