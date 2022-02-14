
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int boolean_t ;
typedef int POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int ,int *,scalar_t__,int) ;

__attribute__((used)) static boolean_t
FUNC_2(POCE_SOFTC VAR_2, const char *VAR_3,
    int VAR_4, uint32_t VAR_5,
    uint32_t VAR_6, uint32_t VAR_7)
{
 uint32_t VAR_8;
 uint8_t VAR_9[4];
 int VAR_10;

 VAR_8 = VAR_7 + VAR_5 + VAR_6 - 4;

 VAR_3 += VAR_8;

 VAR_10 = FUNC_1(VAR_2, VAR_9,
   (VAR_6 - 4), VAR_4);
 if (VAR_10)
  return VAR_1;


 if (FUNC_0(VAR_9, VAR_3, 4))
  return VAR_1;
 else
  return VAR_0;
}
