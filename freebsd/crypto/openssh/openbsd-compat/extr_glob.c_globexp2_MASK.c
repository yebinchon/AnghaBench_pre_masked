
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glob_lim {int dummy; } ;
typedef int glob_t ;
typedef scalar_t__ Char ;



 scalar_t__ const VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 scalar_t__ const VAR_3 ;
 int FUNC_0 (scalar_t__*,int *,struct glob_lim*) ;
 int FUNC_1 (scalar_t__*,int *,struct glob_lim*) ;
 int FUNC_2 (char*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(const Char *VAR_4, const Char *VAR_5, glob_t *VAR_6,
    struct glob_lim *VAR_7)
{
 int VAR_8, VAR_9;
 Char *VAR_10, *VAR_11;
 const Char *VAR_12, *VAR_13, *VAR_14;
 Char VAR_15[VAR_2];


 for (VAR_10 = VAR_15, VAR_13 = VAR_5; VAR_13 != VAR_4; *VAR_10++ = *VAR_13++)
  ;
 *VAR_10 = VAR_0;
 VAR_11 = VAR_10;


 for (VAR_8 = 0, VAR_12 = ++VAR_4; *VAR_12; VAR_12++)
  if (*VAR_12 == 129) {

   for (VAR_13 = VAR_12++; *VAR_12 != VAR_3 && *VAR_12 != VAR_0; VAR_12++)
    ;
   if (*VAR_12 == VAR_0) {




    VAR_12 = VAR_13;
   }
  } else if (*VAR_12 == 130)
   VAR_8++;
  else if (*VAR_12 == 128) {
   if (VAR_8 == 0)
    break;
   VAR_8--;
  }


 if (VAR_8 != 0 || *VAR_12 == VAR_0)
  return FUNC_0(VAR_15, VAR_6, VAR_7);

 for (VAR_8 = 0, VAR_14 = VAR_13 = VAR_4; VAR_13 <= VAR_12; VAR_13++) {
  switch (*VAR_13) {
  case 129:

   for (VAR_14 = VAR_13++; *VAR_13 != VAR_3 && *VAR_13 != VAR_0; VAR_13++)
    ;
   if (*VAR_13 == VAR_0) {




    VAR_13 = VAR_14;
   }
   break;

  case 130:
   VAR_8++;
   break;

  case 128:
   if (VAR_8) {
    VAR_8--;
    break;
   }

  case 131:
   if (VAR_8 && *VAR_13 == 131)
    break;
   else {

    for (VAR_10 = VAR_11; (VAR_14 < VAR_13); *VAR_10++ = *VAR_14++)
     ;





    for (VAR_14 = VAR_12 + 1; (*VAR_10++ = *VAR_14++) != VAR_0; )
     ;





    VAR_9 = FUNC_1(VAR_15, VAR_6, VAR_7);
    if (VAR_9 && VAR_9 != VAR_1)
     return VAR_9;


    VAR_14 = VAR_13 + 1;
   }
   break;

  default:
   break;
  }
 }
 return 0;
}
