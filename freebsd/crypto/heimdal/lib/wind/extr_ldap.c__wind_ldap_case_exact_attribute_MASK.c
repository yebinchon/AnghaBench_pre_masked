
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,size_t*,int const,size_t) ;

int
FUNC_2(const uint32_t *VAR_1,
    size_t VAR_2,
    uint32_t *VAR_3,
    size_t *VAR_4)
{
    size_t VAR_5 = 0, VAR_6 = 0;

    if (VAR_2 == 0) {
 *VAR_4 = 0;
 return 0;
    }

    if (FUNC_1(VAR_3, &VAR_5, 0x20, *VAR_4))
 return VAR_0;
    while(VAR_6 < VAR_2 && VAR_1[VAR_6] == 0x20)
 VAR_6++;

    while (VAR_6 < VAR_2) {
 if (VAR_1[VAR_6] == 0x20) {
     if (FUNC_1(VAR_3, &VAR_5, 0x20, *VAR_4) ||
  FUNC_1(VAR_3, &VAR_5, 0x20, *VAR_4))
  return VAR_0;
     while(VAR_6 < VAR_2 && VAR_1[VAR_6] == 0x20)
  VAR_6++;
 } else {
     if (FUNC_1(VAR_3, &VAR_5, VAR_1[VAR_6++], *VAR_4))
  return VAR_0;
 }
    }
    FUNC_0(VAR_5 > 0);


    if (VAR_5 == 1 && VAR_3[0] == 0x20)
 VAR_5 = 0;
    else if (VAR_3[VAR_5 - 1] == 0x20) {
 if (VAR_3[VAR_5 - 2] == 0x20)
     VAR_5--;
    } else
 FUNC_1(VAR_3, &VAR_5, 0x20, *VAR_4);

    *VAR_4 = VAR_5;

    return 0;
}
