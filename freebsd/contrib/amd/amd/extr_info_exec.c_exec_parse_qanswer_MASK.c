
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
typedef int qanswer ;
struct TYPE_6__ {TYPE_1__* cfm; } ;
typedef TYPE_2__ mnt_map ;
struct TYPE_7__ {int exec_map_timeout; } ;
struct TYPE_5__ {int cfm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,int,int,int ) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (int ,char*,int,char*) ;
 scalar_t__ FUNC_6 (char*,int,int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(mnt_map *VAR_5, int VAR_6, char *VAR_7, char *VAR_8, char **VAR_9, time_t *VAR_10)
{
  char VAR_11[VAR_2], *VAR_12 = ((void*)0);
  int VAR_13 = 0;
  int VAR_14 = 0;

  while (FUNC_6(VAR_11, sizeof(VAR_11), VAR_6)) {
    char *VAR_15;
    char *VAR_16;
    int VAR_17 = FUNC_8(VAR_11);
    VAR_14++;




    if (VAR_11[VAR_17 - 1] != '\n') {
      FUNC_5(VAR_3, "line %d in \"%s\" is too long", VAR_14, VAR_7);
      VAR_13 = 1;
    } else {
      VAR_11[VAR_17 - 1] = '\0';
    }




    VAR_16 = FUNC_7(VAR_11, '#');
    if (VAR_16)
      *VAR_16 = '\0';




    for (VAR_15 = VAR_11; *VAR_15 && !FUNC_3((unsigned char)*VAR_15) && !FUNC_4((unsigned char)*VAR_15); VAR_15++)
      ;;


    if (!*VAR_15)
      goto again;




    if (VAR_5->cfm && (VAR_5->cfm->cfm_flags & VAR_0))
      VAR_12 = FUNC_9(VAR_8, VAR_15);
    else
      VAR_12 = FUNC_10(VAR_15);
    *VAR_9 = VAR_12;
    FUNC_1("%s returns %s", VAR_8, VAR_12);

    FUNC_0(VAR_6);
    return 0;

  again:




    if (VAR_13) {
      while (FUNC_2(VAR_11, sizeof(VAR_11), VAR_6, VAR_4.exec_map_timeout) &&
      !FUNC_7(VAR_11, '\n')) ;
      VAR_13 = 0;
    }
  }

  return VAR_1;
}
