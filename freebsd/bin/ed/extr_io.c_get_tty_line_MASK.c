
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 () ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_5 (int ) ;

int
FUNC_6(void)
{
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;

 for (;;)
  switch (VAR_12 = FUNC_4()) {
  default:
   VAR_10 = 0;
   FUNC_0(VAR_3, VAR_5, VAR_11 + 2, VAR_0);
   if (!(VAR_3[VAR_11++] = VAR_12)) VAR_6 = 1;
   if (VAR_12 != '\n')
    continue;
   VAR_7++;
   VAR_3[VAR_11] = '\0';
   VAR_4 = VAR_3;
   return VAR_11;
  case 128:
   if (FUNC_2(VAR_9)) {
    FUNC_3(VAR_8, "stdin: %s\n", FUNC_5(VAR_2));
    VAR_1 = "cannot read stdin";
    FUNC_1(VAR_9);
    VAR_4 = ((void*)0);
    return VAR_0;
   } else {
    FUNC_1(VAR_9);
    if (VAR_11 != VAR_10) {
     VAR_10 = VAR_11;
     continue;
    } else if (VAR_11)
     VAR_3[VAR_11] = '\0';
    VAR_4 = VAR_3;
    return VAR_11;
   }
  }
}
