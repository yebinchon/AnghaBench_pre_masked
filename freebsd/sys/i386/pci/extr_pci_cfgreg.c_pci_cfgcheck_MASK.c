
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int ,int,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(int VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint8_t VAR_4;
 uint8_t VAR_5;
 int VAR_6;

 if (VAR_0)
  FUNC_4("pci_cfgcheck:\tdevice ");

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_0)
   FUNC_4("%d ", VAR_5);

  VAR_6 = FUNC_3(0, VAR_5, 0, 0, 4);
  VAR_2 = FUNC_1(VAR_6);
  if (VAR_2 == 0 || VAR_2 == 0xffffffff)
   continue;

  VAR_6 = FUNC_3(0, VAR_5, 0, 8, 4);
  VAR_3 = FUNC_1(VAR_6) >> 8;
  if (VAR_0)
   FUNC_4("[class=%06x] ", VAR_3);
  if (VAR_3 == 0 || (VAR_3 & 0xf870ff) != 0)
   continue;

  VAR_6 = FUNC_3(0, VAR_5, 0, 14, 1);
  VAR_4 = FUNC_0(VAR_6);
  if (VAR_0)
   FUNC_4("[hdr=%02x] ", VAR_4);
  if ((VAR_4 & 0x7e) != 0)
   continue;

  if (VAR_0)
   FUNC_4("is there (id=%08x)\n", VAR_2);

  FUNC_2();
  return (1);
 }
 if (VAR_0)
  FUNC_4("-- nothing found\n");

 FUNC_2();
 return (0);
}
