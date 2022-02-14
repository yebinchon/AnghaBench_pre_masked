
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 size_t* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t* VAR_8 ;
 size_t* VAR_9 ;
 size_t* VAR_10 ;

char *
FUNC_0(char *VAR_11)
{
 uint32_t *VAR_12 = (uint32_t *)VAR_11;
 uint32_t VAR_13 = VAR_12[0] % VAR_0;
 uint32_t VAR_14 = VAR_12[0] / VAR_0;
 char *VAR_15 = (char *)(&VAR_10[-1]);

 if (VAR_13 != VAR_1 && VAR_14 >= VAR_2[VAR_13])
  return (((void*)0));
 if (VAR_7 == VAR_1)
  VAR_10[-1] = VAR_7;
 else
  VAR_10[-1] = VAR_0 * (VAR_8 - VAR_10) + VAR_7;
 VAR_7 = VAR_13;
 VAR_5 = VAR_2[VAR_13];
 VAR_6 = VAR_9[VAR_13];
 VAR_10 = VAR_12 + 1;
 if (VAR_7 != VAR_1) {
  VAR_8 = &VAR_10[VAR_14];
  VAR_4 = &VAR_10[(VAR_14 + VAR_6) % VAR_5];
 }
 VAR_3 = &VAR_10[VAR_5];
 return (VAR_15);
}
