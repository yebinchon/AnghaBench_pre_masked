
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loadedfile {int dummy; } ;
struct TYPE_2__ {char* fname; struct loadedfile* lf; } ;
typedef int * Lst ;
typedef scalar_t__ Boolean ;


 char* FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,int ,int,int ,struct loadedfile*) ;
 int VAR_2 ;
 int * FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 struct loadedfile* FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int ) ;
 int * VAR_8 ;
 char* FUNC_10 (char*,char*,int ) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 char* FUNC_13 (char*,char) ;
 int * VAR_9 ;

__attribute__((used)) static void
FUNC_14(char *VAR_10, Boolean VAR_11, Boolean VAR_12, int VAR_13)
{
    struct loadedfile *VAR_14;
    char *VAR_15;
    char *VAR_16;
    char *VAR_17, *VAR_18;
    int VAR_19;
    int VAR_20;






    VAR_15 = VAR_10[0] == '/' ? FUNC_6(VAR_10) : ((void*)0);

    if (VAR_15 == ((void*)0) && !VAR_11) {
 VAR_18 = FUNC_6(VAR_3->fname);
 VAR_17 = FUNC_13(VAR_18, '/');
 if (VAR_17 != ((void*)0)) {
     *VAR_17 = '\0';

     for (VAR_20 = 0; FUNC_12(VAR_10 + VAR_20, "../", 3) == 0; VAR_20 += 3) {
  VAR_17 = FUNC_13(VAR_18 + 1, '/');
  if (VAR_17 == ((void*)0) || FUNC_11(VAR_17, "/..") == 0)
      break;
  *VAR_17 = '\0';
     }
     VAR_16 = FUNC_10(VAR_18, VAR_10 + VAR_20, VAR_2);
     VAR_15 = FUNC_0(VAR_16, VAR_8);
     if (VAR_15 == ((void*)0))
  VAR_15 = FUNC_0(VAR_16, VAR_5);
     FUNC_7(VAR_16);
 }
 FUNC_7(VAR_18);

 if (VAR_15 == ((void*)0)) {






     char *VAR_21;
     Lst VAR_22 = ((void*)0);

     if ((VAR_21 = FUNC_13(VAR_10, '.'))) {
  VAR_22 = FUNC_5(VAR_21);
  if (VAR_22 != ((void*)0)) {
      VAR_15 = FUNC_0(VAR_10, VAR_22);
  }
     }
     if (VAR_15 == ((void*)0)) {
  VAR_15 = FUNC_0(VAR_10, VAR_8);
  if (VAR_15 == ((void*)0)) {
      VAR_15 = FUNC_0(VAR_10, VAR_5);
  }
     }
 }
    }


    if (VAR_15 == ((void*)0)) {



 VAR_15 = FUNC_0(VAR_10,
      FUNC_1(VAR_9) ? VAR_4 : VAR_9);
    }

    if (VAR_15 == ((void*)0)) {
 if (!VAR_13)
     FUNC_3(VAR_1, "Could not find %s", VAR_10);
 return;
    }


    VAR_19 = FUNC_9(VAR_15, VAR_0);
    if (VAR_19 == -1) {
 if (!VAR_13)
     FUNC_3(VAR_1, "Cannot open %s", VAR_15);
 FUNC_7(VAR_15);
 return;
    }


    VAR_14 = FUNC_8(VAR_15, VAR_19);

    FUNC_2();

    FUNC_4(VAR_15, 0, -1, VAR_7, VAR_14);
    VAR_3->lf = VAR_14;
    if (VAR_12)
 VAR_6 = VAR_12;
}
