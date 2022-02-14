
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* cfm; } ;
typedef TYPE_2__ mnt_map ;
typedef int key_val ;
struct TYPE_7__ {int cfm_flags; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (int ,char*,...) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 void FUNC_9 (TYPE_2__*,char*,char*) ;
 char* FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(mnt_map *VAR_5,
        FILE *VAR_6,
        char *VAR_7,
        char *VAR_8,
        char **VAR_9,
        void (*VAR_10) (mnt_map *VAR_11, char *, char *))
{
  char VAR_12[VAR_2];
  int VAR_13 = 0;
  int VAR_14 = 0;

  while (FUNC_3(VAR_12, sizeof(VAR_12), VAR_6)) {
    char *VAR_15;
    char *VAR_16;
    char *VAR_17;
    int VAR_18 = FUNC_8(VAR_12);
    VAR_14++;




    if (VAR_12[VAR_18 - 1] != '\n') {
      FUNC_6(VAR_4, "line %d in \"%s\" is too long", VAR_14, VAR_7);
      VAR_13 = 1;
    } else {
      VAR_12[VAR_18 - 1] = '\0';
    }




    VAR_17 = FUNC_7(VAR_12, '#');
    if (VAR_17)
      *VAR_17 = '\0';




    for (VAR_15 = VAR_12; *VAR_15 && FUNC_4((unsigned char)*VAR_15) && FUNC_5((unsigned char)*VAR_15); VAR_15++) ;




    if (!*VAR_15)
      goto again;




    for (VAR_16 = VAR_15; *VAR_16 && (!FUNC_4((unsigned char)*VAR_16) || !FUNC_5((unsigned char)*VAR_16)); VAR_16++) ;




    if (*VAR_16)
      *VAR_16++ = '\0';

    if (VAR_10 || (*VAR_8 == *VAR_15 && FUNC_0(VAR_8, VAR_15))) {
      while (*VAR_16 && FUNC_4((unsigned char)*VAR_16) && FUNC_5((unsigned char)*VAR_16))
 VAR_16++;
      if (*VAR_16) {



 char *VAR_19;

 if (VAR_5->cfm && (VAR_5->cfm->cfm_flags & VAR_0))
   VAR_19 = FUNC_10(VAR_15, VAR_16);
 else
   VAR_19 = FUNC_11(VAR_16);
 if (VAR_10) {
   (*VAR_10) (VAR_5, FUNC_11(VAR_15), VAR_19);
 } else {
   *VAR_9 = VAR_19;
   FUNC_1("%s returns %s", VAR_8, VAR_19);
 }
 if (!VAR_10)
   return 0;
      } else {
 FUNC_6(VAR_3, "%s: line %d has no value field", VAR_7, VAR_14);
      }
    }

  again:




    if (VAR_13) {
      while (FUNC_2(VAR_12, sizeof(VAR_12), VAR_6) &&
      !FUNC_7(VAR_12, '\n')) ;
      VAR_13 = 0;
    }
  }

  return VAR_10 ? 0 : VAR_1;
}
