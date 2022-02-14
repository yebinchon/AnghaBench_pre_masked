
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct ata_channel* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct ata_channel *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, 0);
 if ((VAR_2->flags & VAR_0) == 0)
  FUNC_1(VAR_1, 1);

 return FUNC_0(VAR_1);
}
