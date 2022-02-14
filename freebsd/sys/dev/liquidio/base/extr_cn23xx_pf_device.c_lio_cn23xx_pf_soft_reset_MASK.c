
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct octeon_device*,char*) ;
 int FUNC_1 (struct octeon_device*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct octeon_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int,int ) ;
 scalar_t__ FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (struct octeon_device*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct octeon_device *VAR_3)
{

 FUNC_6(VAR_3, VAR_2, 0xFF);

 FUNC_0(VAR_3, "BIST enabled for CN23XX soft reset\n");

 FUNC_6(VAR_3, VAR_1, 0x1234ULL);


 FUNC_3(VAR_3, VAR_0);
 FUNC_4(VAR_3, 1, VAR_0);


 FUNC_2(100);

 if (FUNC_5(VAR_3, VAR_1)) {
  FUNC_1(VAR_3, "Soft reset failed\n");
  return (1);
 }

 FUNC_0(VAR_3, "Reset completed\n");


 FUNC_6(VAR_3, VAR_2, 0xFF);

 return (0);
}
