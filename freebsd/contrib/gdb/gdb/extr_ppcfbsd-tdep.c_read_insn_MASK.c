
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static unsigned int
FUNC_1 (CORE_ADDR VAR_0)
{
  unsigned char VAR_1[4];

  FUNC_0 (VAR_0, VAR_1, 4);
  return (VAR_1[0] << 24) | (VAR_1[1] << 16) | (VAR_1[2] << 8) | VAR_1[3];
}
