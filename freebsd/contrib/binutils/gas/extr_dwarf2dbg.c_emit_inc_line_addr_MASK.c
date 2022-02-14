
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ offsetT ;
typedef int addressT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void
FUNC_3 (int VAR_11, addressT VAR_12, char *VAR_13, int VAR_14)
{
  unsigned int VAR_15, VAR_16;
  int VAR_17 = 0;
  char *VAR_18 = VAR_13 + VAR_14;



  FUNC_0 ((offsetT) VAR_12 >= 0);


  FUNC_2 (&VAR_12);




  if (VAR_11 == VAR_9)
    {
      if (VAR_12 == VAR_10)
 *VAR_13++ = VAR_6;
      else
 {
   *VAR_13++ = VAR_5;
   VAR_13 += FUNC_1 (VAR_13, VAR_12, 0);
 }

      *VAR_13++ = VAR_8;
      *VAR_13++ = 1;
      *VAR_13++ = VAR_3;
      goto done;
    }


  VAR_15 = VAR_11 - VAR_0;



  if (VAR_15 >= VAR_2)
    {
      *VAR_13++ = VAR_4;
      VAR_13 += FUNC_1 (VAR_13, VAR_11, 1);

      VAR_11 = 0;
      VAR_15 = 0 - VAR_0;
      VAR_17 = 1;
    }



  if (VAR_11 == 0 && VAR_12 == 0)
    {
      *VAR_13++ = VAR_7;
      goto done;
    }


  VAR_15 += VAR_1;


  if (VAR_12 < 256 + VAR_10)
    {

      VAR_16 = VAR_15 + VAR_12 * VAR_2;
      if (VAR_16 <= 255)
 {
   *VAR_13++ = VAR_16;
   goto done;
 }


      VAR_16 = VAR_15 + (VAR_12 - VAR_10) * VAR_2;
      if (VAR_16 <= 255)
 {
   *VAR_13++ = VAR_6;
   *VAR_13++ = VAR_16;
   goto done;
 }
    }


  *VAR_13++ = VAR_5;
  VAR_13 += FUNC_1 (VAR_13, VAR_12, 0);

  if (VAR_17)
    *VAR_13++ = VAR_7;
  else
    *VAR_13++ = VAR_15;

 done:
  FUNC_0 (VAR_13 == VAR_18);
}
