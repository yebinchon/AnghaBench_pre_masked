
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct ata_channel* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
    struct ata_channel *VAR_3 = FUNC_2(VAR_2);

    if (FUNC_0(VAR_3, VAR_0) & VAR_1) {
 FUNC_1(100);
 if (FUNC_0(VAR_3, VAR_0) & VAR_1)
     return 0;
    }
    return 1;
}
