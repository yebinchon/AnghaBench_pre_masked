
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct ath_hal {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hal*,int ,int ,size_t) ;

void
FUNC_1(struct ath_hal *VAR_6, uint32_t VAR_7, int VAR_8,
    uint8_t *VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;

 FUNC_0(VAR_6, VAR_1, VAR_4, 3);
 FUNC_0(VAR_6, VAR_2, VAR_4, 3);

 FUNC_0(VAR_6, VAR_3, VAR_5, VAR_7);

 VAR_11 = VAR_8;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  if (VAR_10 < VAR_11)
   VAR_9[VAR_10] = 0x0;
  else
   VAR_9[VAR_10] = 0xFF;
}
