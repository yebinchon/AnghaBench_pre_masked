
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,char*) ;

void
FUNC_3(uint32_t *VAR_3, uint32_t *VAR_4)
{
 uint64_t VAR_5 = VAR_0;
 phandle_t VAR_6;







 *VAR_3 = 0;
 *VAR_4 = 0;
 if ((VAR_6 = FUNC_0("/")) == -1)
  return;
 if (FUNC_2(VAR_6, "marvell,armada380"))
  VAR_5 = VAR_1;

 *VAR_3 = FUNC_1(VAR_2, VAR_5, 0) >> 16;
 *VAR_4 = FUNC_1(VAR_2, VAR_5, 8) & 0xff;
}
