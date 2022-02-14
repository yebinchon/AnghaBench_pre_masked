
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ata_channel {scalar_t__ unit; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ata_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
    struct ata_channel *VAR_1 = FUNC_2(VAR_0);
    u_int8_t VAR_2;

    if (((VAR_2 = FUNC_3(FUNC_1(VAR_0), 0x71, 1)) &
  (VAR_1->unit ? 0x08 : 0x04))) {
 FUNC_4(FUNC_1(VAR_0), 0x71,
    VAR_2 & ~(VAR_1->unit ? 0x04 : 0x08), 1);
 return FUNC_0(VAR_0);
    }
    return 0;
}
