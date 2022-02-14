
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ata_chip_id {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ata_chip_id* FUNC_0 (int ,struct ata_chip_id const*) ;
 scalar_t__ FUNC_1 (int ,int **,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

const struct ata_chip_id *
FUNC_5(device_t VAR_1, const struct ata_chip_id *VAR_2, int VAR_3)
{
    const struct ata_chip_id *VAR_4;
    device_t *VAR_5;
    int VAR_6, VAR_7;
    uint8_t VAR_8;

    if (FUNC_1(FUNC_2(VAR_1), &VAR_5, &VAR_6))
 return (((void*)0));

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
 VAR_8 = FUNC_4(VAR_5[VAR_7]);
 if ((VAR_3 >= 0 && VAR_8 == VAR_3) || (VAR_3 < 0 && VAR_8 <= -VAR_3)) {
     VAR_4 = FUNC_0(VAR_5[VAR_7], VAR_2);
     if (VAR_4 != ((void*)0)) {
  FUNC_3(VAR_5, VAR_0);
  return (VAR_4);
     }
 }
    }
    FUNC_3(VAR_5, VAR_0);
    return (((void*)0));
}
