
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int*,int ,int) ;

void FUNC_2 (size_t VAR_2, void **VAR_3, void **VAR_4)
{



  typedef unsigned char digit_t;






  unsigned int VAR_5[(VAR_1 + 1)];

  int VAR_6;
  size_t VAR_7;
  size_t VAR_8;






  if ((sizeof (void *) / sizeof (digit_t)) % 2 != 0)
    FUNC_0 ();


  for (VAR_7 = 0, VAR_8 = 0; VAR_7 < sizeof (size_t); ++VAR_7)
    {
      VAR_8 *= (VAR_1 + 1);
      VAR_8 += VAR_7;
    }
  VAR_6 = (((char *)&VAR_8)[0] == 0);



  for (VAR_7 = 0; VAR_7 < sizeof (void *) / sizeof (digit_t); ++VAR_7)
    {
      digit_t *VAR_9;
      digit_t *VAR_10;
      digit_t *VAR_11;
      unsigned int *VAR_12;
      void **VAR_13;



      if (VAR_6)
 VAR_8 = sizeof (void *) / sizeof (digit_t) - VAR_7;
      else
 VAR_8 = VAR_7;



      FUNC_1 (VAR_5, 0, (VAR_1 + 1) * sizeof (unsigned int));




      VAR_10 = ((digit_t *) VAR_3) + VAR_8;
      VAR_11 = ((digit_t *) (VAR_3 + VAR_2)) + VAR_8;




      for (VAR_9 = VAR_10;
    VAR_9 < VAR_11;
    VAR_9 += sizeof (void *) / sizeof (digit_t))
 ++VAR_5[*VAR_9];



      for (VAR_12 = VAR_5 + 1; VAR_12 < VAR_5 + (VAR_1 + 1); ++VAR_12)
 *VAR_12 += VAR_12[-1];


      for (VAR_13 = VAR_3 + VAR_2 - 1; VAR_13 >= VAR_3; --VAR_13)
 VAR_4[--VAR_5[((digit_t *) VAR_13)[VAR_8]]] = *VAR_13;



      VAR_13 = VAR_3;
      VAR_3 = VAR_4;
      VAR_4 = VAR_13;
    }
}
