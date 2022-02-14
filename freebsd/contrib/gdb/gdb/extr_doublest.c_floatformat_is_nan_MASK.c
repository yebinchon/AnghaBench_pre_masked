
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {long exp_nan; unsigned int exp_start; unsigned int exp_len; int man_len; unsigned int man_start; scalar_t__ intbit; int totalsize; int byteorder; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (unsigned char*,int ,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int,int) ;

int
FUNC_3 (const struct floatformat *VAR_1, char *VAR_2)
{
  unsigned char *VAR_3 = (unsigned char *) VAR_2;
  long VAR_4;
  unsigned long VAR_5;
  unsigned int VAR_6, VAR_7;
  int VAR_8;

  FUNC_0 (VAR_1 != ((void*)0));

  if (! VAR_1->exp_nan)
    return 0;

  VAR_4 = FUNC_1 (VAR_3, VAR_1->byteorder, VAR_1->totalsize,
   VAR_1->exp_start, VAR_1->exp_len);

  if (VAR_4 != VAR_1->exp_nan)
    return 0;

  VAR_8 = VAR_1->man_len;
  VAR_7 = VAR_1->man_start;

  while (VAR_8 > 0)
    {
      VAR_6 = FUNC_2 (VAR_8, 32);

      VAR_5 = FUNC_1 (VAR_3, VAR_1->byteorder, VAR_1->totalsize,
   VAR_7, VAR_6);


      if (VAR_7 == VAR_1->man_start
   && VAR_1->intbit == VAR_0)
 VAR_5 &= ~(1 << (VAR_6 - 1));

      if (VAR_5)
 return 1;

      VAR_7 += VAR_6;
      VAR_8 -= VAR_6;
    }

  return 0;
}
