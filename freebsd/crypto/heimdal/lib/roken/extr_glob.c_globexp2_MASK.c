
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int glob_t ;
typedef scalar_t__ Char ;



 scalar_t__ const VAR_0 ;



 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int *) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int FUNC_2 (char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(const Char *VAR_3, const Char *VAR_4,
      glob_t *VAR_5, int *VAR_6)
{
 int VAR_7;
 Char *VAR_8, *VAR_9;
 const Char *VAR_10, *VAR_11, *VAR_12;
 Char VAR_13[VAR_2 + 1];


 for (VAR_8 = VAR_13, VAR_11 = VAR_4; VAR_11 != VAR_3; *VAR_8++ = *VAR_11++)
  continue;
 VAR_9 = VAR_8;


 for (VAR_7 = 0, VAR_10 = ++VAR_3; *VAR_10; VAR_10++)
  if (*VAR_10 == 129) {

   for (VAR_11 = VAR_10++; *VAR_10 != VAR_1 && *VAR_10 != VAR_0; VAR_10++)
    continue;
   if (*VAR_10 == VAR_0) {




    VAR_10 = VAR_11;
   }
  }
  else if (*VAR_10 == 130)
   VAR_7++;
  else if (*VAR_10 == 128) {
   if (VAR_7 == 0)
    break;
   VAR_7--;
  }


 if (VAR_7 != 0 || *VAR_10 == VAR_0) {
  *VAR_6 = FUNC_0(VAR_13, VAR_5);
  return 0;
 }

 for (VAR_7 = 0, VAR_12 = VAR_11 = VAR_3; VAR_11 <= VAR_10; VAR_11++)
  switch (*VAR_11) {
  case 129:

   for (VAR_12 = VAR_11++; *VAR_11 != VAR_1 && *VAR_11 != VAR_0; VAR_11++)
    continue;
   if (*VAR_11 == VAR_0) {




    VAR_11 = VAR_12;
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
   if (VAR_7 && *VAR_11 == 131)
    break;
   else {

    for (VAR_8 = VAR_9; (VAR_12 < VAR_11); *VAR_8++ = *VAR_12++)
     continue;




    for (VAR_12 = VAR_10 + 1; (*VAR_8++ = *VAR_12++) != VAR_0;)
     continue;





    *VAR_6 = FUNC_1(VAR_13, VAR_5);


    VAR_12 = VAR_11 + 1;
   }
   break;

  default:
   break;
  }
 *VAR_6 = 0;
 return 0;
}
