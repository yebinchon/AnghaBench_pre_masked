
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {scalar_t__ unit; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 struct ata_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct ata_channel *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->unit == 0)
  return (VAR_2);
 return (FUNC_0(VAR_0, VAR_1, VAR_2));
}
