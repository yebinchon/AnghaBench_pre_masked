
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* charclass ;


 unsigned int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (unsigned VAR_1, charclass VAR_2)
{
  VAR_2[VAR_1 / VAR_0] &= ~(1 << VAR_1 % VAR_0);
}
