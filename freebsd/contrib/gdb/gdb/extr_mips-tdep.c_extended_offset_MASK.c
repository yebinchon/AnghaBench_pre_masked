
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;



__attribute__((used)) static CORE_ADDR
FUNC_0 (unsigned int VAR_0)
{
  CORE_ADDR VAR_1;
  VAR_1 = (VAR_0 >> 21) & 0x3f;
  VAR_1 = VAR_1 << 6;
  VAR_1 |= (VAR_0 >> 16) & 0x1f;
  VAR_1 = VAR_1 << 5;
  VAR_1 |= VAR_0 & 0x01f;
  return VAR_1;
}
