
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quoting_options {int* quote_these_too; } ;


 unsigned char VAR_0 ;
 struct quoting_options VAR_1 ;

int
FUNC_0 (struct quoting_options *VAR_2, char VAR_3, int VAR_4)
{
  unsigned char VAR_5 = VAR_3;
  int *VAR_6 = (VAR_2 ? VAR_2 : &VAR_1)->quote_these_too + VAR_5 / VAR_0;
  int VAR_7 = VAR_5 % VAR_0;
  int VAR_8 = (*VAR_6 >> VAR_7) & 1;
  *VAR_6 ^= ((VAR_4 & 1) ^ VAR_8) << VAR_7;
  return VAR_8;
}
