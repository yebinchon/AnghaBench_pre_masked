
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static inline u8 FUNC_0(int VAR_2)
{
 u8 VAR_3 = VAR_1[VAR_2];

 if (VAR_2 >= 50)
  VAR_3 += VAR_0[VAR_2-50];
 return VAR_3;
}
