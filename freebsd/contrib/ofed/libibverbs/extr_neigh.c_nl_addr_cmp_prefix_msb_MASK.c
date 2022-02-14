
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1, VAR_3);
 int VAR_5 = VAR_4 / 8;
 int VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_5);

 if (VAR_6 == 0) {
  int VAR_7 = ((1UL << (VAR_4 % 8)) - 1UL) << (8 - VAR_4);

  VAR_6 = (((uint8_t *)VAR_0)[VAR_5] & VAR_7) -
      (((uint8_t *)VAR_2)[VAR_5] & VAR_7);
 }

 return VAR_6;
}
