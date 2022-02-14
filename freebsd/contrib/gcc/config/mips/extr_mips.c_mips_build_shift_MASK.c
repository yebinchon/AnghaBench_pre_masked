
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_integer_op {unsigned int value; int code; } ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct mips_integer_op*,int) ;

__attribute__((used)) static unsigned int
FUNC_1 (struct mips_integer_op *VAR_1, HOST_WIDE_INT VAR_2)
{
  unsigned int VAR_3, VAR_4;



  VAR_4 = 0;
  while ((VAR_2 & 1) == 0)
    VAR_2 /= 2, VAR_4++;

  VAR_3 = FUNC_0 (VAR_1, VAR_2);
  VAR_1[VAR_3].code = VAR_0;
  VAR_1[VAR_3].value = VAR_4;
  return VAR_3 + 1;
}
