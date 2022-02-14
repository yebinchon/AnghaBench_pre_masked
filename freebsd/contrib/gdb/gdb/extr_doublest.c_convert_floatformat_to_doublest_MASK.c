
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int totalsize; unsigned int exp_start; int exp_len; int man_len; unsigned int man_start; long exp_nan; long exp_bias; scalar_t__ intbit; unsigned int sign_start; int byteorder; } ;
typedef double DOUBLEST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (unsigned char*,int ,int,unsigned int,int) ;
 double FUNC_1 (double,long) ;
 unsigned int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (const struct floatformat *VAR_3,
     const void *VAR_4,
     DOUBLEST *VAR_5)
{
  unsigned char *VAR_6 = (unsigned char *) VAR_4;
  DOUBLEST VAR_7;
  long VAR_8;
  unsigned long VAR_9;
  unsigned int VAR_10, VAR_11;
  int VAR_12;
  int VAR_13;
  if (VAR_3->byteorder == VAR_2)
    {
      static unsigned char *VAR_14;
      unsigned char *VAR_15, *VAR_16;
      int VAR_17;

      VAR_17 = VAR_3->totalsize / VAR_0;
      VAR_17 >>= 3;

      if (VAR_14 == ((void*)0))
 {
   VAR_14 = (unsigned char *) FUNC_3 (VAR_3->totalsize);
 }
      VAR_16 = VAR_14;
      VAR_15 = VAR_6;
      VAR_6 = VAR_14;
      while (VAR_17-- > 0)
 {

   *VAR_16++ = VAR_15[4];
   *VAR_16++ = VAR_15[5];
   *VAR_16++ = VAR_15[6];
   *VAR_16++ = VAR_15[7];
   *VAR_16++ = VAR_15[0];
   *VAR_16++ = VAR_15[1];
   *VAR_16++ = VAR_15[2];
   *VAR_16++ = VAR_15[3];
   VAR_15 += 8;
 }
    }

  VAR_8 = FUNC_0 (VAR_6, VAR_3->byteorder, VAR_3->totalsize,
   VAR_3->exp_start, VAR_3->exp_len);




  VAR_12 = VAR_3->man_len;
  VAR_11 = VAR_3->man_start;
  VAR_7 = 0.0;

  VAR_13 = VAR_8 == 0 || VAR_8 == VAR_3->exp_nan;





  if (!VAR_13)
    VAR_8 -= VAR_3->exp_bias;
  else if (VAR_8 == 0)
    VAR_8 = 1 - VAR_3->exp_bias;







  if (!VAR_13)
    {
      if (VAR_3->intbit == VAR_1)
 VAR_7 = FUNC_1 (1.0, VAR_8);
      else
 VAR_8++;
    }

  while (VAR_12 > 0)
    {
      VAR_10 = FUNC_2 (VAR_12, 32);

      VAR_9 = FUNC_0 (VAR_6, VAR_3->byteorder, VAR_3->totalsize,
   VAR_11, VAR_10);

      VAR_7 += FUNC_1 ((double) VAR_9, VAR_8 - VAR_10);
      VAR_8 -= VAR_10;
      VAR_11 += VAR_10;
      VAR_12 -= VAR_10;
    }


  if (FUNC_0 (VAR_6, VAR_3->byteorder, VAR_3->totalsize, VAR_3->sign_start, 1))
    VAR_7 = -VAR_7;
  *VAR_5 = VAR_7;
}
