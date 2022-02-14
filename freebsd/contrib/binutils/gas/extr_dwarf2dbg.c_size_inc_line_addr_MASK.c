
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int addressT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2 (int VAR_5, addressT VAR_6)
{
  unsigned int VAR_7, VAR_8;
  int VAR_9 = 0;


  FUNC_0 (&VAR_6);




  if (VAR_5 == VAR_3)
    {
      if (VAR_6 == VAR_4)
 VAR_9 = 1;
      else
 VAR_9 = 1 + FUNC_1 (VAR_6, 0);
      return VAR_9 + 3;
    }


  VAR_7 = VAR_5 - VAR_0;



  if (VAR_7 >= VAR_2)
    {
      VAR_9 = 1 + FUNC_1 (VAR_5, 1);
      VAR_5 = 0;
      VAR_7 = 0 - VAR_0;
    }


  VAR_7 += VAR_1;


  if (VAR_6 < 256 + VAR_4)
    {

      VAR_8 = VAR_7 + VAR_6 * VAR_2;
      if (VAR_8 <= 255)
 return VAR_9 + 1;


      VAR_8 = VAR_7 + (VAR_6 - VAR_4) * VAR_2;
      if (VAR_8 <= 255)
 return VAR_9 + 2;
    }


  VAR_9 += 1 + FUNC_1 (VAR_6, 0);


  VAR_9 += 1;

  return VAR_9;
}
