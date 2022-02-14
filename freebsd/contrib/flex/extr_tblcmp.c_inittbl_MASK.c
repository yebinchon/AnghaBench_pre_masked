
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,size_t) ;

void FUNC_1 ()
{
 int VAR_10;

 FUNC_0 ((char *) VAR_1,

    (size_t) (VAR_2 * sizeof (int)));

 VAR_6 = 0;
 VAR_3 = VAR_6 + 1;
 VAR_5 = 0;

 if (VAR_9) {





  VAR_7[1] = VAR_0;

  for (VAR_10 = 2; VAR_10 <= VAR_4; ++VAR_10) {
   VAR_7[VAR_10] = VAR_10 - 1;
   VAR_8[VAR_10 - 1] = VAR_10;
  }

  VAR_8[VAR_4] = VAR_0;
 }
}
