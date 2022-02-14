
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ata_params*) ;
 scalar_t__ FUNC_1 (struct ata_params*) ;
 scalar_t__ FUNC_2 (struct ata_params*) ;
 int FUNC_3 (int,scalar_t__) ;

int
FUNC_4(struct ata_params *VAR_3, int VAR_4)
{

 if (VAR_4 == 0)
  VAR_4 = VAR_0;
 if (VAR_4 >= VAR_1 && FUNC_1(VAR_3) > 0)
  return (FUNC_3(VAR_4, FUNC_1(VAR_3)));
 if (VAR_4 >= VAR_2 && FUNC_2(VAR_3) > 0)
  return (FUNC_3(VAR_4, FUNC_2(VAR_3)));
 return (FUNC_3(VAR_4, FUNC_0(VAR_3)));
}
