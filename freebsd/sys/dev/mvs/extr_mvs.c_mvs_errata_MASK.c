
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mvs_channel {int quirks; int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mvs_channel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_5)
{
 struct mvs_channel *VAR_6 = FUNC_2(VAR_5);
 uint32_t VAR_7;

 if (VAR_6->quirks & VAR_0) {
  VAR_7 = FUNC_0(VAR_6->r_mem, VAR_1);
  VAR_7 &= ~(0x3 << 27);
  VAR_7 |= (0x1 << 27);
  VAR_7 &= ~(0x3 << 29);
  VAR_7 |= (0x1 << 29);
  FUNC_1(VAR_6->r_mem, VAR_1, VAR_7);

  VAR_7 = FUNC_0(VAR_6->r_mem, VAR_2);
  VAR_7 &= ~0x1;
  VAR_7 |= (0x1 << 16);
  FUNC_1(VAR_6->r_mem, VAR_2, VAR_7);

  VAR_7 = FUNC_0(VAR_6->r_mem, VAR_4);
  VAR_7 &= ~0xf;
  VAR_7 |= 0x8;
  VAR_7 &= ~(0x1 << 14);
  FUNC_1(VAR_6->r_mem, VAR_4, VAR_7);

  VAR_7 = FUNC_0(VAR_6->r_mem, VAR_3);
  VAR_7 &= ~0xf;
  VAR_7 |= 0x8;
  VAR_7 &= ~(0x1 << 14);
  FUNC_1(VAR_6->r_mem, VAR_3, VAR_7);
 }
}
