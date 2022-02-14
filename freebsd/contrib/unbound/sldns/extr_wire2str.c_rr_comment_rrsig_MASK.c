
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (char**,size_t*,char*,int) ;

__attribute__((used)) static int FUNC_2(char** VAR_0, size_t* VAR_1, uint8_t* VAR_2,
 size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 uint8_t* VAR_6;
 if(VAR_3 < VAR_4 + 10) return 0;
 VAR_5 = FUNC_0(VAR_2+VAR_4+8);
 if(VAR_3 < VAR_4 + 10 + VAR_5) return 0;
 VAR_6 = VAR_2 + VAR_4 + 10;
 if(VAR_5 < 18) return 0;
 return FUNC_1(VAR_0, VAR_1, " ;{id = %d}",
  (int)FUNC_0(VAR_6+16));
}
