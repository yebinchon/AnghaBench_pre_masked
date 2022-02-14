
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;






 char* FUNC_0 (char*,size_t*,struct stat*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (char,int *) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int ,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_13(FILE *VAR_4, FILE *VAR_5)
{
    int VAR_6, VAR_7 = 0;
    static char *VAR_8;
    static size_t VAR_9;
    struct stat VAR_10;

    VAR_1 = 1;

    VAR_8 = FUNC_0 (VAR_8, &VAR_9,
   FUNC_4(FUNC_3(VAR_5), &VAR_10) >= 0 ? &VAR_10 : ((void*)0));
    if (VAR_8 == ((void*)0)) {
 VAR_1 = 0;
 VAR_3 = 0;
 FUNC_8(451, "Local resource failure: malloc");
 return -1;
    }

    switch (VAR_2) {

    case 129:
    case 128:
 while ((VAR_6 = FUNC_11(FUNC_3(VAR_4), VAR_8, VAR_9)) > 0) {
     if (FUNC_12(FUNC_3(VAR_5), VAR_8, VAR_6) != VAR_6)
  goto file_err;
     VAR_0 += VAR_6;
     if (VAR_3 && FUNC_6())
  return (-1);
 }
 if (VAR_6 < 0)
     goto data_err;
 VAR_1 = 0;
 VAR_3 = 0;
 return (0);

    case 130:
 FUNC_10(553, "TYPE E not implemented.");
 VAR_1 = 0;
 VAR_3 = 0;
 return (-1);

    case 131:
    {
 char *VAR_11, *VAR_12;
 int VAR_13 = 0;
 while ((VAR_6 = FUNC_11(FUNC_3(VAR_4),
    VAR_8 + VAR_13,
    VAR_9 - VAR_13)) > 0){
     if (VAR_3 && FUNC_6())
  return (-1);
     VAR_0 += VAR_6;
     VAR_6 += VAR_13;
     VAR_13 = 0;
     for(VAR_11 = VAR_8, VAR_12 = VAR_8; VAR_11 < VAR_8 + VAR_6;) {
  if(*VAR_11 == '\n')
      VAR_7++;
  if(*VAR_11 == '\r') {
      if(VAR_11 == VAR_8 + VAR_6 - 1){
   VAR_13 = 1;
   VAR_11++;
   continue;
      }else if(VAR_11[1] == '\n'){
   *VAR_12++ = '\n';
   VAR_11 += 2;
   continue;
      }
  }
  *VAR_12++ = *VAR_11++;
     }
     FUNC_5(VAR_8, VAR_12 - VAR_8, 1, VAR_5);
     if(VAR_13)
  VAR_8[0] = '\r';
 }
 if(VAR_13)
     FUNC_9('\r', VAR_5);
 FUNC_2(VAR_5);
 if (FUNC_1(VAR_4))
     goto data_err;
 if (FUNC_1(VAR_5))
     goto file_err;
 VAR_1 = 0;
 VAR_3 = 0;
 if (VAR_7) {
     FUNC_7(226, "WARNING! %d bare linefeeds received in ASCII mode\r\n"
     "    File may not have transferred correctly.\r\n",
     VAR_7);
 }
 return (0);
    }
    default:
 FUNC_10(550, "Unimplemented TYPE %d in receive_data", VAR_2);
 VAR_1 = 0;
 VAR_3 = 0;
 return (-1);
    }

data_err:
    VAR_1 = 0;
    VAR_3 = 0;
    FUNC_8(426, "Data Connection");
    return (-1);

file_err:
    VAR_1 = 0;
    VAR_3 = 0;
    FUNC_8(452, "Error writing file");
    return (-1);
}
