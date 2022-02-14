
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line_buff ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int *) ;
 scalar_t__ FUNC_1 (int *,char*,char*,char*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(FILE *VAR_3, FILE *VAR_4)
{
  char VAR_5[VAR_0], *VAR_6, *VAR_7, *VAR_8;
  int VAR_9, VAR_10 = 0, VAR_11 = 1;


  FUNC_3(VAR_5, 0, sizeof(VAR_5));


  while ((VAR_9 = FUNC_0(VAR_5, sizeof(VAR_5), VAR_3))) {
    VAR_10++;
    VAR_5[VAR_9 - 1] = '\0';


    if ((VAR_6 = FUNC_5(VAR_5, '#')) != ((void*)0)) {
      *VAR_6 = '\0';
    }


    VAR_7 = VAR_5;
    while (*VAR_7 != '\0' && FUNC_2((unsigned char)*VAR_7)) {
      VAR_7++;
    }


    if (*VAR_7 == '\0') {
      continue;
    }


    VAR_6 = VAR_7;
    while (*VAR_6 != '\0' && FUNC_2((unsigned char)*VAR_6) == 0) {
      VAR_6++;
    }
    if (*VAR_6 == '\0') {
      FUNC_4(VAR_1, "map line %d has no entry", VAR_10);
      goto err;
    }
    *VAR_6++ = '\0';
    if (*VAR_6 == '\0') {
      FUNC_4(VAR_1, "map line %d has no entry", VAR_10);
      goto err;
    }
    VAR_8 = VAR_6;


    if ((VAR_6 = FUNC_7(VAR_7, VAR_8)) == ((void*)0)) {
      FUNC_4(VAR_1, "parse error on line %d", VAR_10);
      goto err;
    }

    if (FUNC_1(VAR_4, "%s %s\n", VAR_7, VAR_6) < 0) {
      FUNC_4(VAR_1, "can't write to output stream: %s", FUNC_6(VAR_2));
      goto err;
    }


    FUNC_3(VAR_5, 0, sizeof(VAR_5));
  }


  VAR_11 = 0;

 err:
  return VAR_11;
}
