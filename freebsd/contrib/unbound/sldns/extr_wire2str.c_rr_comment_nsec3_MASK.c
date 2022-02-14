
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 size_t FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (char**,size_t*,char*) ;

__attribute__((used)) static int FUNC_2(char** VAR_1, size_t* VAR_2, uint8_t* VAR_3,
 size_t VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 uint8_t* VAR_7;
 int VAR_8 = 0;
 if(VAR_4 < VAR_5 + 10) return 0;
 VAR_6 = FUNC_0(VAR_3+VAR_5+8);
 if(VAR_4 < VAR_5 + 10 + VAR_6) return 0;
 VAR_7 = VAR_3 + VAR_5 + 10;
 if(VAR_6 < 2) return 0;
 if((VAR_7[1] & VAR_0))
  VAR_8 += FUNC_1(VAR_1, VAR_2, " ;{flags: optout}");
 return VAR_8;
}
