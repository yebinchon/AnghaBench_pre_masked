
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void
FUNC_2(uint64_t VAR_1, uint64_t VAR_2, uint64_t *VAR_3)
{
 uint64_t VAR_4, VAR_5, VAR_6, VAR_7;
 uint64_t VAR_8[2];

 VAR_4 = VAR_1 >> 32;
 VAR_5 = VAR_2 >> 32;

 VAR_6 = VAR_1 & VAR_0;
 VAR_7 = VAR_2 & VAR_0;

 VAR_3[0] = VAR_6 * VAR_7;
 VAR_3[1] = VAR_4 * VAR_5;

 VAR_8[0] = VAR_4 * VAR_7;
 VAR_8[1] = 0;
 FUNC_1(VAR_8, 32);
 FUNC_0(VAR_3, VAR_8, VAR_3);

 VAR_8[0] = VAR_5 * VAR_6;
 VAR_8[1] = 0;
 FUNC_1(VAR_8, 32);
 FUNC_0(VAR_3, VAR_8, VAR_3);
}
