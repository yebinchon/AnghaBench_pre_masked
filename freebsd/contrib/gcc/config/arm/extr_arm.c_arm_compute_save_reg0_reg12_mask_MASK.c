
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (unsigned int) ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_3 () ;
 unsigned int VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;

__attribute__((used)) static unsigned long
FUNC_4 (void)
{
  unsigned long VAR_14 = FUNC_3 ();
  unsigned long VAR_15 = 0;
  unsigned int VAR_16;

  if (FUNC_2 (VAR_14))
    {
      unsigned int VAR_17;






      if (FUNC_0 (VAR_14) == VAR_0)





 VAR_17 = 7;
      else
 VAR_17 = 12;

      for (VAR_16 = 0; VAR_16 <= VAR_17; VAR_16++)
 if (VAR_13[VAR_16]
     || (! VAR_9 && VAR_7 [VAR_16]))
   VAR_15 |= (1 << VAR_16);


      if (VAR_11
   && !VAR_5
   && VAR_6 != VAR_2
   && VAR_10)
 VAR_15 |= 1 << VAR_3;
    }
  else
    {


      for (VAR_16 = 0; VAR_16 <= 10; VAR_16++)
 if (VAR_13[VAR_16] && ! VAR_7 [VAR_16])
   VAR_15 |= (1 << VAR_16);


      if (! VAR_4
   && ! VAR_12
   && VAR_13[VAR_1]
   && ! VAR_7[VAR_1])
 VAR_15 |= 1 << VAR_1;



      if (VAR_11
   && !VAR_5
   && VAR_6 != VAR_2
   && (VAR_13[VAR_3]
       || VAR_10))
 VAR_15 |= 1 << VAR_3;
    }


  if (VAR_8)
    {
      unsigned int VAR_18;

      for (VAR_18 = 0; ; VAR_18++)
 {
   VAR_16 = FUNC_1 (VAR_18);
   if (VAR_16 == VAR_2)
     break;
   VAR_15 |= 1 << VAR_16;
 }
    }

  return VAR_15;
}
