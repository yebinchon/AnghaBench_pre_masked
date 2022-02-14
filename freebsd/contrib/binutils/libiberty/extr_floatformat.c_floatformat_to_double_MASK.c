
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {unsigned int exp_start; int exp_len; unsigned long exp_nan; unsigned int man_start; int man_len; unsigned int sign_start; long exp_bias; scalar_t__ intbit; int totalsize; int byteorder; } ;


 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ VAR_2 ;
 long FUNC_0 (unsigned char const*,int ,int ,unsigned int,int) ;
 double FUNC_1 (double,long) ;
 unsigned int FUNC_2 (int,int) ;

void
FUNC_3 (const struct floatformat *VAR_3,
                       const void *VAR_4, double *VAR_5)
{
  const unsigned char *VAR_6 = (const unsigned char *) VAR_4;
  double VAR_7;
  long VAR_8;
  unsigned long VAR_9;
  unsigned int VAR_10, VAR_11;
  int VAR_12;
  int VAR_13;

  VAR_8 = FUNC_0 (VAR_6, VAR_3->byteorder, VAR_3->totalsize,
   VAR_3->exp_start, VAR_3->exp_len);




  if ((unsigned long) VAR_8 == VAR_3->exp_nan)
    {
      int VAR_14;

      VAR_11 = VAR_3->man_start;
      VAR_12 = VAR_3->man_len;
      VAR_14 = 0;
      while (VAR_12 > 0)
 {
   VAR_10 = FUNC_2 (VAR_12, 32);

   if (FUNC_0 (VAR_6, VAR_3->byteorder, VAR_3->totalsize,
    VAR_11, VAR_10) != 0)
     {

       VAR_14 = 1;
       break;
     }

   VAR_11 += VAR_10;
   VAR_12 -= VAR_10;
 }
      if (VAR_14)
 VAR_7 = VAR_1;
      else
 VAR_7 = VAR_0;

      if (FUNC_0 (VAR_6, VAR_3->byteorder, VAR_3->totalsize, VAR_3->sign_start, 1))
 VAR_7 = -VAR_7;

      *VAR_5 = VAR_7;

      return;
    }

  VAR_12 = VAR_3->man_len;
  VAR_11 = VAR_3->man_start;
  VAR_7 = 0.0;

  VAR_13 = VAR_8 == 0 || (unsigned long) VAR_8 == VAR_3->exp_nan;


  if (!VAR_13)
    VAR_8 -= VAR_3->exp_bias;







  if (!VAR_13)
    {
      if (VAR_3->intbit == VAR_2)
 VAR_7 = FUNC_1 (1.0, VAR_8);
      else
 VAR_8++;
    }

  while (VAR_12 > 0)
    {
      VAR_10 = FUNC_2 (VAR_12, 32);

      VAR_9 = FUNC_0 (VAR_6, VAR_3->byteorder, VAR_3->totalsize,
    VAR_11, VAR_10);



      if (VAR_13 && VAR_8 == 0 && VAR_9 != 0)
 VAR_7 += FUNC_1 ((double)VAR_9,
        (- VAR_3->exp_bias
         - VAR_10
         - (VAR_11 - VAR_3->man_start)
         + 1));
      else
 VAR_7 += FUNC_1 ((double)VAR_9, VAR_8 - VAR_10);
      if (VAR_8 != 0)
 VAR_8 -= VAR_10;
      VAR_11 += VAR_10;
      VAR_12 -= VAR_10;
    }


  if (FUNC_0 (VAR_6, VAR_3->byteorder, VAR_3->totalsize, VAR_3->sign_start, 1))
    VAR_7 = -VAR_7;
  *VAR_5 = VAR_7;
}
