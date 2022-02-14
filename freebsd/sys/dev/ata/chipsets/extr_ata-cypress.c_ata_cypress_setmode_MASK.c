
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {scalar_t__ unit; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ata_channel* FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, int VAR_2, int VAR_3)
{
 device_t VAR_4 = FUNC_0(VAR_1);
 struct ata_channel *VAR_5 = FUNC_1(VAR_1);

 VAR_3 = FUNC_2(VAR_3, VAR_0);


 if (VAR_3 == VAR_0) {
  FUNC_3(VAR_4, VAR_5->unit ? 0x4e : 0x4c, 0x2020, 2);
 }

 return (VAR_3);
}
