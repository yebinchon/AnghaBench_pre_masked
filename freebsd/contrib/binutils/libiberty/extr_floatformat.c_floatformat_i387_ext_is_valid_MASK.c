
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int exp_len; int man_start; int totalsize; int byteorder; int exp_start; } ;


 unsigned long FUNC_0 (unsigned char const*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1 (const struct floatformat *VAR_0, const void *VAR_1)
{




  unsigned long VAR_2, VAR_3;
  const unsigned char *VAR_4 = (const unsigned char *) VAR_1;

  VAR_2 = FUNC_0 (VAR_4, VAR_0->byteorder, VAR_0->totalsize,
   VAR_0->exp_start, VAR_0->exp_len);
  VAR_3 = FUNC_0 (VAR_4, VAR_0->byteorder, VAR_0->totalsize,
         VAR_0->man_start, 1);

  if ((VAR_2 == 0) != (VAR_3 == 0))
    return 0;
  else
    return 1;
}
