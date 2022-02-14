
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int FUNC_2 (int ) ;
 struct ata_channel* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
    struct ata_channel *VAR_3 = FUNC_3(VAR_2);

    FUNC_1(VAR_3, VAR_0, 0x0b);
    if (FUNC_0(VAR_3, VAR_1) & 0x20) {
 return FUNC_2(VAR_2);
    }
    return 0;
}
