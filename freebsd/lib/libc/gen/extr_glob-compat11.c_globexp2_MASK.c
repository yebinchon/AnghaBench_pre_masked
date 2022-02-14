
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glob_limit {int dummy; } ;
typedef int glob11_t ;
typedef scalar_t__ Char ;



 scalar_t__ const VAR_0 ;


 int VAR_1 ;

 scalar_t__ const VAR_2 ;
 int FUNC_0 (scalar_t__ const*,int *,struct glob_limit*,int *) ;
 int FUNC_1 (scalar_t__*,int *,struct glob_limit*) ;
 int FUNC_2 (char*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(const Char *VAR_3, const Char *VAR_4, glob11_t *VAR_5,
    struct glob_limit *VAR_6)
{
 int VAR_7, VAR_8;
 Char *VAR_9, *VAR_10;
 const Char *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 Char VAR_15[VAR_1];


 for (VAR_9 = VAR_15, VAR_12 = VAR_4; VAR_12 != VAR_3; *VAR_9++ = *VAR_12++)
  continue;
 *VAR_9 = VAR_0;
 VAR_10 = VAR_9;


 for (VAR_7 = 0, VAR_11 = ++VAR_3; *VAR_11 != VAR_0; VAR_11++)
  if (*VAR_11 == 129) {

   for (VAR_12 = VAR_11++; *VAR_11 != VAR_2 && *VAR_11 != VAR_0; VAR_11++)
    continue;
   if (*VAR_11 == VAR_0) {




    VAR_11 = VAR_12;
   }
  }
  else if (*VAR_11 == 130)
   VAR_7++;
  else if (*VAR_11 == 128) {
   if (VAR_7 == 0)
    break;
   VAR_7--;
  }


 if (VAR_7 != 0 || *VAR_11 == VAR_0)
  return (FUNC_0(VAR_4, VAR_5, VAR_6, ((void*)0)));

 for (VAR_7 = 0, VAR_14 = VAR_12 = VAR_3; VAR_12 <= VAR_11; VAR_12++)
  switch (*VAR_12) {
  case 129:

   for (VAR_13 = VAR_12++; *VAR_12 != VAR_2 && *VAR_12 != VAR_0; VAR_12++)
    continue;
   if (*VAR_12 == VAR_0) {




    VAR_12 = VAR_13;
   }
   break;

  case 130:
   VAR_7++;
   break;

  case 128:
   if (VAR_7) {
       VAR_7--;
       break;
   }

  case 131:
   if (VAR_7 && *VAR_12 == 131)
    break;
   else {

    for (VAR_9 = VAR_10; (VAR_14 < VAR_12); *VAR_9++ = *VAR_14++)
     continue;




    for (VAR_14 = VAR_11 + 1; (*VAR_9++ = *VAR_14++) != VAR_0;)
     continue;





    VAR_8 = FUNC_1(VAR_15, VAR_5, VAR_6);
    if (VAR_8)
     return (VAR_8);


    VAR_14 = VAR_12 + 1;
   }
   break;

  default:
   break;
  }
 return (0);
}
