
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int* FUNC_2 (int*,scalar_t__) ;
 int* FUNC_3 (int*,scalar_t__) ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;

void FUNC_4 ()
{
 if (++VAR_5 >= VAR_2) {
  ++VAR_4;
  VAR_2 += VAR_1;
  VAR_8 = FUNC_3 (VAR_8,
            VAR_2);
  VAR_7 = FUNC_3 (VAR_7,
        VAR_2);
  VAR_9 = FUNC_3 (VAR_9,
       VAR_2);
  VAR_6 = FUNC_2 (VAR_6,
           VAR_2);
 }

 if (VAR_5 > VAR_0)
  FUNC_1 (FUNC_0("too many rules (> %d)!"), VAR_0);

 VAR_7[VAR_5] = VAR_3;
 VAR_9[VAR_5] = 0;
 VAR_6[VAR_5] = 0;
}
