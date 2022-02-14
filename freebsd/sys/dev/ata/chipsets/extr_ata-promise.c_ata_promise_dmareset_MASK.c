
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 struct ata_channel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_6)
{
    struct ata_channel *VAR_7 = FUNC_2(VAR_6);

    FUNC_1(VAR_7, VAR_0,
   FUNC_0(VAR_7, VAR_0) & ~VAR_1);
    FUNC_1(VAR_7, VAR_4, VAR_3 | VAR_2);
    VAR_7->flags &= ~VAR_5;
}
