
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_key_t ;


 int VAR_0 ;

__attribute__((used)) static hash_key_t
FUNC_0(hash_key_t VAR_1, const char VAR_2, const char VAR_3)
{
  VAR_1 -= (VAR_0 * 0x10000u * ((unsigned char) VAR_2));

  VAR_1 -= (unsigned char)VAR_2;
  VAR_1 += (unsigned char)VAR_3;

  return VAR_1 + VAR_1 * 0x10000;
}
