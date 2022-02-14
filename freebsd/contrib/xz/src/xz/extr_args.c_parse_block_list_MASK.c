
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,...) ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*,int ,scalar_t__) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__* FUNC_6 (size_t) ;

__attribute__((used)) static void
FUNC_7(char *VAR_3)
{

 if (VAR_3[0] == '\0' || VAR_3[0] == ',')
  FUNC_3(FUNC_0("%s: Invalid argument to --block-list"), VAR_3);


 size_t VAR_4 = 1;
 for (size_t VAR_5 = 0; VAR_3[VAR_5] != '\0'; ++VAR_5)
  if (VAR_3[VAR_5] == ',')
   ++VAR_4;


 if (VAR_4 > VAR_0 / sizeof(uint64_t) - 1)
  FUNC_3(FUNC_0("%s: Too many arguments to --block-list"),
    VAR_3);



 FUNC_2(VAR_2);
 VAR_2 = FUNC_6((VAR_4 + 1) * sizeof(uint64_t));

 for (size_t VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {

  char *VAR_7 = FUNC_5(VAR_3, ',');
  if (VAR_7 != ((void*)0))
   *VAR_7 = '\0';

  if (VAR_3[0] == '\0') {





   FUNC_1(VAR_6 > 0);
   VAR_2[VAR_6] = VAR_2[VAR_6 - 1];
  } else {
   VAR_2[VAR_6] = FUNC_4("block-list", VAR_3,
     0, VAR_1);


   if (VAR_2[VAR_6] == 0) {
    if (VAR_6 + 1 != VAR_4)
     FUNC_3(FUNC_0("0 can only be used "
       "as the last element "
       "in --block-list"));

    VAR_2[VAR_6] = VAR_1;
   }
  }

  VAR_3 = VAR_7 + 1;
 }


 VAR_2[VAR_4] = 0;
 return;
}
