
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int,int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(
  uint32_t *VAR_0, uint8_t *VAR_1, unsigned int VAR_2)
{
 uint32_t VAR_3 = 0xff;
 unsigned int VAR_4;

 FUNC_1(VAR_2 <= 4);

 *VAR_0 = 0;

 for (VAR_4 = 0 ; VAR_4 < VAR_2 ; VAR_4++) {
  FUNC_0(*VAR_0, VAR_3, (sizeof(uint8_t) * VAR_4), VAR_1[VAR_4]);
  VAR_3 = VAR_3 << sizeof(uint8_t);
 }
}
