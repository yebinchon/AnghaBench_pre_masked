
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char word ;
typedef size_t off_t ;


 char VAR_0 ;

__attribute__((used)) static size_t
FUNC_0 (word const *VAR_1, word const *VAR_2, off_t *VAR_3)
{
  word VAR_4;
  word const *VAR_5, *VAR_6;
  char const *VAR_7, *VAR_8;
  size_t VAR_9 = 0;
  word VAR_10;
  int VAR_11;

  VAR_10 = 0;
  for (VAR_11 = 0; VAR_11 < sizeof VAR_10; VAR_11++)
    VAR_10 = (VAR_10 << VAR_0) | '\n';




  for (VAR_5 = VAR_1, VAR_6 = VAR_2; (VAR_4 = *VAR_5) == *VAR_6; VAR_5++, VAR_6++)
    {
      VAR_4 ^= VAR_10;
      for (VAR_11 = 0; VAR_11 < sizeof VAR_4; VAR_11++)
 {
   unsigned char VAR_12 = VAR_4;
   VAR_9 += ! VAR_12;
   VAR_4 >>= VAR_0;
 }
    }



  for (VAR_7 = (char const *) VAR_5, VAR_8 = (char const *) VAR_6;
       *VAR_7 == *VAR_8;
       VAR_7++, VAR_8++)
    VAR_9 += *VAR_7 == '\n';

  *VAR_3 += VAR_9;
  return VAR_7 - (char const *) VAR_1;
}
