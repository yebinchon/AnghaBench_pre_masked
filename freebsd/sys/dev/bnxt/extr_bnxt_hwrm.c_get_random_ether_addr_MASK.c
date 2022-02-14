
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int temp ;


 int VAR_0 ;
 int FUNC_0 (int**,int,int ) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static inline void
FUNC_2(uint8_t *VAR_1)
{
 uint8_t VAR_2[VAR_0];

 FUNC_0(&VAR_2, sizeof(VAR_2), 0);
 VAR_2[0] &= 0xFE;
 VAR_2[0] |= 0x02;
 FUNC_1(VAR_2, VAR_1, sizeof(VAR_2));
}
