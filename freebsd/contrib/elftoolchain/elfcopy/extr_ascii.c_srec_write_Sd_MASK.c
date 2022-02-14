
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;


 int FUNC_0 (int,char,size_t,int const*,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, char VAR_1, uint64_t VAR_2, const void *VAR_3, size_t VAR_4,
    size_t VAR_5)
{
 const uint8_t *VAR_6, *VAR_7;

 VAR_6 = VAR_3;
 VAR_7 = VAR_6 + VAR_4;
 while (VAR_7 - VAR_6 >= (int) VAR_5) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6, VAR_5);
  VAR_2 += VAR_5;
  VAR_6 += VAR_5;
 }
 if (VAR_7 - VAR_6 > 0)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6, VAR_7 - VAR_6);
}
