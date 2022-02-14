
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int* FUNC_0 (int*,scalar_t__) ;
 scalar_t__* FUNC_1 (scalar_t__*,scalar_t__) ;

int FUNC_2 ()
{
 if (++VAR_6 >= VAR_5) {
  VAR_5 += VAR_0;

  ++VAR_7;

  VAR_3 =
   FUNC_1 (VAR_3, VAR_5);
  VAR_2 =
   FUNC_1 (VAR_2, VAR_5);
  VAR_4 = FUNC_1 (VAR_4, VAR_5);
  VAR_1 =
   FUNC_0 (VAR_1,
            VAR_5);
 }

 if (VAR_6 == 1)

  VAR_3[VAR_6] = 0;

 else





  VAR_3[VAR_6] =
   VAR_3[VAR_6 - 1] + VAR_2[VAR_6 - 1];

 VAR_2[VAR_6] = 0;
 VAR_4[VAR_6] = 0;
 VAR_1[VAR_6] = 0;

 return VAR_6;
}
