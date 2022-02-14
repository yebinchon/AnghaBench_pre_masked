
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_0 () ;
 int * VAR_13 ;

__attribute__((used)) static unsigned int
FUNC_1 (void)
{
  unsigned int VAR_14;


  if (!VAR_4)
    return VAR_0;


  if (!VAR_5)
    return VAR_0;



  if (VAR_10)
    return VAR_0;



  if (VAR_8)
    return VAR_0;
  if (!VAR_13[VAR_0]
      && !VAR_11
      && !FUNC_0 ())
    return 0;



  if (VAR_6 && VAR_9)
    for (VAR_14 = VAR_1; VAR_14 <= VAR_2; VAR_14++)
      if (!VAR_13[VAR_14]
   && VAR_7[VAR_14]
   && !VAR_12[VAR_14]
   && VAR_14 != VAR_3)
 return VAR_14;

  return VAR_0;
}
