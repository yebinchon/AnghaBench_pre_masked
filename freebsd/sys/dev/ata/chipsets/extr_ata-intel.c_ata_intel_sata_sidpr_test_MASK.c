
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ata_channel {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int*) ;
 int FUNC_1 (int ,int,int ,int) ;
 scalar_t__ VAR_5 ;
 struct ata_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_6)
{
 struct ata_channel *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;
 uint32_t VAR_9;

 VAR_8 = (VAR_7->flags & VAR_0) ? 0 : 1;
 for (; VAR_8 >= 0; VAR_8--) {
  FUNC_0(VAR_6, VAR_8, VAR_1, &VAR_9);
  if ((VAR_9 & VAR_4) ==
      (VAR_2 | VAR_3))
   return (1);
  VAR_9 |= VAR_2 | VAR_3;
  FUNC_1(VAR_6, VAR_8, VAR_1, VAR_9);
  FUNC_0(VAR_6, VAR_8, VAR_1, &VAR_9);
  if ((VAR_9 & VAR_4) ==
      (VAR_2 | VAR_3))
   return (1);
 }
 if (VAR_5)
  FUNC_3(VAR_6,
      "SControl registers are not functional: %08x\n", VAR_9);
 return (0);
}
