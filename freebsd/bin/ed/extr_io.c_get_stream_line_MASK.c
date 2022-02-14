
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_5 (int ) ;

int
FUNC_6(FILE *VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;

 while (((VAR_10 = FUNC_4(VAR_9)) != VAR_0 || (!FUNC_1(VAR_9) && !FUNC_2(VAR_9))) &&
     VAR_10 != '\n') {
  FUNC_0(VAR_6, VAR_7, VAR_11 + 1, VAR_1);
  if (!(VAR_6[VAR_11++] = VAR_10))
   VAR_4 = 1;
 }
 FUNC_0(VAR_6, VAR_7, VAR_11 + 2, VAR_1);
 if (VAR_10 == '\n')
  VAR_6[VAR_11++] = VAR_10;
 else if (FUNC_2(VAR_9)) {
  FUNC_3(VAR_8, "%s\n", FUNC_5(VAR_3));
  VAR_2 = "cannot read input file";
  return VAR_1;
 } else if (VAR_11) {
  VAR_6[VAR_11++] = '\n';
  VAR_5 = 1;
 }
 VAR_6[VAR_11] = '\0';
 return (VAR_4 && VAR_5 && VAR_11) ? --VAR_11 : VAR_11;
}
