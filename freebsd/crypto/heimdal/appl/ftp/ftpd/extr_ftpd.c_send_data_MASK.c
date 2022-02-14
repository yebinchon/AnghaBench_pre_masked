
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;



 char* FUNC_1 (char*,size_t*,struct stat*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 char* FUNC_7 (int ,int,int ,int ,int,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int,char*,size_t) ;
 int FUNC_11 (int,char*,...) ;
 int VAR_5 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,int *) ;
 int FUNC_14 (int,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16(FILE *VAR_9, FILE *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 static char *VAR_15;
 static size_t VAR_16;

 VAR_6 = 1;
 switch (VAR_7) {

 case 130:
     while ((VAR_11 = FUNC_5(VAR_9)) != VAR_0) {
  if (VAR_8 && FUNC_6())
      return;
  VAR_4++;
  if(VAR_11 == '\n')
      FUNC_13('\r', VAR_10);
  FUNC_13(VAR_11, VAR_10);
     }
     FUNC_12(VAR_10);
     VAR_6 = 0;
     VAR_8 = 0;
     if (FUNC_2(VAR_9))
  goto file_err;
     if (FUNC_2(VAR_10))
  goto data_err;
     FUNC_11(226, "Transfer complete.");
     return;

 case 129:
 case 128:
 if(VAR_6) {
     struct stat VAR_17;

     VAR_14 = FUNC_3(VAR_10);
     VAR_13 = FUNC_3(VAR_9);
     VAR_15 = FUNC_1 (VAR_15, &VAR_16,
    FUNC_4(VAR_13, &VAR_17) >= 0 ? &VAR_17 : ((void*)0));
     if (VAR_15 == ((void*)0)) {
  VAR_6 = 0;
  VAR_8 = 0;
  FUNC_9(451, "Local resource failure: malloc");
  return;
     }
     while ((VAR_12 = FUNC_10(VAR_13, VAR_15, VAR_16)) > 0 &&
     FUNC_14(VAR_14, VAR_15, VAR_12) == VAR_12) {
  VAR_4 += VAR_12;
  if (VAR_8 && FUNC_6())
      return;
     }
     FUNC_12(VAR_10);
     VAR_6 = 0;
     VAR_8 = 0;
     if (VAR_12 != 0) {
  if (VAR_12 < 0)
      goto file_err;
  goto data_err;
     }
 }
 FUNC_11(226, "Transfer complete.");
 return;
 default:
     VAR_6 = 0;
     VAR_8 = 0;
     FUNC_11(550, "Unimplemented TYPE %d in send_data", VAR_7);
     return;
 }

data_err:
 VAR_6 = 0;
 VAR_8 = 0;
 FUNC_9(426, "Data connection");
 return;

file_err:
 VAR_6 = 0;
 VAR_8 = 0;
 FUNC_9(551, "Error on input file");
}
