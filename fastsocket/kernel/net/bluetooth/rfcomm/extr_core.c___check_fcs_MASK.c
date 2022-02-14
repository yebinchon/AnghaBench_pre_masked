
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 int VAR_0 ;
 size_t FUNC_0 (size_t*) ;
 int* VAR_1 ;

__attribute__((used)) static inline int FUNC_1(u8 *VAR_2, int VAR_3, u8 VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 != VAR_0)
  VAR_5 = VAR_1[VAR_5 ^ VAR_2[2]];

 return VAR_1[VAR_5 ^ VAR_4] != 0xcf;
}
